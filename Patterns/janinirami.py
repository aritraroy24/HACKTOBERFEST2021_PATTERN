import numpy as np

screen_size = 40
theta_spacing = 0.07
phi_spacing = 0.02
illumination = np.array([*".,-~:;=!*#$@"])

A = 1
B = 1
R1 = 1
R2 = 2
K2 = 5
K1 = screen_size * K2 * 3 / (8 * (R1 + R2))


def render_frame(A: float, B: float) -> np.ndarray:
    cosA = np.cos(A)
    sinA = np.sin(A)
    cosB = np.cos(B)
    sinB = np.sin(B)

    output = np.full((screen_size, screen_size), " ")
    zbuffer = np.zeros((screen_size, screen_size))

    cosphi = np.cos(phi := np.arange(0, 2 * np.pi, phi_spacing))  # (315,)
    sinphi = np.sin(phi)  # (315,)
    costheta = np.cos(theta := np.arange(0, 2 * np.pi, theta_spacing))  # (90,)
    sintheta = np.sin(theta)  # (90,)
    circlex = R2 + R1 * costheta  # (90,)
    circley = R1 * sintheta  # (90,)

    x = (np.outer(circlex, cosB * cosphi + sinA * sinB * sinphi).T - circley * cosA * sinB).T  # (90, 315)
    y = (np.outer(circlex, sinB * cosphi - sinA * cosB * sinphi).T + circley * cosA * cosB).T  # (90, 315)
    z = ((K2 + cosA * np.outer(circlex, sinphi)).T + circley * sinA).T  # (90, 315)
    ooz = np.reciprocal(z)  # Calculates 1/z
    xp = (screen_size / 2 + K1 * ooz * x).astype(int)  # (90, 315)
    yp = (screen_size / 2 - K1 * ooz * y).astype(int)  # (90, 315)
    L1 = (((np.outer(cosphi, costheta) * sinB).T - cosA * np.outer(costheta, sinphi)).T - sinA * sintheta).T  # (90, 315)
    L2 = cosB * (cosA * sintheta - np.outer(costheta * sinA, sinphi).T).T  # (90, 315)
    L = np.around(((L1 + L2) * 8)).astype(int)  # (90, 315)
    mask_L = L >= 0  # (90, 315)
    chars = illumination[L]  # (90, 315)

    for i in range(90):
        mask = mask_L[i] & (ooz[i] > zbuffer[xp[i], yp[i]])  # (315,)

        zbuffer[xp[i], yp[i]] = np.where(mask, ooz[i], zbuffer[xp[i], yp[i]])
        output[xp[i], yp[i]] = np.where(mask, chars[i], output[xp[i], yp[i]])

    return output


def pprint(array: np.ndarray) -> None:
    """Pretty print the frame."""
    print(*[" ".join(row) for row in array], sep="\n")


if __name__ == "__main__":
    for _ in range(screen_size * screen_size):
        A += theta_spacing
        B += phi_spacing
        print("\x1b[H")
        pprint(render_frame(A, B))

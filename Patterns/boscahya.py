def gen(n, r=None):
    if r is None:
        r = []
    for x in range(n):
        length_r = len(r)
        r = [1 if i == 0 or i == length_r else r[i - 1] + r[i] for i in range(length_r + 1)]
        yield r


def draw(n):
    for p in gen(n):
        print(' '.join(map(str, p)).center(n * 2) + '\n')


def draw_beautiful(n):
    ps = list(gen(n))
    max_val = len(' '.join(map(str, ps[-1])))
    for p in ps:
        print(' '.join(map(str, p)).center(max_val) + '\n')


draw_beautiful(10)
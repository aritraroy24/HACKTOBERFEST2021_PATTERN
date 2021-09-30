let n = 5;
let pattern = "";
for (let i = 0; i < n; i++) {
    for (let j = 0; j < i; j++) {
        pattern += " ";
    }
    for (let k = 0; k < (n - i) * 2 - 1; k++) {
        pattern += "O";
    }
    pattern += "\n";
}
for (let i = 2; i <= n; i++) {
    // printing spaces
    for (let j = n; j > i; j--) {
        pattern += " ";
    }
    for (let k = 0; k < i * 2 - 1; k++) {
        pattern += "O";
    }
    pattern += "\n";
}
console.log(pattern);
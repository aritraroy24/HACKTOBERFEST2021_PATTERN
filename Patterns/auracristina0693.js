function pattern(n) {
  let pattern1 = "";
  for (let i = 0; i < n; i++) {
    pattern1 += "8".repeat(i);
    pattern1 += "\n";
  }
  for (let i = 0; i < n; i++) {
    pattern1 += "8".repeat(n - i);
    pattern1 += "\n";
  }
  console.log(pattern1);
}

pattern(8);
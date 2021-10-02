function pattern(n){
    let patternStr = "";
    for (let i = 0; i < n; i++) {
        patternStr += "*".repeat(i)
        patternStr += "\n";
    }
    for (let i = 0; i < n; i++) {
        patternStr += "*".repeat(n-i);
        patternStr += "\n";
    }
    console.log(patternStr);
}

pattern(5) 
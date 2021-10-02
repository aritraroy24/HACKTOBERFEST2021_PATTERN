function pattern(iters) {
    let output = "";
    for(let i=1; i<=iters; i++) {
        for(let j=0; j<iters-i; j++){
            output += " ";
        }
        for (let j=1; j<=i; j++) {
            output += j;
        }
        for (let j=i-1; j>0; j--) {
            output += j;
        }
        output += "\n";
    }
    console.log(output);
}

pattern(5);
let s = ''

for(let i =0+1 ; i < 10; i++){
    for(let k = 0; k < i; k++){
        s += '*'
    }
    s += '\n';
}
for(j = 0 ; j < 10 ; j++){
    for(let h = 10 ; h > j; h--){
        s += '*'
    }
    s += '\n';
}

console.log(s)
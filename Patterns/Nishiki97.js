//javacript version for 'aortiz24.py'
var size = 7;
var m = 0;
var i = 0;
var j = 0;
var end = "";
var patternString = "";
m = 2 * size - 2;
for (i = 0; i < size; i++) {
    for (j = 0; j < m; j++) {
        end = " ";
    }
    m = m - 1;
    for (j = 0; j < i + 1; j++) {
        patternString = "* ";
        end = " ";
    }
    patternString = patternString + end;
}
console.log(patternString);

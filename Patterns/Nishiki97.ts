//Typescript version for 'aortiz24.py'

let size: number = 7;
let m: number = 0;
let i: number = 0;
let j: number = 0;
let end: string = "";
let patternString: string = "";

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

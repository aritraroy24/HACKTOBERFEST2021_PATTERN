 let x = 4
 let y = 5
 let canvas = ''
 for (let i = 0; i < y; i++) {
     if (i == 2) {
         for (let k = 0; k <= x; k++) {
             canvas += '@ '
         }
     } else {

         for (let j = 0; j < x; j++) {
             if (j == 2) {
                 canvas += '@ '
             }
             canvas += '# '
         }
     }
     canvas += '\n';
 }
 console.log(canvas)
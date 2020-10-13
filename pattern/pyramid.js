let fullPyramid = (rows) => {
  for (let i = 1; i <= rows; i++) {
    let str = '';

    // Add the white space to the left
    for (let k = 1; k <= (rows - i); k++) {
      str += ' ';
    }

    // Add the '*' for each row
    for (let j = 0; j != (2 * i - 1); j++) {
      str += '*';
    }

    // Add the white space to the right
    for (let k = i + 1; k <= rows; k++) {
      str += ' ';
    }

    // Print the pyramid pattern for each row
    console.log(str);
  }
};
fullPyramid(5);

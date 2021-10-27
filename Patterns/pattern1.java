

/*

*
* *
* * *
* * * *


you see rows and coloums 
4 rows 

in 1st row - 1 column
in 2nd row - 2 columns
in 3rd row - 3 columns
in 4th row - 4 columns




*/



/*
                                                  *  Rules *

1.run the outer for loop the no of times you are having the lines 

which means 
no of lines  = no of rows  
which equal to 
no if times outer loop will run 

2.how many coloums are there which each row 
 
so its basically 
identify for every row number ,
*how many coloums are there 
*types of elements in the column

3.what do you need to print





*/


public class pattern1 {
    public static void main (String[] args) {
        p1(4);
    }

    static void p1(int n) {
        for (int row = 1; row <= n; row++) {
            // for every row, run the col
            for (int col = 1; col <= row; col++) {
                System.out.print("* ");
            }
            // when one row is printed, we need to add a newline
            System.out.println();
        }
    }


}


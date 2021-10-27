

/*
* * * * * 
* * * *
* * *
* *
*

note : try to find the formula relating rows and coloum

for row =r 


c=n-r+1



*/



public class pattern3 {
    public static void main (String[] args) {
        p3(5);
    }

    static void p3(int n) {
        for (int row = 1; row <= n; row++) {
            // for every row, run the col
            for (int col = 1; col <= n-row+1; col++) {
                System.out.print("* ");
            }
            // when one row is printed, we need to add a newline
            System.out.println();
        }
    }


}
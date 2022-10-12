

/*               

1
12
123
1234
12345

here we printing col no.


*/



public class pattern4 {
    public static void main (String[] args) {
        p4(5);
    }

    static void p4(int n) {
        for (int row = 1; row <= n; row++) {
            // for every row, run the col
            for (int col = 1; col <= row; col++) {
                System.out.print(col);
            }
            // when one row is printed, we need to add a newline
            System.out.println();
        }
    }


}
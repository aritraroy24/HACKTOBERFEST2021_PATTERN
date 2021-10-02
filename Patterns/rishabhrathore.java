
import java.util.Scanner;
public class rishabhrathore {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Value of num: ");
        int num = in.nextInt();
        pyramid(num);
    }
    static void pyramid(int num){
        for (int row = 1; row <=num ; row++) {

            for (int space = 0; space < num-row; space++) {
                System.out.print("  ");
            }
            for (int col = row; col >=1 ; col--) {
                System.out.print(col+" ");
            }
            for (int col = 2; col <=row; col++) {
                System.out.print(col+" ");
            }

            System.out.println();
        }
    }
}

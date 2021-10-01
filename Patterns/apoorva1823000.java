import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int input = scan.nextInt();
        int i = 0,j = 0,k = 0;
        for (i=1;i<=input;i++){
            for (k=input-i;k>=1;k--){
                System.out.print(" ");
            }
            for (j=1;j<=i;j++){
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}

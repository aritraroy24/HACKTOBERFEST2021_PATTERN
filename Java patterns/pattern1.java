import java.util.Scanner;

public class pattern1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int n = input.nextInt();
        for(int i =1; i<=n;i++){
            for(int j=1;j<=2*n-1; j++) {
                if(j>=n-(i-1) && j<=n+(i-1))
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}

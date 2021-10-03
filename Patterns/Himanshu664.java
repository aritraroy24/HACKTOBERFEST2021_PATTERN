import java.util.Scanner;
public class Main
{
     public static void main(String[] args)
        {
            Scanner sc = new Scanner(System.in);
 
            System.out.println("Enter the number of rows: ");
 
            int rows = sc.nextInt();
             
            for (int i=1; i<= rows ; i++)
            {
                for (int j = i; j < rows ; j++) {
                    System.out.print(" ");
                }   
                for (int k = 1; k <= (2*i -1) ;k++) {
                    if( k==1 || i == rows || k==(2*i-1)) {
                        System.out.print("*");
                    }
                    else {
                        System.out.print(" ");
                    }
                }
                System.out.println("");
            }
            sc.close();
        }
    }
/* 

RESULTANT OUTPUT WILL BE: 
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1

*/



import java.util.Scanner;

public class pattern2{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int n = input.nextInt();
        for(int i =1; i<=n;i++){
            for(int j=n;j>i; j--) {
                System.out.print("  ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            for(int k = i-1;k>=1;k--){
                System.out.print(k+" ");
            }
            System.out.println();
        }
    }
}


/*
RESULTANT OUTPUT WILL BE:
    1
    1 0
    1 0 1
    1 0 1 0
    1 0 1 0 1
    1 0 1 0
    1 0 1
    1 0
    1
*/


import java.util.Scanner;

public class pattern3{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of rows: ");
        int n = input.nextInt();
        for(int i =0; i<2*n;i++){
            int col= i>n ? 2*n-i : i;
            for(int j=0;j<col; j++) {
                if(j%2==0)
                    System.out.print(1+" ");
                else
                    System.out.print(0+" ");
            }
            System.out.println();
        }
    }
}
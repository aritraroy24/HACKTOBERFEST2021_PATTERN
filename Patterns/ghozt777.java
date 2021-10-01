import java.util.Scanner;

class ghozt777{
    public static void main(String[] args) {
        System.out.println("Enter n: ");
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.close();
        printPattern(n);
    }
    static void printPattern(int n){
        for(int i=1;i<=n;i++){
            for(int space = n-i;space>=0;space--){
                System.out.print(" ");
            }
            for(int j=1;j<=i;j++){
                System.out.print(j);
            }
            for(int k=i-1;k>=1;k--){
                System.out.print(k);
            }
            System.out.println();
        }
    }
}
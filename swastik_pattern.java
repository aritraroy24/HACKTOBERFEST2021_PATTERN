import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    int n = scn.nextInt();
    for(int i=0; i<n; i++){
        if(i<n/2){
            if(i==0){
                for(int j=0; j<=n/2; j++){
                    System.out.print("*	");
                }
                for(int j=n/2; j<n-2; j++){
                    System.out.print("	");
                }
            }else{
                for(int j=0; j<n/2; j++){
                    System.out.print("	");
                }
                System.out.print("*	");
                for(int j=n/2; j<n-2; j++){
                    System.out.print("	");
                }
            }
            System.out.print("*");
        }else if(i==n/2){
            for(int j=0; j<n; j++){
                System.out.print("*	");
            }
        }else{
            System.out.print("*");
            if(i==n-1){
                for(int j=0; j<n/2; j++){
                    System.out.print("	");
                }
                for(int j=n/2; j<n; j++){
                    System.out.print("*	");
                }
                
            }else{
                for(int j=0; j<n/2; j++){
                    System.out.print("	");
                }
                System.out.print("*	");
                
            }
        }
        System.out.println();
    }

 }
}

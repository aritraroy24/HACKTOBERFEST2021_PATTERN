/* 

 $ $ $ $ $ $ $ $ $ $ $ $ $ $ $
 $ $                       $ $
 $   $                   $   $
 $     $               $     $
 $       $           $       $
 $         $       $         $
 $           $   $           $
 $             $             $
 $           $   $           $
 $         $       $         $
 $       $           $       $
 $     $               $     $
 $   $                   $   $
 $ $                       $ $
 $ $ $ $ $ $ $ $ $ $ $ $ $ $ $       
*/



import java.util.Scanner;

public class tamalbag117 {
    public static void main(String[] args) {
        try {
        Scanner sc = new Scanner(System.in);
        System.out.print("Row Number :  ");
        
        int row = sc.nextInt();
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
        if(i==0||i==row-1||j==0||j==row-1||j==i||j==row-i-1)System.out.print(" $");
        else System.out.print("  ");
        } 
        System.out.println();   
        }
        sc.close();    
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
/* 

#
# #
# # #
# # # #
# # # # #
*/

/*

 ^ ^ ^ ^ ^
 ^ ^ ^ ^ 
 ^ ^ ^
 ^ ^
 ^
 */


package com.Patterns;

import java.util.Scanner;

public class Pattern2 {
    public static void main(String[] args) {
        try {
        Scanner sc = new Scanner(System.in);
        System.out.println("Row Number :  ");
        int row = sc.nextInt();
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < row-i; j++) {
        System.out.print("^ ");
        } 
        System.out.println();   
        }
        sc.close();    
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}


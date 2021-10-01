/* 

          *
        *   *
     *    *   *
    *  *  *  *  *
     *    *   *
        *   *
          *

*/

package com.Patterns;

import java.util.Scanner;

public class Pattern8 {
    public static void main(String[] args) {
        try {
        Scanner sc = new Scanner(System.in);
        System.out.println("Row Number :  ");
        int row = sc.nextInt();
        for (int i = 0; i < 2*row; i++) {
            int col = i>row?2*row-i:i;
            int space = row - col;
            for (int j = 0; j < space; j++) {
                System.out.print("  ");
               }    
            for (int j = 0; j < col; j++) {
             System.out.print("O ");
            } 
            System.out.println();   
            }
        sc.close();    
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}


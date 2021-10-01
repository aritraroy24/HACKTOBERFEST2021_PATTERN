package com.Patterns;

import java.util.Scanner;

public class Pattern9 {
    public static void main(String[] args) {
        try {
        Scanner sc = new Scanner(System.in);
        System.out.print("Row Number :  ");
        int row = sc.nextInt();
        int r= row;
        row = 2*row;
        System.out.println("\n\n___________________________________________________\n\n");
        for (int i = 0; i <= row; i++) {
        for (int j = 0; j <= row; j++) {
        int p = r - Math.min(Math.min(i, j), Math.min(row -i-1, row-j-1));
        System.out.print(p+"  ");
        } 
        System.out.println();   
        }
        sc.close();    
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}



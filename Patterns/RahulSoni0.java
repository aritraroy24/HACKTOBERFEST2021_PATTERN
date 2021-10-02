import java.util.Scanner;

public class PatternAvd5 {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
		 
		int n  =sc.nextInt();
		
		for(int i=1;i<=n;i++) {
		
		
		   for( int j =1;j<=n-i+1;j++) {
			System.out.print("* ");}
		   
		   for(int r=1;r<=i;r++) {
		   System.out.print("  ");}
		
		  for(int k =1;k<=i-1;k++) {
		 	System.out.print( "  ");}
			
		   for(int k =1 ; k<=n-i+1;k++) {
			System.out.print("* ");
		}
		System.out.println();}
		
		System.out.println();
		
		int e=n;
		
		for(int l=1;l<=e;l++) {
			
			
			for(int j=1;j<=l;j++) {
				System.out.print("* ");}
			for(int j=1;j<=e-l+1;j++)	{
				System.out.print("  ");}
			
			for(int j=1;j<=e-l;j++) {
				System.out.print("  ");
			}
			for(int j =1;j<=l;j++) {
				System.out.print("* ");
			}
			
			System.out.println(" ");
			}
			}}
	

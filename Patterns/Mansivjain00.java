import java.util.*;
class hollow_square_X_star_pattern
{
    static void pattern(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0||j==0||i==j||(i+j)==n-1||i==(n-1)||j==(n-1))
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
    
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows/columns");
        int n=sc.nextInt();
        pattern(n);
    }
}

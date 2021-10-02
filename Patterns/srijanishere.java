public class PATTERN
{
    public static void main()
    {
        int spaces = -1;
        
        //Loop to print the upper half
        for(int i=5; i>=1; i--)
        {
            //Loop tp print the left side of the current row along with spaces
            for(int j=1; j<=i; j++)
            {
                System.out.print("*");
            }
            for(int j=1; j<=spaces; j++)
            {
                System.out.print(" ");
            }
            if(i == 5)
            {
                for(int j=i-1; j>=1; j--)
                {
                    System.out.print("*");
                }
            }
            else
            {
                for(int j=i; j>=1; j--)
                {
                    System.out.print("*");
                }
            }
            spaces += 2;
            System.out.println();
        }
        
        spaces = 5;
        
        //Loop to print the lower half
        for(int i=2; i<=5; i++)
        {
            //Loop to print the left side of the current row along with spaces
            for(int j=1; j<=i; j++)
            {
                System.out.print("*");
            }  
            for(int j=1; j<=spaces; j++)
            {
                System.out.print(" ");
            }
            if(i == 5)
            {
                for(int j=i-1; j>=1; j--)
                {
                    System.out.print("*");
                }
            }
            else
            {
                for(int j=i; j>=1; j--)
                {
                    System.out.print("*");
                }
            }
            spaces -= 2;
            System.out.println();
        }   
    }    
}    
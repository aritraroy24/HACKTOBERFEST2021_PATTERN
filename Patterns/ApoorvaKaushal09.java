
import java.util.*;



class ApoorvaKaushal09
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc=new Scanner(System.in);
        try{
            System.out.println("Enter a number: ");
            int n=sc.nextInt();
            for (int i=0;i<n ;i++ )
            {
                for (int j=0;j<=n/2 ;j++ )
                {
                    if (i==0 && j!=0 && j!=n/2 || j==0 && i!=0 || j==n/2 && i!=0 || i==n/2)
                    {
                        System.out.print("* ");
                    }
                    else
                    {
                        System.out.print("  ");
                    }
                }  
                System.out.println();
            }
        }
       
        finally
        {
            sc.close();
        }
    }
}
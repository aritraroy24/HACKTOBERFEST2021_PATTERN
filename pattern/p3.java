import java.util.Scanner;
public class p3
{
public static void main(String[] args)
{
    Scanner in=new Scanner(System.in);
    int i,n,j,p;
    System.out.println("ENTER THE NUMBER");
    n=in.nextInt();
    for(i=1;i<=n;i++)
    {
        p=n+1-i;
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            System.out.print(p--);
            else
            System.out.print(" ");
        }
        System.out.println();
    }
}
}
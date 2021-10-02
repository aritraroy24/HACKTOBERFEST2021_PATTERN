import java.util.*;
public class Manas0916
{
    public static void main(String[] args)
    {
        Scanner in= new Scanner(System.in);
        System.out.println("Enter a number");
        int n=in.nextInt();
        int i, j, counter = 0;
        for (i = 0; i <n; i++)
        {
            System.out.print("*");
            for (j = 0; j <= n; j++)
            {
                if (j == n)
                    System.out.print("*");
                else if (j == counter || j == n - counter - 1)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            if (counter == n / 2)
            {
                counter = -99999;
            }
            else
                counter++;
            System.out.println();
        }

    }
}
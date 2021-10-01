class Pattern
{
	public static void main(String[] args) 
	{
    		int i,j,l,k;
		for (i=1; i<=3;i++) 
		{
      			for (j=0;j<=3-i;j++) 
        			System.out.print("  ");
			for (k=1;k<i;k++)
				System.out.print(k+ " ");
			for (l=i;l>=1;l--)
				 System.out.print(" "+ l + " ");
		      System.out.println();
    		}
  	}
}

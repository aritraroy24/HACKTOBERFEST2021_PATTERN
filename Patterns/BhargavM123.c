#include<stdio.h>


int main()
{
	int n, j, i, k;
	
	printf("Enter number of rows to show star pattern: ");
	scanf("%d",&n);
	
	for(i = 0; i <= n; i++)
	{
		int z = 1;
		for(j = n; j > i; j--)
			printf(" ");
			
		for(k = 0; k < i; k++){
		
			printf("%d ",z);
			z++;
		}
			printf("\n");	
			
	}
	
	for(i = 1; i < n; i++)
	{	
	    int z = 1;
		for(j = 0; j < i; j++)
			printf(" ");
		for(k = n; k > i;  k--){
			printf("%d ",z);
			z++;
		}
			printf("\n");
	}
	return 0;
}
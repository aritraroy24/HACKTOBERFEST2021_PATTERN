/*
for n = 6
	1
	11
	202
	3003
	40004
	500005  */

#include<stdio.h>

int main()
{
	int n;      
	scanf("%d",&n);
	printf("1\n");
	for(int i=2;i<=n;i++)
	{
		printf("%d",i-1);
		for(int j=2;j<i;j++)
		{
			printf("0");	
		}
		printf("%d",i-1);
		printf("\n");
	}
	return 0;
}
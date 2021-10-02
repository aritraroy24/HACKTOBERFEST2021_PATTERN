#include<stdio.h>

int main()
{
	int n, i, j, k;
	//scanf("%d", &n);
	n = 5;

	int spaces = (((n + 2) * (n + 3) / 2) - 3) + ((n - 1) * 2) - 1; // Calculation of spaces to start the code with
	/*
	 * Stars are calculated as if there's only n = 1 segment it has 3 (n+2) spaces
	 * If n = 2, then spaces to start with will be 3 + 4
	 * For n = 3, it will be 3 + 4 + 5 and so on
	 * So it is the sum of first (n + 2) natural numbers - (1 + 2)
	 * So it is equal to Formula = (((n+2)*(n+3)/2) - 3)
	 * And also going to next segment spaces are suddenly decreased by another 2 units
	 * So, in the first row it has ((n - 1) * 2) more spaces
	 * As in the last row of the last segment it will be left with 1 Space
	 * To avoid this so that it has no spaces in the last 1 is subtracted from the spaces
	 */

	int stars = 1; // Initialising number of stars to be printed.

	for (i = 3; i < n + 2; i++) // Loop for the (n-1) Segments having 3, 4, 5,... rows
	{
		for (j = 1; j <= i; j++) // Loop for each of the segment having (1 to i) rows
		{
			for (k = 1; k <= spaces; k++) // Loop for Spaces as calculated above
			{
				printf(" ");
			}
			printf("/");
			for (k = 1; k <= stars; k++) // Loop for the corresponding number of starts
			{
				printf("*");
			}
			printf("\\\n");

			stars += 2; // Number of stars is increased by 2 everytime in the same segment
			spaces--; // Number of spaces is decreased by 1 everytime in the same segment
		}

		stars += 4; // When going to the next segment stars is increased by 6 (2 in above loop and 4 here makes 6)
		spaces -= 2; // Number of spaces is decreased by 3(1 is decremented each time and hence this time also in the above loop and 2 decreased here) moving from one to next segment

	} // (n-1) segments completed

	// Coming to the last segment which has '|' in the lower part.

	for (j = 1; j <= 2; j++) // Normal printing (as the first (n-1) segments) for the above 2 rows in the last segment
	{
		for (k = 1; k <= spaces; k++)
		{
			printf(" ");
		}
		printf("/");
		for (k = 1; k <= stars; k++)
		{
			printf("*");
		}
		printf("\\\n");

		stars += 2;
		spaces--;
	}

	// Now the last n rows in the nth segment, which has '|'

	for (j = 1; j <= n; j++) // Loop for the n rows in the nth segment
	{
		for (k = 1; k <= spaces; k++) // Spaces are printed same as above
		{
			printf(" ");
		}
		printf("/");
		for (k = 1; k <= (stars - n) / 2; k++) // Excluding n places for '|' and printing its half  stars
		{
			printf("*");
		}
		for (k = 1; k <= n; k++) // Printing n '|'s
		{
			printf("|");
		}
		for (k = 1; k <= (stars - n) / 2; k++) // Now the remaining half stars
		{
			printf("*");
		}
		printf("\\\n");

		stars += 2; // Stars incremented same as above
		spaces--; // Spaces decremented uniformly as above

	}

	return 0;
}
/************************* ----- THE END ----- *************************/


/*
 * Author : Chaudhary Hamdan
 * Github link : https://github.com/hamdan-codes/
 */

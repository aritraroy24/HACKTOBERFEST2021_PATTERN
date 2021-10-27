C++ Program to Find Year is leap Year
 In this C++ leap year example, we used the If statement to chYear
Write a C++ Program to Find Year is leap Year with an example. In this C++ leap year example, we used the If statement to check whether 

year % 400 equals 0 – Year divisible by 400 is a leap year.eck whether 

year % 400 equals 0 – Year divisible by 400 is a leap year.
( year % 4 == 0 ) && ( year % 100 != 0)) – Any year divisible by 4 and that is a century year, then it is a leap year.
#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout << "\nPlease Enter the Year to Check the Leap Year =  ";
	cin >> year;
	
	if (( year % 400 == 0) || (( year % 4 == 0 ) && ( year % 100 != 0)))
	{
		cout << "\n" << year << " is a Leap Year";
	}
	else
	{
		cout << "\n" << year << " is Not a Leap Year";
	}

 	return 0;
}
C++ Program to Find Year is leap Year 1
Let me check with another year.

Please Enter the Year to Check the Leap Year =  2020

2020 is a Leap Year
C++ Program to Find Year is leap Year using Else If statement
#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout << "\nPlease Enter the Year to Check the Leap Year =  ";
	cin >> year;
	
	if (year % 400 == 0)
	{
		cout << "\n" << year << " is a Leap Year";
	}
	else if ( year%100 == 0)
	{
		cout << "\n" << year << " is Not a Leap Year";
	}
	else if ( year % 4 == 0 )
	{
		cout << "\n" << year << " is a Leap Year";
	}
	else
	{
		cout << "\n" << year << " is Not a Leap Year";
	}

 	return 0;
}
Please Enter the Year to Check the Leap Year =  2024

2024 is a Leap Year
C++ Program to check Year is leap Year using Nested If statement.

#include<iostream>
using namespace std;

int main()
{
	int year;
	
	cout << "\nPlease Enter the Year to Check the Leap Year =  ";
	cin >> year;
	
	if(year % 4 == 0)
	{
		if( year % 100 == 0) 
		{
			if ( year % 400 == 0)
			{
				cout << "\n" << year << " is a Leap Year";
			}
			else
			{
				cout << "\n" << year << " is Not a Leap Year";
			}
		}
		else
		{
			cout << "\n" << year << " is a Leap Year";
		}
	}
	else
	{
		cout << "\n" << year << " is Not a Leap Year";
	}

 	return 0;
}
Please Enter the Year to Check the Leap Year =  2016

2016 is a Leap Year


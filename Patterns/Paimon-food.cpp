//program to print cross within square pattern
#include<iostream>
using namespace std;
int printX(int x)
{
char *chars;
for (int i = 0; i < x; i++)
{
chars = new char[x];
chars[i] = '*';
chars[x - 1 - i] = '*';
for (int j = 0; j < x; j++)
{
if (j == i || j == (x - 1 - i))
{
continue;
}
chars[j] = ' ';
}
for(int k=0; k<x; k++)
{
if(i==0 || i==x-1)
{
chars[k]='*';
}
if(k==0 || k==x-1)
{
chars[k]='*';
}
cout<<chars[k];
}
cout<<endl;
}
}
int main()
{
int n=5;

printX(n);
return 0;
}

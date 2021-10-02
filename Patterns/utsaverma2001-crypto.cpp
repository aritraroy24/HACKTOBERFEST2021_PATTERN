//Pattern of 1 and 0
#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
 int n;
 cout<<"Enter the value of n ";
 cin>>n;
 cout<<n<<"\n";
 for(int i=0;i<=n;i++)
 {
  for(int j=1;j<=i;j++)
  {
   if((i+j)%2==0)
   { cout<<"\t 1"; }
   else
   { cout<<"\t 0"; }
  }
 cout<<"\n\n";
 }
}
 
return 0;
}
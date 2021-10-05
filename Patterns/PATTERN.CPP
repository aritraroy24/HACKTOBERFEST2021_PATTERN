#include<iostream.h>
#include<conio.h>
void condition(int i,int j,int n,int l)
{ int k=0;
  if(i>(l/2))
  {
   k=i-(l/2);
   if(k+j<(l/2)+1) cout<<n<<" ";
   else cout<<"  ";
  }
  else
  {k=i;
   if(k==j||k>j) cout<<n<<" ";
   else cout<<"  ";
  }
}
void main()
{
clrscr();
int i=0,j=0,n=0,m=0,l=0;
cin>>l;
for(i=0,m=(l/2)+1;i<l;i++)
{
 for(j=0;j<(l/2);j++)
 {n=(l/2)+1-j;
  condition(i,j,n,l);
 }
 n=m;
 for(j=0;j<(l/2)+1;j++)
 {
  condition(i,j,n,l);
  n++;
 }
 if(i<(l/2)) m--;
 else m++;
cout<<'\n';
}
getch();
}
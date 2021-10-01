#include<iostream>
using namespace std;

void draw1(int,int);
void draw2(int,int);

int main()
{
    int board_dim,box_dim,i;
    cout<<"Enter The Dimension of the Board(At least 3):";
    cin>>board_dim;
    cout<<"Enter The Dimension of Each Square(At least 3):";
    cin>>box_dim;
    if(board_dim<3 || box_dim<3)
    {
        cout<<"Too small Input(s)";
        return 0;
    }

    for(i=1;i<=board_dim;i++)
    {
        if(i%2!=0)
        draw1(box_dim,board_dim);
        else
        draw2(box_dim,board_dim);
    }

    return 0;
}

void draw1(int a,int b)
{
    for(int g=1;g<=a;g++)
    {
           for(int i=1;i<=b;i++)
        {
            if(i%2!=0)
            {
                for(int j=0;j<a;j++)
                cout<<"*";
            }
            else
            {
                for(int j=0;j<a;j++)
                cout<<" ";
            }  
        }
        cout<<endl;
    }
}

void draw2(int a,int b)
{
    for(int g=1;g<=a;g++)
    {
           for(int i=1;i<=b;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<a;j++)
                cout<<"*";
            }
            else
            {
                for(int j=0;j<a;j++)
                cout<<" ";
            }  
        }
        cout<<endl;
    }
}

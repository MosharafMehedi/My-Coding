#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum=0;
    int i,n;

    cout<<"Enter the number :";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"Total = "<< sum;
    getch();
}


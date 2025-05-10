#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n1,n2,sum,sub,mul,div,mod;
    //n1 = 20;
    //n2 = 5;

    cout<<"Enter 2 Number : ";
    cin>>n1>>n2;

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;
    mod = n1%n2;

    cout<<" The sum = "<<sum<<endl;
    cout<<" The subtraction = "<<sub<<endl;
    cout<<" The Multiplication = "<<mul<<endl;
    cout<<" The Division = "<<div<<endl;
    cout<<" The Modulas = "<<mod<<endl;

    getch();
}

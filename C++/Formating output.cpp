#include<iostream>
#include<conio.h>
#include<iomanip>//using function setprecision
using namespace std;

int main()
{
    float n1,n2,sum,sub,mul,div,mod;
    //n1 = 20;
    //n2 = 5;

    cout<<"Enter 2 Number : ";
    cin>>n1>>n2;

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;

    cout<<showpoint;//Auto show the point
    cout<<fixed;//show the digit after point
    cout<<setprecision(10);//show the total 10 digit

    cout<<setw(25)<<" The sum = "<<sum<<endl;

    //cout<<noshowpoint;

    cout<<setw(25)<<" The subtraction = "<<sub<<endl;
    cout<<setw(25)<<" The Multiplication = "<<mul<<endl;//setw = setword
    cout<<setw(25)<<" The Division = "<<div<<endl;

    getch();
}


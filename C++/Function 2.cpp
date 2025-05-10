#include<iostream>
#include<conio.h>
using namespace std;

void addition(int a,int b)
{
    int sum = a+b;
    cout<<" SUM = "<<sum<<endl;
}

void substraction(int a,int b)
{
    int sub = a-b;
    cout<<" SUB = "<<sub<<endl;
}

void multipication(int a,int b)
{
    int mul = a*b;
    cout<<" MUL = "<<mul<<endl;
}

void division(int a,int b)
{
    int div = a/b;
    cout<<" Div = "<<div<<endl;
}

int main()
{
    addition(10,20);
    substraction(20,5);
    multipication(4,3);
    division(40,8);
    division(40,8);


    getch();
}


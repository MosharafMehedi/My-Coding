#include<iostream>
#include<conio.h>
using namespace std;

void sum(int x, int y)
{
    int add = x+y;
    cout<<"Sum = "<<add<<endl;
}

void sum(int x, int y,int z)
{
    int add = x+y+z;
    cout<<"Sum = "<<add<<endl;
}

int main()
{
    sum(10,20);
    sum(15,26);
    sum(10,20,30);

    getch();
}

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    int x;
};

class B : public A
{
public:
    void boss()
    {
        x = 10;
    }
};
class C
{
public:
    int y;
    void c()
    {
        y = 15;
    }
};

class D : public B,public C
{
public:

    void sum()
    {
        cout<< "Sum = "<<x+y;
    }
};

int main()
{
    D add;
    add.sum();
    getch();
}


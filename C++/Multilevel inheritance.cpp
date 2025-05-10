#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout<< "I am a Student";
    }
};

class B : public A {};
class C : public B {};

int main()
{
    C obj;
    obj.display();
    getch;
}


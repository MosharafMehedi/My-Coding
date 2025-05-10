#include<iostream>
#include<conio.h>
using namespace std;

class A
{
public:
    void run()
    {
        cout<< "A is Running"<<endl;

    }
};

class B
{
public:
    void run2()
    {
        cout<< "B is Running"<<endl;
    }
};

class C : public B,public A
{
public:
    void run3()
    {
        cout<< "C is Running";
    }
};

int main()
{

  C ob;
  ob.run();
  ob.run2();
  ob.run3();
  getch();

}



#include<iostream>
#include<conio.h>
using namespace std;

class animal
{
public:
    void info()
    {
        cout<< "All Animal"<<endl;
    }
};

class dog : public animal
{
public:
    void bark()
    {
        cout<< "Dog = Row Row"<<endl;
    }
};

class cat : public animal
{
    public:
    void meow()
    {
        cout<<"Cat = Meow meow";
    }
};

int main()
{
   dog d;
   d.info();
   d.bark();

   cat c;
   c.info();
   c.meow();

    getch;
}



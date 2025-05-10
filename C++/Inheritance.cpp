#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class student : public person
{
public:
    int id;

    void display2()
    {
        cout<<"ID : "<<id<<endl;
    }
};

int main()
{
    student s1;
    s1.id = 3022;
    s1.name = "Mosharaf";
    s1.age = 22;
    s1.display();
    s1.display2();

    return 0;
}

#include<iostream>
using namespace std;
class student
{
    public :
    int id;
    double gpa;

    void display()
    {
      cout<<" ID = "<<id<<"  and  "<<"GPA = "<<gpa<<endl;
    }
};
int main()
{
    student Mehedi,Arif;
    Mehedi.id = 3022;
    Mehedi.gpa = 3.49;

    Arif.id = 3122;
    Arif.gpa = 3.25;


    Mehedi.display();
    Arif.display();

    return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks;



    cout<< "Enter a Marks :";
    cin>>marks;

    if(marks>100||marks<0)
        cout<< "Invalid Marks";

    else if(marks>=80)
    {
        cout<< " A+";
    }

    else if(marks>=69)
    {
        cout<< "A";
    }

    else if(marks>=59)
    {
        cout<< "A-";
    }

    else if(marks>=49)
    {
        cout<< "B";
    }

    else if(marks>=39)
    {
        cout<< "C";
    }
    else if(marks>=33)
    {
        cout<< "D";
    }
    else
        cout<< " F";


    getch();

}


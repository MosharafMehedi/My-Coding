#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int marks[5];

     cout<< "input :";

    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }

    cout<< "output : ";

     for(int i=0;i<5;i++)
    {
        cout<<marks[i];
    }


    getch();
}


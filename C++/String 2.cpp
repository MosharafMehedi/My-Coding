#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char name[20];
    cout<<"Enter Your name :" ;

    //cin>>name
    gets(name);
    cout<<"Welcome "<<name<<endl;

    getch();
}

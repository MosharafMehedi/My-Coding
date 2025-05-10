#include<iostream>
#include<conio.h>
using namespace std;

//pass value

/*void display(int num)
{
    num=20;
}
int main()
{

    int x = 10;
    cout<< "Before calling the function x - "<<x<<endl;

    display(x);
    cout<< "After calling the funtion x -"<<x<<endl;

    getch();

}*/

//pass reference

void display(int *num)
{
    *num=20;
}
int main()
{

    int x = 10;
    cout<< "Before calling the function x - "<<x<<endl;

    display(&x);
    cout<< "After calling the funtion x -"<<x<<endl;

    getch();

}


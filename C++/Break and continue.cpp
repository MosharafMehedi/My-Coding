#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int m;
    for(m=1; m<=100; m++)
    {
        if(m==10)
        {
            continue;
            //break;
        }
        cout<<m<<endl;
    }

    getch();
}


#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<< "Enter a any year : ";
    cin>>year;

    if(year%4==0 && year%100!=0)
    {
        cout<< "Leaf year";
    }

    else if(year%400==0)
    {
        cout<< "Leaf year";
    }
    else
    {
        cout<< "Not a leaf year";
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;

    cout<< "Enter a number :";
    cin>>n;

    if(n>0)
        cout<< "positive";

    else if(n<0)
        cout<< "negative";

    else
        cout<< "zero";

    return 0;

}


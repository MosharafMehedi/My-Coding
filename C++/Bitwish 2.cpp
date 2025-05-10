#include<iostream>
using namespace std;

int main()
{
    int a = 32;
    int b = 12;
    int c;

    c = a>>3;//1time 32/2=16 2time 16/2=8 3time 8/2=4
    cout<<c<<endl;

    c = a<<3;//1time 32*2=64 2time 64*2=128 3time 128*2=256
    cout<<c<<endl;
    return 0;
}


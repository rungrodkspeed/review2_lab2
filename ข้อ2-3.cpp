#include<iostream>
using namespace std;

int main()
{
    int x=5;
    if(x>=2)
    {
        cout << x;
        x-=2;
    }else{
        x+=2;
        cout << 2*x;
    }
    if(x<3)
    {

    }else{
        cout << x;
    }
    return 0;
}
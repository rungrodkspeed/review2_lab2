#include<iostream>
using namespace std;

int main()
{
    int x=1;
    while(x<=9)
    {
        cout << x;
        if(x%3==0){
            cout << "\n";
        }
        x+=1;
    }
    return 0;
}
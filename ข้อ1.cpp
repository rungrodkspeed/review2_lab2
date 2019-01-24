#include<iostream>
using namespace std;

int main()
{
    int a=5,b,w,x,y,z;
    cout << "Enter b:";
    cin >> b;
    w=a+b;
    x=a-b;
    y=a*b;
    cout << "a plus b equals " << w << endl;
    cout << "a minus b equals " << x << endl;
    cout << "a times b equals " << y << endl;
    if(b == 0){
        cout << "divided by b not value" << endl;
    }else{
        z=a/b;
        cout << "a divided by b equals " << z << endl;
    }
    return 0;
}
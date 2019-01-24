#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i=0,N;
    string name;
    cout << "Who is the one you love?:";
    cin >> name;
    cout << "How many rounds do you want to repeat?:";
    cin >> N;
    cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n";
    while(i<N){
        cout << "I love "<< name << "." << endl;
        i++;
    }
    cout << "<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3";
    return 0;
}
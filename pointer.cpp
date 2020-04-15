#include<iostream>
using namespace std;
int main()
{
    int x;
    int *p;
    p=&x;
    cout<< "enter the value of x\n";
    cin>> x;
    cout<<"all ouput : "<<x<<" "<<&x<<" "<<p<<" "<<*p;
}
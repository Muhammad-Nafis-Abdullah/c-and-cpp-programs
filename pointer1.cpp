#include<bits/stdc++.h>
using namespace std;

void pointer(int p)
{
    cout<<"\n\nthe given value is : "<<p;
    cout<<"\nthe location of the gien value is : "<<&p;
}
void pointer1(int *p)
{
    cout<<"\n\nthe given number is : "<<*p;
    cout<<"\nthe location of the nmber is : "<<p;
}
int main()
{
    int x,y;
    cout<<"enter two integer : ";
    cin>>x>>y;

//1st part :
    pointer(x);
    pointer(y);

//2nd part :
    pointer1(&x);
    pointer1(&y);
}

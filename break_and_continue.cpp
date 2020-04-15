#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cout<<"enter any number\n";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<i<<" ";
    }
    cout<<x<<" ";
    for(i=x-1;i<x;i--)
    {
        cout<<i<<" ";
        if(i==0)
            break;
    }
}

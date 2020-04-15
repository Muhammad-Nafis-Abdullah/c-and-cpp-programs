#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
    int n,x=1,y=1,num=0,sum=0;
    cout<<"*press any positive integer as the number of series or press 0 for ending the program : ";
    cin>>n;
    if(n>0)
    {
    int optn;
    cout<<"*press 1 to see the series according to ur given term.\n";
    cout<<"*press 2 to see the summation of series according to ur given term.\n";
    cout<<"*press 3 to see the last number of series according to ur given term.\n";
    cout<<"option : ";
    cin>>optn;
    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==2)
        {
            if(optn==1)
            {
                cout<<x<<" ";
            }    
            sum=x+sum;
        }
        else
        {
            num=x+y;
            x=y;
            y=num;
            if(optn==1)
            {
                cout<<num<<" ";
            }    
            sum=num+sum;
        }
    }
    if(optn==1)
    {
        cout<<endl;
    }
    if(optn==2)
    {
        cout<<sum<<endl;
    }
    else if(optn==3)
    {
        cout<<num<<endl;
    }
    }
    else
    {
        cout<<"..Good Bye..";
        break;
    }
    
}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[2*n],x=0,y=0;
    for(int i=1;i<=2*n;i++)
    {
        cin>>A[i];
        if(i%2!=0)
        {
            x=x+A[i];
        }
        else
        {
            y=y+A[i];
        }
    }
    if(x>y)
    {
        cout<<"Mishka";
    }
    else if(x<y)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }    
}
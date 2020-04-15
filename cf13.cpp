#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char A[n];
    int x=0,y=0;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]=='F' && A[i-1]=='S' && i>0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if(x>y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}
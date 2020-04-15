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
        if(A[i]=='F' && A[i-1]=='S' && i>1)
        {
            x++;
        }
        else if(A[i]=='S' && A[i-1]=='F' && i>1)
        {
            y++;
        }
    }
    cout<<x<<" "<<y<<endl;
    if(x>y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}
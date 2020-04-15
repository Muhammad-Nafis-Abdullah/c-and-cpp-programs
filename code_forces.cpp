#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    float p=sqrt(a);
    float q=sqrt(b);
    float r=sqrt(c);
    if(p+q<r)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}

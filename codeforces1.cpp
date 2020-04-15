#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned long long int A[n];
    for(int i=0;i<n;i++)
    {
       cin>>A[i];
       unsigned long long int sum;
       sum=sqrt(A[i]);
       if(sum*sum==A[i])
       {
           cout<<"YES: "<<sum<<endl;
       } 
       else
       {
           cout<<"NO\n";
       }   
    }
}
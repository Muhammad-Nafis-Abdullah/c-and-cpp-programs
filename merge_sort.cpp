#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,p,q,n1,n2;;
    cin>>r;
    int A[r],L[r],R[r];
    for(int i=0;i<r;i++)
    {
        cin>>A[i];
    }
    p=1;
    q=(r/2);
    n1=q-p+1;
    n2=r-q;
    for(int i=0;i<n1;i++)
    {
        L[i]=A[p+i-1];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=A[q+j];
    }
    L[n1+1]=32767;
    R[n2+1]=32767;
    int i=0;
    int j=0;
    for(int k=0;k<r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        cout<<A[k]<<" ";
    }
}
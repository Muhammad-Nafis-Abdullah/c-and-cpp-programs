#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int a;
        cout<<"enter your link list size : ";
        cin>>a;
        int A[a],u=0;
        cout<<"enter number according to ur given size of link list : ";
        for( u=0; u<a; u++)
        {
            cin>>A[u];
        }
        cout<<"the re-arranged new list is : ";
        int x,i,j;
        for(i=0; i<a; i++)
        {
            for( j=i+1; j<a; j++)
            {
                if(A[j]>A[i])
                {
                    x=A[j];
                    A[j]=A[i];
                    A[i]=x;
                }
            }
        }
        for(i=0; i<a; i++)
        {
            cout<<A[i]<<" ";
        }
    }
    return 0;
}

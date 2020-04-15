#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,M=0;//,x,y;
    cin>>i;//>>y;
    //for(i=x;i<=y;i++)
    //{
        int k=0;
        for(int j=0;j<i;)
        {
            if(i%2==0)
            {
                i=i/2;
            }
            else
            {
                i=(3*i)+1;
            }
            k++;
        }
        //if(M<k)
        //{
           // M=k;
        //}
    //}
    cout<<k;
}

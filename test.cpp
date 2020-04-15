#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,I;
    cin>>I;
    char name[I];
    for(int k=0;k<I;k++)
    {
        cin>>name[k];
    }
    while(i<I)
    {
            if( name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' )
            {
                i=i+1;
            }
            else
            {
                for(j;j<=i;j++)
                {
                    name[j]=name[i];
                    cout<<name[j];
                }
                i=i+1;
            }
    }
    for(j;j<i;j++)
    {
        name[j]=name[j-1];
        cout<<name[j];
    }
    cout<<endl;
    return 0;
}

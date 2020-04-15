#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int z,i,j=0;
    z=s.size();
    for(i=0;i<z;i++)
    {
        if(s[i]=='a')
        {
            j++;
        }
        else if(s[i]!='a' && s[i+1]=='a')
        {
            j++;
        }
        else if(i>0 && s[i-1]=='a' && s[i-2]==s[i])
        {
            j++;
        }
        else if(s[i]!='a' && s[i+1]!='a' && i==0 )
        {
            j++;
            break;
        }
        else
        {
            break;
        }    
    }
    cout<<j;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;;)
    {
        char n[5];
        cin>>n;
        if(n=="Hajj")
        {
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
            i++;
        }
        else if(n=="Umrah")
        {
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
            i++;
        }
        else if(n=="*")
        {
            break;
        }
    }
}

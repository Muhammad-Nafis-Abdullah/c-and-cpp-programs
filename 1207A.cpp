#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int b,p,f,result;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        if(2*(p+f)<=b)
        {
            result=((p*h)+(f*c));
            cout<<result<<endl;
        }
        else
        {
            if(h<c && 2*f<b)
            {
                int sum1 = f*c;
                int sum2 = ((b-(2*f))/2)*h;
                result =sum1+sum2;
                cout<<result<<endl;
            }
           else if(h>c && 2*p<b)
            {
                int sum1 = p*h;
                int sum2 = ((b-(2*p))/2)*c;
                result =sum1+sum2;
                cout<<result<<endl;
            }
            else if(h>c && 2*p>b)
            {
                result = (b/2)*h;
                cout<<result<<endl;
            }
            else if(2*p==b || 2*f==b)
            {
                if(h>c)
                {
                    result=h*p;
                    cout<<result<<endl;
                }
                else
                {
                    result = c*f;
                    cout<<result<<endl;
                }
            }

            else
            {
                result = (b/2)*c;
                cout<<result<<endl;
            }
        }
    }
}

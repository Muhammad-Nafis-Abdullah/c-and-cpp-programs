#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int x,y; //to get "hour" and "minute"
        char z;//to get ":" from the user
        cin>>x>>z>>y;
        if(x==0 && y==0)
        {
            break;
        }
        else if(y==00)
        {
            y=y+12;
            double n;
            n=(y-x)*30;
            printf("%.3f\n",n);
        }
        else
        {
            y=y/5;
            if(x<y+6)
            {
                int k;
                k=y*30;
                int m;
                m=(k*30)/360;
                double n;
                n=((x-y)*30)-m;
                printf("%.3f\n",n);
            }
            else
            {
                int k;
                k=y*30;
                int m;
                m=(k*30)/360;
                double n;
                n=((y+12-x)*30)-m;
                printf("%.3f\n",n);
            }
            
        }
        
    }
}
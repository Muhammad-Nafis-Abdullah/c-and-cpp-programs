#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int x,y; //to get "hour" and "minute"
        char z;//to get ":" from the user
        cin>>x>>z>>y;
        double n;
        if(x==0 && y==0)
        {
            break;
        }
        else if(y==00)
        {
            y=y+12;
            if(x>6)
            {
                n=(y-x)*30;
                printf("%.3f\n",n);
            }
            else
            {
                n=x*30;
                printf("%.3f\n",n);
            }
            
        }
        else if(x==0)
        {
            y=y/5;
            if(y>6)
            {
                int m;
                m=((12-y)*30*30)/360;
                n=((12-y)*30)-m;
                printf("%.3f\n",n);
            }
            else
            {
                int m;
                m=(y*30*30)/360;
                n=(y*30)-m;
                printf("%.3f\n",n);
            }
            
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
                n=((x-y)*30)-m;
                printf("%.3f\n",n);
            }
            else
            {
                int k;
                k=y*30;
                int m;
                m=(k*30)/360;
                n=((y+12-x)*30)-m;
                printf("%.3f\n",n);
            }   
        }  
    }
}
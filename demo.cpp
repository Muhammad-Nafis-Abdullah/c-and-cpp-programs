#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value of x\n";
    cin>>x;
    if(x==0)
    {
        cout<<"the value of x must be greater than 0\n";
    }
    else
    {
        float p,y;
        p=(x-1)/x;
        y=p+pow(p,2)/2+pow(p,3)/3+pow(p,4)/4;
        cout<<p<<endl;
        cout<<"the polynomial value is = "<<y;    
    }
    
}
#include<iostream>
using namespace std;
int main()
{
    int i=0,num[i],sum=0,multi=0,div=0,sub=0;
    char ch;
    cout<<"enter + or - or * or / what u want to do\n";
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"enter number\n";
        for(i=0;i<i+1;i++)
        {
            cin>>num[i];
            sum=num[i]+sum;
        }    
        cout<<"the value of ur calculation is =" << sum;
        break;
        
        case '*':
        cout<<"enter number\n";
        for(i=0;i<i+1;i++)
        {
            cin>>num[i];
            multi=num[i]*multi;
        }    
        cout<<"the value of ur calculation is =" << multi;
        break;

        case '-':
        cout<<"enter number\n";
        for(i=0;i<2;i++)
        {
            cin>>num[i];
            sub=num[i]+sub;
        }    
        cout<<"the value of ur calculation is =" << sub;
        break;

        case '/':
        cout<<"enter number\n";
        for(i=0;i<2;i++)
        {
            cin>>num[i];
            div=num[i]+div;
        }    
        cout<<"the value of ur calculation is =" << div;
        break;

    }

}
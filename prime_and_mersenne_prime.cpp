#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,num;
    cout<<"enter your number\n";
    cin>>num;
    for(i=2;i<num;i++)
    {
        int mod;
        mod=num%i;
        if(mod==0)
        {
            cout<<"the number is not prime\n";
            break;
        }
        else
        {
            cout<<"the number is prime\n";
            int NUM=pow(2,num);
            int MP=NUM-1;
            int I;
            for(I=2;I<MP;I++)
            {
                int MOD;
                MOD=MP%I;
                if(MOD==0)
                {
                    cout<<num<<" has no mersenne prime\n";
                    break;
                }
                else
                {
                    cout<<"mersenne prime number is ="<<MP<<endl;
                    break;
                }
                
            }
            cout<<NUM<<endl;
            cout<<MP<<endl;
            break;
        }
    }
}
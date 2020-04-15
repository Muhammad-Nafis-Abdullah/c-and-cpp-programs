#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,i;
    cout<<"enter ur number\n";
    cin>>num;
    for(i=2;i<num;i++)
    {
        int x=num%i;
        if(x==0)
        {
        cout<<num<<" = isn't a prime number\n";
        break;
        }
        else
        {
            cout<<num<<" = is a prime number\n";
            int result= pow(2,num);
            int mp=result-1;
            int j;
            for(j=2;j<mp;j++)
            { 
                int Mp=mp%j;
                if(Mp==0)
                {
                    cout<<Mp<<" = isn't a mersenne prime number\n";
                    break;
                }
                else if(Mp!=0)
                {
                    cout<<"mersenne prime number is = "<<mp<<endl;
                    break;
                }
                break;
            }
        }
    }
    return 0;
}
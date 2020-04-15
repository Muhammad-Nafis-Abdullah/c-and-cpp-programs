#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int i=0,j=0,I;
        cout<<"enter ur string size : ";
        cin>>I;
        if(I==0)
            break;
        char name[I];
        cout<<"enter word or random alphabet according to your given size : ";
        for(int k=0; k<I; k++)
        {
            cin>>name[k];
        }
        cout<<"result : ";
        while(i<I)
        {
            if( name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' )
            {
                i=i+1;
            }
            else
            {
                for(j; j<=i; j++)
                {
                    name[j]=name[i];
                    cout<<name[j];
                }
                i=i+1;
            }
        }
        for(j; j<i; j++)
        {
            name[j]=name[j-1];
            cout<<name[j];
        }
        cout<<endl<<endl<<"     ____________________________________________________"<<endl;
        cout<<"    |                                                    |"<<endl;
        cout<<"    | * enter any positive integer number to test again. |\n"<<"    | * enter 0 to exit the program.                     |"<<endl;
        cout<<"    |____________________________________________________|"<<endl<<endl<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(;;)
    {
        int a;
        cout<<"enter your link list size : ";
        cin>>a;
        if(a>0)
        {
            int A[a],u=0;
            cout<<"enter number according to ur given size of link list : ";
            for( u=0; u<a; u++)
            {
                cin>>A[u];
            }
            cout<<endl<<endl<<"                ___________________________________________\n";
            cout<<"               |                                           |\n";
            cout<<"               |  * press 1 to insert a value.             |\n";
            cout<<"               |  * press 2 to delete a value.             |\n";
            cout<<"               |  * press 3 to re-arrange from max to min. |\n";
            cout<<"               |  * press 4 to re-arrange from min to max. |\n";
            cout<<"               |___________________________________________|"<<endl<<endl<<endl;
            int X;
            cout<<endl<<"enter the option u want to see : ";
            cin>>X;

            if(X==1)
            {
                cout<<endl<<endl<<"                ______________________________________\n";
                cout<<"               |                                      |\n";
                cout<<"               | * press 1 to insert as a new number. |\n";
                cout<<"               | * press 2 to overwrite on a number.  |\n";
                cout<<"               |______________________________________|"<<endl<<endl<<endl;
                int Y;
                cout<<"enter the option u want to see : ";
                cin>>Y;
                if(Y==1)
                {
                    cout<<"enter the number which u want to insert as a new member to the list : ";
                    int Z;
                    cin>>Z;
                    A[u]=Z;
                    cout<<"the new list is : ";
                    for(int i=0; i<a+1; i++)
                    {
                        cout<<A[i]<<" ";
                    }
                }
                if(Y==2)
                {
                    cout<<"In which position u want to overwrite : ";
                    int y,z;
                    cin>>z;
                    if(z>a)
                    {
                        cout<<"u cross the size of list";
                    }
                    else if(z<=a)
                    {
                        cout<<"enter the number that u want to insert to the given position : ";
                        cin>>y;
                        A[z-1]=y;
                        cout<<"the new list is : ";
                        for(int i=0; i<a; i++)
                        {
                            cout<<A[i]<<" ";
                        }
                    }
                    cout<<endl;
                }

            }
            else if(X==2)
            {
                cout<<endl<<endl<<"               ________________________________________\n";
                cout<<"              |                                        |\n";
                cout<<"              |   * enter 1 to delete from the first.  |\n";
                cout<<"              |   * enter 2 to delete from the last.   |\n";
                cout<<"              |________________________________________|"<<endl<<endl<<endl;
                int Y;
                cout<<"enter the option u want to see : ";
                cin>>Y;
                cout<<"the new list is : ";
                if(Y==1)
                {
                    cout<<"[] ";
                    for(int i=1; i<a; i++)
                    {
                        cout<<A[i]<<" ";
                    }
                    cout<<endl;
                }
                else if(Y==2)
                {
                    for(int i=0; i<a-1; i++)
                    {
                        cout<<A[i]<<" ";
                    }
                    cout<<"[] "<<endl;
                }
            }
            else if(X==3)
            {
                cout<<"the re-arranged new list from max to min is : ";
                int x,i,j;
                for(i=0; i<a; i++)
                {
                    for( j=i+1; j<a; j++)
                    {
                        if(A[j]>=A[i])
                        {
                            x=A[j];
                            A[j]=A[i];
                            A[i]=x;
                        }
                    }
                }
                for(i=0; i<a; i++)
                {
                    cout<<A[i]<<" ";
                }
                cout<<endl;
            }
            else if(X==4)
            {
                cout<<"the re-arranged new list form min to max is : ";
                int x,i,j;
                for(i=0; i<a; i++)
                {
                    for( j=i+1; j<a; j++)
                    {
                        if(A[j]<=A[i])
                        {
                            x=A[j];
                            A[j]=A[i];
                            A[i]=x;
                        }
                    }
                }
                for(i=0; i<a; i++)
                {
                    cout<<A[i]<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"sorry!!! ur option wasn't in the given option\n";
            }
            cout<<endl<<endl<<"                ____________________________________________________"<<endl;
            cout<<"               |                                                    |"<<endl;
            cout<<"               | * enter any positive integer number to test again. |\n"<<"               | * enter 0 to exit the program.                     |"<<endl;
            cout<<"               |____________________________________________________|"<<endl<<endl<<endl;
        }
        else
            break;
    }
    return 0;

}



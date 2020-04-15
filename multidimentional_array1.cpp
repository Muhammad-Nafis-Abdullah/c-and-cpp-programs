#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number of matrix : ";
    cin>>x;
    for(int i=0; i<x; i++)
    {
        int y,z;
        printf("enter the dimention of matrix(%d) = ",i+1);
        cin>>y;
        cin>>z;
        int A[x][y][z];
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
            {
                printf("A[%d%d] = ",j+1,k+1);
                cin>>A[i][j][k];
                /*if(i+1==x && j+1==y)
                {
                    cout<<"show\n";
                    for(int I=0; I<x; I++)
                    {
                        for(int J=0; J<y; J++)
                        {
                            for(int K=0; K<z; K++)
                            {
                                printf("A[%d%d] = ",J+1,K+1);
                                cout<<A[I][J][K]<<" ";
                            }
                            cout<<endl;
                        }
                    }
                }*/
                cout<<"show : ";
                        cout<<A[i][j][k]<<endl;
            }
            cout<<endl;
        }
        //cout<<"_________________________________"<<endl<<endl<<endl;
    }


}


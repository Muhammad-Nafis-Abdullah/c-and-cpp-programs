#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct vector
    {
        int x;
        int y;
        int A[x][y];
    };
    int X;
    cout<<"how many vector u want to give : ";
    cin>>X;
    for(int i=0;i<X;i++)
    {
        cout<<"enter the dimension of the vector : ";
        cin>>vector.x;
        cin>>vector.y;
        for(int j=0;j<vector.x;j++)
        {
            for(int k=0;k<vector.y;k++)
            {
                printf("A[%d][%d] = ",j+1,k+1);
                cin>>vector.A[j][k];
            }
        }
    }
    return 0;
}

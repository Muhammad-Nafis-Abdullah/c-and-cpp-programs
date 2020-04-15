#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int result =fact(n);
    cout<<result<<endl;
    return main(); //return main function in the main function it workes as unlimited test case
}
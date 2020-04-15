#include<bits/stdc++.h>
using namespace std;

void sum(int a,int b) //when function doesn't return any value then use "void" before the function name 
{
    cout<<a+b<<endl;
}
int sub(int a,int b) //when function return any value then declare the return data type that is the "int" before the function name
{
    return a-b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    sum(a,b);
    cout<<sub(a,b);
}
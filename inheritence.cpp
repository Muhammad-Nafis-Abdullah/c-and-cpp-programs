#include<iostream>
using namespace std;
class Base:
{
    public:
    int x=5;
};
class Derived1 : public Base
{
    public:
    int y=6;
};
class Derived2 : public Derived1
{
    public:
    int z=7;
    cout<<x+y+z;
};
int main()
{
    
}

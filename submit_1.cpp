#include<iostream>
#include<math.h>
using namespace std;

class twoD
{
    public:
    int x1,x2;
    int y1,y2;
};
class threeD : public twoD
{
    public:
    int z1,z2;
    int a;
    a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
    int value;
    value = sqrt(a);
    void output()
    {
        cout<<"The euclidian distance value is: "<<value<<endl;
    };
};
int main()
{
    threeD obj;
    obj.cin>>x
}
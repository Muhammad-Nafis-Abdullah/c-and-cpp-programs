#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

class threeD
{
protected:
    double x1,x2,y1,y2,z1,z2;
public:
    threeD()
    {
     cout<<"input the value of x1:"<<endl;
    cin>>x1;
     cout<<"input the value of x2:"<<endl;
    cin>>x2;
     cout<<"input the value of y1:"<<endl;
    cin>>y1;
     cout<<"input the value of y2:"<<endl;
    cin>>y2;
     cout<<"input the value of z1:"<<endl;
    cin>>z1;
     cout<<"input the value of z2:"<<endl;
    cin>>z2;
    }
};
class twoD:public threeD
{
public:
    double X=fabs(x1-x2);
    double Y=fabs(y1-y2);
    double Z=fabs(z1-z2);
    double A=(X*X+Y*Y+Z*Z);
    double value=sqrt(A);
    void output()
    {
        cout<<"The euclidean distance is : "<<value<<endl;
    }
};
int main()
{
     twoD obj;
     obj.output();
     return 0;
}
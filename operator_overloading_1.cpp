#include<iostream>
using namespace std;
class pdate
{
    int month,date,year;
public:
    pdate()
    {
        month=0;
        date=0;
        year=0;
    }
    pdate(int x,int y,int z)
    {
        month=x;
        date=y;
        year=z;
    }
    pdate operator+(pdate obj1);
    pdate operator-(pdate obj1);
    void output()
    {
        cout<<month<<" "<<date<<"  "<<year<<endl;
    }
};
pdate pdate::operator+(pdate obj1)
{
    pdate temp;
    temp.month=month+obj1.month;
    temp.date=date+obj1.date;
    temp.year=year+obj1.year;
    return temp;
}
int main()
{
    int M,M1,D,D1,Y,Y1;
    cout<<"Give the month, date and year,first input:"<<endl;
    cin>>M>>D>>Y;
    cout<<"Give the month, date and year,second input:"<<endl;
    cin>>M1>>D1>>Y1;
    pdate date1(M,D,Y),date2(M1,D1,Y1),result;
    result=date1+date2;
    result.output();
    char c;
    cout<<"Enter a character:"<<endl;
    cin>>c;

    if(c=='M')
    {
        M=M+2;
        pdate date1(M,D,Y),date2(M1,D1,Y1),result;
        result=date1+date2;
        result.output();
    }
    else if(c=='D')
    {
        D=D+2;
        pdate date1(M,D,Y),date2(M1,D1,Y1),result;
        result=date1+date2;
        result.output();
    }
    else if(c=='Y')
    {
        Y=Y+2;
        pdate date1(M,D,Y),date2(M1,D1,Y1),result;
        result=date1+date2;
        result.output();
    }


    return 0;

}

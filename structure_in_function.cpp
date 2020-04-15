#include <bits/stdc++.h>
using namespace std;

struct Person
{
    //char name[50];
    string name;
    int age;
    float salary;
};
void display(struct Person p)
{
    cout<<"\ninformation of : "<<p.name<<endl;
    cout<<"name : "<<p.name;
    cout<<"\nage : "<<p.age;
    cout<<"\nsalary : "<<p.salary<<endl;
}
int main()
{
    struct Person p1,p2;
    
    /*                                         ___
    strcpy(p1.name,"Muhammad Nafis Abdullah");    | => [use this portion when using char type array in the structure body for
    p1.age=22;                                    |     getting input of string in this program which is consider as a 
    p1.salary=25000;                           ___|     name variable,,bt using of string datatype no need to apply this]
    */

    p1={"Muhammad Nafis Abdullah",22,25000},
    display(p1);
    
    p2={"Jaima Wasir Shashi",21,30000};
    display(p2);
}

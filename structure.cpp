#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int age;
};
int main()
{
    student a,b;
    cout<<"enter 1st student name : ";
    getline(cin,a.name);
    cout<<"enter 2nd student name : ";
    getline(cin,b.name);
    cout<<"enter age : ";
    cin>>a.age>>b.age;
    cout<<"Name :"<<a.name<<". "<<"Age :"<<a.age<<endl;
    cout<<"Name :"<<b.name<<". "<<"Age :"<<b.age<<endl<<endl;
    return main();
} 
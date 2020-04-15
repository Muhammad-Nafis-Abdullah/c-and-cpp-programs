#include<bits/stdc++.h>
using namespace std;

int main()
{
    char name[32];
    cout<<"enter ur name : ";
    cin.getline(name,32); //using getline(string name, string size) the string output will show with space
    cout <<"welcome : "<< name<<endl;
    string Name;
    cout<<"enter ur name with space : ";
    getline(cin,Name); //using getline(cin,variable_name) for input string with space
    cout<<"welcome : "<<Name;
}
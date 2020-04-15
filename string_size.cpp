//output: string size and ascii value of all individual character
#include<iostream>
using namespace std;
int main()
{
    char name[32];
    cout<<"enter ur name\n";
    cin.getline(name,32);
    int length= sizeof(name)/ sizeof(name[0]); //sizeof(name)=length
    cout<<length;
    for(int i=0;i<length;i++)
    {
        cout<<static_cast<int>(name[i])<<" "; //static_cast is used for changing data type..for example: form 'char' to 'int' ...vice varsa
    }
}

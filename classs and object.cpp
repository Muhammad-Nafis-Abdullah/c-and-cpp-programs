#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
     public :
     int id;
     double gpa;
      void show()
      {
          cout<<id <<"  "<<gpa<<endl;
      }
      void set(int x,double y)
      {
       id = x;
       gpa = y;
      }
};
 int main()
 {
     Student Alim,Rasel,Sifan;

     Alim.set(101,3.44);
     Alim.show();

     Rasel.set(102,3.15);
     Rasel.show();

     Sifan.set(103,3.55);
     Sifan.show();

     getch();
 }

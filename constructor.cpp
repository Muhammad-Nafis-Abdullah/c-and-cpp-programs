#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
      public:
          int id;
          double gpa;
          void display()
          {
              cout<<id<<"  "<<gpa<<endl;
          }
          Student (int x,double y) /* the "Student" function is called constructor...it's initialized object value when creating object....
                                                             ....it has no return type name as like void..*/
          {
              id = x;
              gpa = y;
          }
};
int main()
{
    Student Alim(101,3.44);
    Alim.display();

    Student Rasel(102,3.15);
    Rasel.display();

    getch();
}

#include<iostream>
using namespace std;
class junior
{
public:
    int junior_id;
    double junior_working_hour;
    char junior_name[32];
    void junior_data()
    {
        cout<<"Enter name of a junior"<<endl;
        cin>>junior_name;
        cout<<"Enter id of the junior"<<endl;
        cin>>junior_id;
    }
    void set_junior_working_hour()
    {
        cout<<"Enter working hour of the junior"<<endl;
        cin>>junior_working_hour;
    }
};
class senior:public junior
{
public:
    int senior_id;
    double senior_working_hour;
    char senior_name[32];
    void senior_data()
    {
        cout<<"Enter name of a senior"<<endl;
        cin>>senior_name;
        cout<<"Enter id of the senior"<<endl;
        cin>>senior_id;
        junior_data();
    }
    void set_senior_working_hour()
    {
        cout<<"Enter working hour of the senior"<<endl;
        cin>>senior_working_hour;
        set_junior_working_hour();
    }
    void monitor_junior()
    {
        cout<<"  [Senior department]  "<<endl<<endl;
        cout<<"name of a junior: "<<junior_name<<endl;
        cout<<"id of the junior: "<<junior_id<<endl;
        cout<<"working hour of the junior: "<<junior_working_hour<<endl<<endl;
    }
};
class boss:public senior
{
public:
    int boss_id;
    double boss_working_hour;
    char boss_name[32];
    void boss_data()
    {
        cout<<"Enter name of a boss"<<endl;
        cin>>boss_name;
        cout<<"Enter id of the boss"<<endl;
        cin>>boss_id;
        senior_data();
    }
    void set_boss_working_hour()
    {
        cout<<"Enter working hour of the boss"<<endl;
        cin>>boss_working_hour;
        set_senior_working_hour();
    }
    void monitor_senior()
    {
        cout<<"  [Department of bosses]  "<<endl<<endl;
        cout<<"name of a senior: "<<senior_name<<endl;
        cout<<"id of the senior: "<<senior_id<<endl;
        cout<<"working hour of the senior: "<<senior_working_hour<<endl;
        monitor_junior();
    }

};
class industry:public boss
{
public:
    industry()
    {
        boss_data();
        set_boss_working_hour();
    }
    void output()
    {
        cout<<"  [Industry department]  "<<endl<<endl;
        cout<<"name of a boss: "<<boss_name<<endl;
        cout<<"id of the boss: "<<boss_id<<endl;
        cout<<"working hour of the boss: "<<boss_working_hour<<endl;
        monitor_senior();
    }
    int operator>(industry obj)
    {
        if(junior_working_hour>obj.junior_working_hour)
            return 1;
        else
            return 0;
    }
    int operator<(industry obj)
    {
        if(junior_working_hour<obj.junior_working_hour)
            return 1;
        else
            return 0;
    }
};
int main()
{
    industry employee1,employee2;

    if(employee1>employee2)
        cout<<"Employee 1 is more hard worker than Employee 2"<<endl;
    else if(employee1<employee2)
        cout<<"Employee 1 is lazy than Employee 2"<<endl;
    else
        cout<<"They are same category"<<endl;
    return 0;
}

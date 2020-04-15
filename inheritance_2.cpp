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
        cout<<"Enter name of a junior employee"<<endl;
        cin>>junior_name;
        cout<<"Enter id of the junior employee"<<endl;
        cin>>junior_id;
    }
    void set_junior_working_hour()
    {
        cout<<"Enter working hour of the junior employee"<<endl;
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
        cout<<"Enter name of a senior employee"<<endl;
        cin>>senior_name;
        cout<<"Enter id of the senior employee"<<endl;
        cin>>senior_id;
        junior_data();
    }
    void set_senior_working_hour()
    {
        cout<<"Enter working hour of the senior employee"<<endl;
        cin>>senior_working_hour;
        set_junior_working_hour();
    }
    void monitor_junior()
    {
        cout<<"  [Department of Senior]  "<<endl<<endl<<endl;
        cout<<"name of a junior: "<<junior_name<<endl;
        cout<<"id of the junior: "<<junior_id<<endl;
        cout<<"working hour of the junior"<<junior_working_hour<<endl<<endl;
    }
};
class boss:virtual public senior, public junior
{
public:
    int boss_id;
    double boss_working_hour;
    char boss_name[32];
    void boss_data()
    {
        cout<<"Enter name of boss"<<endl;
        cin>>boss_name;
        cout<<"Enter id of boss"<<endl;
        cin>>boss_id;
        senior_data();
    }
    void set_boss_working_hour()
    {
        cout<<"Enter working hour of boss"<<endl;
        cin>>boss_working_hour;
        set_senior_working_hour();
    }
    void monitor_senior()
    {
        cout<<"  [Department of Bosses]  "<<endl<<endl<<endl;
        cout<<"name of a senior: "<<senior_name<<endl;
        cout<<"id of the senior: "<<senior_id<<endl;
        cout<<"working hour of the senior"<<senior_working_hour<<endl;
        monitor_junior();
    }

};
class industry:virtual public boss,virtual public senior, public junior
{
public:
    industry()
    {
        boss_data();
        set_boss_working_hour();
    }
    void output()
    {
        cout<<"  [Industry department]  "<<endl<<endl<<endl;
        cout<<"name of boss : "<<boss_name<<endl;
        cout<<"id of the boss : "<<boss_id<<endl;
        cout<<"working hour of the boss : "<<boss_working_hour<<endl;
        monitor_senior();
    }
};
int main()
{
    industry obj;
    obj.output();
    return 0;
}

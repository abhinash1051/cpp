#include<iostream>
using namespace std;
class employee
{
    protected :
    int emp_code[10];
    char name[20];

    void get()
    {

    
    cout<<"employee code :";
    cin>>emp_code[10];

    cout<<"employee name : ";
    cin>>name;

    }
};
class fultime : public employee
{

    int daily_rate;
    int number_of_days;
    int salary;

    void getdata()
    {
        cout<<"daily rate :";
        cin>>daily_rate;

        cout<<"number of days :";
        cin>>number_of_days;

    }

};
class partime : public fultime
{
    int number_of_working_hours;
    int hourly_rate;
    int salary;

    void accept()
    {
        cout<<"salary :";
        cin>>salary;

        cout<<"number of working hours :";
        cin>>number_of_working_hours;

        cout<<"haurly rate :";
        cin>>hourly_rate;

        cout<<"salary :";
        cin>>salary;
    }
};
int main()
{
    
}
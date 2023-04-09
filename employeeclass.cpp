#include<iostream>
using namespace std;
class person
{
    protected :
    char name[20];
    char address[50];
    int phone_no;      
};
class employee:public person
{
    public :
    int eno;
    char ename[20];
};
class manager:public employee
{
    public :
    char designation[30],department_name[40];
    int basic_salary;

    void accept_detail()
    {
        cout<<"enter the detail of manager :\n ";
        cout<<"-------------------------------\n";

        cout<<"\nenter employee no :";
        cin>>eno;

        cout<<"\n  enter name :";
        cin>>ename;

        cout<<"\n enter address :";
        cin>>address;

        cout<<" \n enter phone number :";
        cin>>phone_no;

        cout<<" \n enter designation :";
        cin>>designation;

        cout<<"\n enter department name :";
        cin>>department_name;

        cout<<"\nenter basic salary :";
        cin>>basic_salary;

    }
};
int main()
{
    int i ,cnt,temp;
    manager man[100];

    cout<<"how many manager you want to enter? :\n";
    cin>>cnt;

    for(i=1;i<=cnt;i++)
    {
        man[i].accept_detail();
    }
    temp  = 0;
    for(i=1;i<=cnt;i++)
    {
        if(man[temp].basic_salary<man[i].basic_salary)
        temp = i;
    }
    cout<<"\n manager with highest salary is :"<<man[temp].basic_salary;
    cout<<"\n and manager name is :"<<man[temp].ename;
    return 0;
}

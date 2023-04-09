#include<iostream>
#include<cstring>
using namespace std;
class person
{
    protected :
     char name[20];
     int age;

     public: 
        void setname(char*n)
        {
            strcpy(name,n);

        }
        void setage(int a)
        {
            age = a;
        }
        char*getname()
        {
            return name;
        }
        int getage(int a)
        {
            return age;
        }
};
class employee : public person
{
    int empId;
    int salary;

    public :
     void setempId(int Id)
     {
        empId = Id;
     }
     void setsalary(int s)
     {
        salary = s;
     }
     int getempId()
     {
        return empId;
     }
     int getsalary()
     {
        return salary;
     }
     void display()
     {
        cout<<"name ="<<name<<endl<<"age ="<<age<<endl<<"empId ="<<empId<<endl<<"salary ="<<salary<<endl;
     }
};
int main()
    {
        employee e;
        e.setname("vansh");
        e.setage(19);
        e.setempId(8527);
        e.setsalary(100000);

        e.display();

        return 0;

        
    }

#include<iostream>
using namespace std;
class student
{
    int roll;
    char name[125];

    public : 
        void getdata()
        {
            cout<<"\n------------------------------------";
            cout<<"\n enter roll no                :";
            cin>>roll;
            cout<<"\n enter student name           :";
            cin>>name;

        }
        void putdata()
        {
            cout<<"\n ---------------------------------";
            cout<<"\n ****************student marksheet ************";
            cout<<"\n roll no .              :"<<roll;
            cout<<"\n student name           :"<<name<<endl;

        }
};
class studentexam : public student
{
    public :
        int sub1,sub2,sub3,sub4,sub5,sub6;
        float per;
    public :
        void accept_data()
        {
            getdata();
            cout<<"\n enter marks for subject 1 :";
            cin>>sub1;
            cout<<"\n enter marks for subject 2 :";
            cin>>sub2;
            cout<<"\n enter marks for subject 3 :";
            cin>>sub3;
            cout<<"\n enter marks for subject 4 :";
            cin>>sub4;
            cout<<"\n enter marks for subject 5 :";
            cin>>sub5;
            cout<<"\n enter marks for subject 6 :";
            cin>>sub6; 

        }    
};
class studentresult : public studentexam
{
    public :
    void calculate()
    {
        per = (sub1*sub2*sub3*sub4*sub5*sub6)/6.0;
        cout<<"\n\n Total percentage     :"<<per;
        cout<<"\n---------------------------------------------\n";

    }

};
int main()
{
    studentresult str;
    int cnt ,i;
    cout<<"\n enter no. of student you want :";
    cin>>cnt;

    for(i=0;i<cnt;i++)
    {
        str.accept_data();
        str.getdata();
        str.calculate();

    
    }
    return 0;
}
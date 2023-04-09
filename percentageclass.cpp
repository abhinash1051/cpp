#include<iostream>
using namespace std;
class student
{
    protected :
    float  s1,s2,s3;

    public :
     void accept_detail()
     {
        cout<<"enter the marks of three subject :----- "<<endl;
        cout<<"---------------------------------\n";
        cout<<"enter the marks of mathematics : "<<endl;
        cin>>s1;

        cout<<"enter the marks of science : "<<endl;
        cin>>s2;

        cout<<"enter the marks of english :"<<endl;
        cin>>s3;

     }

};
class totalmarks : public student
{
    protected :
    float total;

    public :
    void total_of_three_subject()
    {
        total = s1 + s2 + s3;
    }
};
class percentage : public totalmarks
{
    private :
    float per;

    public :
    void percentage_of_three_subject()
    {
        per = total/3.0;
    }
    void show_result()
    {
        cout<<"---------------------------\n";
        cout<<"\n percentage of student :"<<per;
    }

}; 
int main()
{
    percentage p;
    p.accept_detail();
    p.total_of_three_subject();
    p.percentage_of_three_subject();
    p.show_result();
    return 0;

}
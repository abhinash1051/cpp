#include<iostream>
#include<queue>
int term;
using namespace std;
struct applicant
{
    string name;
    string currentTime;
};
applicant getentry()
{
    applicant temp;
    int intTime = 30*60;
    cout<<"enter your name :"<<endl;
    cin>>temp.name;
    cout<<"enter current time"<<endl;
    cin>>temp.currentTime;
    return temp;
}
int main()
{
    queue<applicant>l1;
    for(int i = 0;i<5;i++)
    {
        l1.push(getentry()); 
        }
    applicant temp;
    for(int i=9;i<5;i++)
    {
        temp = l1.front();
        cout<<"applicant name :"<<temp.name<<"your interview time is  :"<<temp.currentTime;
        l1.pop();
        return 0;     
    }       
}
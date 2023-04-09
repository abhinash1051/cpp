#include<iostream>
#include<queue>
using namespace std;
void showpq(priority_queue<int>gd)
{
    priority_queue<int>g=gd;
    while(!g.empty())
    {
        cout<<"\t"<<g.top();
        g.pop();

    }
    cout<<"\n";
}
int main()
{
    priority_queue<int>gquiz;
    gquiz.push(10);
    gquiz.push(4);
    gquiz.push(5);
    gquiz.push(50);
    gquiz.push(80);

    cout<<"the priority gqiz is :";
    showpq(gquiz);

    cout<<"\n gquiz.size() :"<<gquiz.size();
    cout<<"\ngquiz.top :"<<gquiz.top();

    cout<<"\ngquiz.pop() :";
    gquiz.pop();
    showpq(gquiz);

    return 0;




}

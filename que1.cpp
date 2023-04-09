#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"queue size before printing the element :"<<q.size()<<endl;
    cout<<"queue slelemt are ----"<<endl;

    while(!q.empty())
    {
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<endl;

    cout<<"queue size after printing the elemennt :"<<q.size()<<endl;
    return 0;
}
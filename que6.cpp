#include<iostream>
#include<queue>

using namespace std;
int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.pop();
    q.pop();
    cout<<"firts element of teh queue is : "<<q.front()<<endl;
    cout<<"the last element of the queue is :"<<q.back()<<endl;
    cout<<"the size of the queue is :"<<q.size()<<endl;

    return 0;
}
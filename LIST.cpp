#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
    list<int>l1;

    for(int i=0;i<5;i++)
    {
        l1.push_back(i*100);
    }
    l1.push_front(1000);
    l1.push_back(000);
    l1.reverse();
    l1.sort();
    cout<<"front element"<<l1.front()<<endl;

    list<int>::iterator x;
    for (x=l1.begin(); x != l1.end(); x++)
    {
        cout<<*x<<" ";

    }
    return 0;
    
}
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq = {1,3,4,5,5};
    deque<int>::iterator it = dq.begin();
    it++;


    it = dq.insert(it,10);

    std::cout<<"deque contains";
    for(it= dq.begin();it!=dq.end();it++)
    {
        cout<<" "<<*it;
        cout<<"\n";
    }
    return 0;

}

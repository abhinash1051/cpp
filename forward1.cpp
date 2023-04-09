#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>myforwardlist1 = {3,2,6};
    forward_list<int>myforwardlist2 = {8,3,4};

    myforwardlist1.sort();
    myforwardlist2.sort();

    myforwardlist1.merge(myforwardlist2);
    cout<<"elemnt after merging"<<endl;
    for(auto i=myforwardlist1.begin();i != myforwardlist1.end();++i)
    cout<<*i<<" ";
    return 0;
}
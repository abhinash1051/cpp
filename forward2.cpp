#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>flist1;
    forward_list<int>flist2;

    forward_list<int>flist3;
    flist1.assign({1,2,3});

    flist2.assign(5,10);

    flist3.assign(flist1.begin(),flist1.end());

    cout<<"the element of first forward list are :";
    for(int& a : flist1 )
    cout<<a<<" ";
    cout<<endl;

    cout<<"the element of second forward list is :";
    for(int&b : flist2)
    cout<<b<<" ";
    cout<<endl;

    cout<<"the element of third forward list is :";
    for(int&c : flist3)
    cout<<c<<" ";
    cout<<endl;

    return 0;






}
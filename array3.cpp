#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,6>values{10,20,30,40,50.60};

    cout<<"first element is :"<<values[0]<<endl;
    cout<<"last element is :"<<values[values.size()-1]<<endl;


    cout<<"first elemnet is :"<<values.front()<<endl;
    cout<<"last element is :"<<values.back()<<endl;
     return 0;
}
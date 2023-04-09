#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>numbers{10,20,30,40,50};

    array<string,5>cities{"NEW DELHI","mumbai","gwalior"};

    cout<<"element of number array ......"<<endl;
    for(auto it = numbers.rbegin();it!=numbers.rend();it++)
    cout<<*it<<" ";

    cout<<endl;

    cout<<"element of cities array....."<<endl;
    for(auto it = cities.rbegin();it != cities.rend();it++)
    cout<<*it<<" ";

    cout<<endl;

    return 0;
}
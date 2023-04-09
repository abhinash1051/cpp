#include<array>
#include<iostream>
using namespace std;
int main()
{
    int c=0;
    array<int,9> a = {1,2,3,4,5,6,7,8,9};

    for(auto i = a.begin(); i != a.end(); i++)

    {
        c++;
    }
    cout<<"the length of the given array is :"<<c;
    return 0;
}
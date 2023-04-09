#include<iostream>
#include<array>
using namespace std;
int oddintegar(array<int,5>a)
{
    int result = 0;
    for(int i = 0;i<a.size();i++)
    {
        result = result^a[i];
    }
    return result;
}
int main()
{
    array<int ,5>a = {1,4,4,9,1};


    int result = oddintegar(a);
    cout<<result<<endl;

    return 0;
}
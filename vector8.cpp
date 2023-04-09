#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1 = {10,20,5,40,2,30};
    vector<int>v2  = {100,10,20,30,200,300};

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int>v3(v1.size()+v2.size());

    vector<int>::iterator it,end;

    end = set_intersection()



}
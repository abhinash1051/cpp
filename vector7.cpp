#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int main()
{
    vector<int> v1{10,20,30,40,50};

    int sum = accumulate(v1.begin(),v1.end(),0);
    cout<<"sum :"<<sum<<endl;

    return 0;
}
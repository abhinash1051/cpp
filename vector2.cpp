#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> num = {};

    num.push_back(100);
    num.push_back(200);
    num.push_back(300);
    num.push_back(400);
    num.push_back(500);

    vector<int>::iterator it;

    cout<<" vector  element :";

    for(it = num.begin();it !=num.end();it++)
        cout<<"*it"<<" ";

        return 0;

}
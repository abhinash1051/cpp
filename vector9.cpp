#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<float>v1;

    v1.push_back(10.20);
    v1.push_back(19.22);
    v1.push_back(23.45);
    v1.push_back(12.34);
    v1.push_back(33.44);

    cout<<"vector elements are :";
    for(int i = 0;i<v1.size();++i)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    return 0;


}
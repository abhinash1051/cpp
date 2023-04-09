#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a  = {2,33,55,66,77,88};

    cout<<"vetctor :";
    for(int i =0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<endl;

    reverse(a.begin(),a.end());


    cout<<"reversed array ";
    for(int i = 0;i<a.size();i++)
        cout<<a[i]<<" ";

    cout<<endl;


    return 0;


}
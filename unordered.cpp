#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map< string , int>m;
    m["avinash "] = 100;
    m["vansh"] = 200;
    m["sid"] = 500;

    unordered_map<string,int>::iterator x;

    for(x  =m.begin(); x!= m.end();x++)
    {
        cout<<"key  :"<<x->first<< ",value :"<<x->second<<endl;

    }
    return 0;


}
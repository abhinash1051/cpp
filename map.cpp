#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<int ,int>m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(80,90));


    m.erase(30);
    

    map<int,int>::iterator x;

    for(x = m.begin() ; x != m.end() ; x++ )
    {
        cout<<"key  : " <<x->first<< ", value : "<<x->second<<endl;
        
    }
    return 0;
}
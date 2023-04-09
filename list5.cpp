#include<iostream>
#include<string>
#include<list>
using namespace std;
int main()
{
    list<string> lstr;
    list<string>::iterator l_iter;

    string str;

    while(true)
    {
        cout<<"enter string ( EXIT to quit )";
        getline(cin ,str);
        if(str =="EXIT")
        break;

        lstr.push_back(str);
    }
    cout<<"list element are"<<endl;
    for(l_iter =  lstr.begin();l_iter != lstr.end();l_iter)
    cout<<*l_iter<<endl;

    return 0;
    

}
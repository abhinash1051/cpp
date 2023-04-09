#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> num {10,23,34,45,56};

    list<int>::reverse_iterator revit;
    cout<<"list of elememt are :"<<endl;

    for(revit = num.rbegin();revit != num.rend();revit++)

    cout<<*revit<<endl;

    return 0;

}
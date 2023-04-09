#include<array>
#include<iostream>
using namespace std;
int main()
{
    array<int,5> values {10,20,30,40,50};
    array<char,10>chararray{'v','a','n','s','h'};
    array<float,6>floatarray{1.2,1.4,2.5};



    for(char c : chararray)
    {
        cout<<c;
    }
    cout<<endl;

    for(float f : floatarray)
    {
        cout<<f;
    }
    cout<<endl;

    // printing element
    cout<<"element at index 0 :"<<values[0]<<endl;
    cout<<"element at index 1 :"<<values[1]<<endl;
    cout<<"element at index 2 :"<<values[2]<<endl;
    cout<<"element at index 3 :"<<values[3]<<endl;
    cout<<"element at index 4 :"<<values[4]<<endl;

    // changing some element 
    values[0]  =100;
    values[4] = 500;

    for(int i : values)
    {
        cout<<i<<" ";

    }
    cout<<endl;


    // printing all element 
    cout<<"all element :"<<endl;
    
    return 0;




}
#include<iostream>
#include<array>
#include<tuple> // it is used for get<>()
using namespace std;
int main()
{
    int a[5] = {1,2,3,4,5}; // C style array

    array <int,5>ar = {1,2,3,4,5}; // Array using STL in C++
    array <int,5>ar2 = {2,4,6,8,10};
    array <int,5>ar3;


    //1 - Using at()
    for(int i =0; i < ar.size() ; i++)
        cout<<ar.at(i)<<" ";

    cout<<endl;
    //2 - using get<constant>(object)
    cout<<get<0>(ar)<<" ";
    cout<<get<1>(ar)<<" ";
    cout<<get<2>(ar)<<" ";
    cout<<get<3>(ar)<<" ";
    cout<<get<4>(ar)<<" "<<endl;

    // 3- using operator[]
     for(int i =0; i < ar.size() ; i++)
        cout<<ar[i]<<" ";

        cout<<endl;

  // Using front() and back()
    cout<<"First Element = "<<ar.front()<<endl;
    cout<<"Last Element = "<<ar.back()<<endl;

   // It will swap two array of same size
    ar.swap(ar2);

    cout<<"Array after swapping"<<endl;

    for(int i =0; i < ar.size() ; i++)
        cout<<ar[i]<<" ";

    cout<<endl;

    for(int i =0; i < ar2.size() ; i++)
        cout<<ar2[i]<<" ";

        cout<<endl;
    // using empty()
    if(ar2.empty())
    {
        cout<<"Array 2 is empty"<<endl;
    }
    else
    {
        cout<<"Array 2 is not empty"<<endl;
    }

    if(ar3.empty())
    {
        cout<<"Array 3 is empty"<<endl;
    }
    else
    {
        cout<<"Array 3 is not empty"<<endl;
    }
    // using fill() function

    ar.fill(0);
    for(int i =0; i < ar.size() ; i++)
        cout<<ar[i]<<" ";

    return 0;
}

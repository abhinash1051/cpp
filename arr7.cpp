#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] ={10,20,49,30};

    int size = sizeof(arr)/sizeof(int);

    sort(arr,arr+3);

    cout<<"sorted element are  :";
    for(int i = 0;i<size;i++)
    
    cout<<arr[i]<<" ";

    return 0;
}
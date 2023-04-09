#include<stdio.h>
#include<vector>

using namespace std;


int main()
{
    
     vector<int> num = {1,2,3,4,5,6,7};

     vector<int>::iterator it;

    cout<< " vector (num) element : ";

    for(it = num.begin();it != num.end();it++)
        cout<<"*it"<<" ";








    return 0;



}
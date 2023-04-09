#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int>arr;
    cout<<"enter 0 stop appemding element \n";
    cout<<"append any other number \n";
    int a;
    cin>>a;

    while(a)
    {
        arr.push_back(a);
        cout<<"press 0 to stop sppending";
        cout<<"append any other number \n";
        cin>>a;
    }
    cout<<"printing the vector.....\n";
    for(auto i : arr)
        cout<<i<<" ";
     cout<<endl;


     return 0;   
}
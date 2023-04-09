#include<iostream>
#include<deque>

using namespace std;
int main()
{
    deque<int> dq = { 10,20,12,33,34};
    cout<<"the order of reverse";


   for(auto it = dq.rbegin(); it != dq.rend();it++)
   cout<<" "<<*it;

   cout<<dq.max_size();

   return 0; 

}
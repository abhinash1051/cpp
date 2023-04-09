#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
  
    // assign 5 values of 10 each
    dq.assign(5, 10);
  
    cout << "The deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
  
    // re-assigns 10 values of 15 each
    dq.assign(10, 15);
  
    cout << "\nThe deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << " ";
    return 0;
}
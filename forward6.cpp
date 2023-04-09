#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    forward_list<int> fl1 = { 12, 25, 31, 41 };
    forward_list<int> fl2 = { 10, 20, 30 };
  
    // merge two forward list
    fl1.merge(fl2);
  
    // print the contents of the forward list
    cout << "List contains following elements" << endl;
    for (auto it = fl1.begin(); it != fl1.end(); ++it)
        cout << *it << " ";
  
    return 0;
}
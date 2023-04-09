#include<iostream>
#include<forward_list>
using namespace std;
int main()
{

    // initialising forward list
    forward_list<int> forward = { 10, 20, 40, 30, 70 };
 
    cout << "List elements before performing reverse operation: ";
 
    for (auto it = forward.begin(); it != forward.end(); ++it)
        cout << *it << " ";
 
    // Function that performs reverse operation
    forward.reverse();
 
    // printing elements of list
    cout << "\nList elements after performing reverse operation: ";
 
    for (auto it = forward.begin(); it != forward.end(); ++it)
        cout << *it << " ";
 
    return 0;
}

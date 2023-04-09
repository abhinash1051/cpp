#include<iostream>
#include<queue>
using namespace std;
int main()
{
    
    queue<int> myqueue;
    myqueue.push(1);
 
    // Queue becomes 1
 
    if (myqueue.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}
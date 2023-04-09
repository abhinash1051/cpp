#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //vector
    vector<int> v1{ 10, 20, 30, 40, 50 };

    //printing elements
    cout << "vector elements..." << endl;
    for (int x : v1)
        cout << x << " ";
    cout << endl;

    //finding the minimum element
    int min = *min_element(v1.begin(), v1.end());

    cout << "minimum/smallest element is: " << min << endl;

    return 0;
}
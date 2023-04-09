/* Test modifying vector class's element (TestVectorMod.cpp) */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
 
void print(const vector<int> & v);
 
int main() {
   vector<int> numbers;  // Declare vector of int with initial size of 0
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
 
   // Assign random numbers into vector
   srand(time(0));
   for (int i = 0; i < 5; ++i) {
      numbers.push_back(rand() % 100);
         // Append element at the end - vector resize automatically
   }
   print(numbers);
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
 
   numbers.pop_back(); // Remove the last element - size reduces by 1
   numbers.pop_back();
   print(numbers);
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
 
   numbers.clear();  // Remove all elements
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
   return 0;
}
 
// Print the content of this vector using indexing operator []
void print(const vector<int> & v) {
   for (int i = 0; i < v.size(); ++i) {
      cout << v[i] << " ";  // no bound check, but safe here
   }
   cout << endl;
}
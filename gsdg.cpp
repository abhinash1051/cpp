#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; // input number of students

    int marks[n];
    for (int i = 0; i < n; i++) {
        cin >> marks[i]; // input marks of each student
    }

    sort(marks, marks + n); // sort the marks in ascending order

    int first_half_total = 0;
    for (int i = 0; i < n/2; i++) {
        first_half_total += marks[i]; // calculate total marks of first half of students
    }

    int second_half_total = 0;
    for (int i = n/2; i < n; i++) {
        second_half_total += marks[i]; // calculate total marks of second half of students
    }

    if (first_half_total == second_half_total) {
        cout << "YES" << endl; // total marks of first half = total marks of second half
    } else {
        cout << "NO" << endl; // total marks of first half != total marks of second half
    }

    return 0;
}
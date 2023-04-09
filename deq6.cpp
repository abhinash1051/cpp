#include <bits/stdc++.h>
using namespace std;
 
// Function to check whether
// two sentences can be made equal
// by inserting at most
// one sentence in one of them
bool areSimilar(string S1, string S2)
{
    // size of sentence S1
    int N = S1.size();
 
    // size of sentence S2
    int M = S2.size();
 
    // check if S1 and S2
    // are of equal sizes
    if (N == M) {
        // if both sentences are
        // the same, return true
        if (S1 == S2)
            return true;
 
        // Otherwise, return false
        return false;
    }
 
    // Declare 2 deques X and Y
    deque<string> X, Y;
 
    // insert ' ' at the end of both
    // sentences so that the last
    // word can be identified
    S1.push_back(' ');
    S2.push_back(' ');
 
    string temp = "";
 
    // traverse the sentence S1
    for (int i = 0; i < N + 1; i++) {
 
        // push temp in deque
        // when a space comes in sentence
        // i.e a word has been formed
        if (S1[i] == ' ') {
            X.push_back(temp);
            temp = "";
        }
        else {
            // temp stores words
            // of the sentence
            temp += S1[i];
        }
    }
 
    // traverse the sentence S1
    for (int i = 0; i < M + 1; i++) {
 
        // push temp in deque
        // when a space comes in sentence
        // i.e a word has been formed
        if (S2[i] == ' ') {
            Y.push_back(temp);
            temp = "";
        }
        else {
            // temp stores words of the sentence
            temp += S2[i];
        }
    }
 
    // check for prefixes of both sentences
    while (X.size() > 0 && Y.size() > 0
           && X.front() == Y.front()) {
 
        // pop the prefix from both
        // deques till they are equal
        X.pop_front();
        Y.pop_front();
    }
 
    // check for suffixes of both sentences
    while (X.size() > 0 && Y.size() > 0
           && X.back() == Y.back()) {
 
        // pop the suffix from both deques
        // till they are equal
        X.pop_back();
        Y.pop_back();
    }
 
    // if any of the deques is empty
    // return true
    if (X.size() == 0 || Y.size() == 0)
        return true;
 
    // if both the deques are
    // not empty return false
    return false;
}
// Driver code
int main()
{
    // Input
    string S1 = "Start practicing with abhinash";
    string S2 = "Start abhinash";
 
    // function call
    if (areSimilar(S1, S2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
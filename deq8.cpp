#include<iostream>
#include<string>
#include<deque>
using namespace std;

string newstring(string s)
{
    deque<char>q;
    for(int i = 0;i<s.length();++i)
    {
        if(s[i] != '#')
        q.push_back(s[i]);
        else if (!q.empty())
        q.pop_back();

    }
    string ans = " ";

    while(!q.empty())
    {
        ans = ans + q.front();
        q.pop_front();

    }

}
int main()
{
    string s = "abc#de#ghi#jklmn#op#";
    cout<<newstring(s);
    return 0;
}
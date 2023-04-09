#include<iostream>
using namespace std;
template<class T>
class stack
{
    private :
    int top;
    T st[100];

    public :
        stack()
        {
            top =-1;
        }
        void push(T i)
        {
            st[++top] = i;
        }
        T pop()
        {
            return st[top--];

        }
};
int main()
{
    stack<int>int_stack;
    stack<string>str_stack;

    int_stack.push(69);
    int_stack.push(90);

    str_stack.push("hello");
    str_stack.push("avinash");

    cout<<int_stack.pop()<<endl;
    cout<<int_stack.pop()<<endl;

    cout<<str_stack.pop()<<endl;
    cout<<str_stack.pop()<<endl;

    return 0;


};
#include<iostream>
using namespace std;
int main()
{
    try
    {
    
        throw 10;
    }
    catch(char*excpt)
    {
        cout<<"cought"<<excpt;
    }
    catch(...)
    {
        cout<<"default exception";
    }
    return 0;
}
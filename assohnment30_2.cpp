#include<iostream>
#include<string>
using namespace std;
int main()
{
    float num1,num2,ans;
    char operator;


    cout<<"\n perform arithmetic operator on two number";
    cout<<"------------------------------------\n";

    try
    {
        cout<<"enter first number \n";
        cin>>num1;

        cout<<"\n enter operator";
        cin>>operator;

        if (operator !='+' && operator !='-' && operator !='*' && operator !='/')
        
        throw operator ;
        
        cout<<"enter second number";
        cin>>num2;
        cout<<".............................\n";

        switch(operator)
        {
            case '+' :
            ans = num1 + num2;

            case '-' :
            ans = num1 - num2;

            case '*' :
            ans = num1 * num2;

            case '/' :
            if(num2 = 0)
            throw 0;
            ans = num1 / num2;
            break;
        }
        cout<<"\n answer :"<<num1<<" "<<operator<<" "<<num2<<" ="<<ans;
            
    }
    catch(const char c)
    {
        cout<<"\n exception cought .......\n bad opertaor "<<c<<"is not a valid operator";

    }
    catch(const int n)
    {
        cout<<"\n bad operator ....";
    }
   return 0;
    
}
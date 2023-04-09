#include<iostream>
using namespace std;
template<class T>
T Largest(T num1, T num2,T num3)
{
    
    if(num1>=num2)
    {
        if(num1>=num3 )
        {
            return num1;
        }
        else 
        {
            return num3;
        }
    }
    else
    {
        if(num2>=num3) 
        {
             return num2;
        }
        else
        {
            return num3;
        }
    }

}
int main()
{
    int n1,n2,n3,lar;

    cout<<"enter any three number : \n";
    cout<<"\n--------------------------\n";
    cin>>n1>>n2>>n3;

    lar = Largest(n1,n2,n3);
    
    cout<<" \n largest is :"<<lar<<endl;

   
    return 0;

}
#include<iostream>
using namespace std;
template<class T>
T largest(T num1, T num2)
{
    return(num1>num)? num1 :num2;
}
int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;


    cout<<"enter two integar : \n";;
    cin>>i1>>i2;

    cout<<largest<int>(i1,i2)<<"is larger"<<endl;

    cout<<"\n enter two floating integar :\n";
    cin>>f1>>f2;

    cout<<largest<float>(f1,f2)<<"is larger"<<endl;

    cout<<"\n enter two chaaracter :\n";
    cin>>c1>>c2;

    cout<<largest<char>(c1,c2)<<"has larger ASCII value :";

    
       return 0;
}
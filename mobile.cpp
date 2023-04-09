#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int num,mobile_num, count=0;
    cout<<"enter mobile number"<<endl;
    cin>>mobile_num;

    try
    {
        
            while(mobil_num)
            {
                mobile_num=mobile_num/10;
                count++;
            }
            if(count ==0)
            throw 1;

            if(count !=0)
            throw 2;    
    }
    catch(int num)
    {
        if(num==1)
        cout<<"valid mobile number"<<endl;

        if(num==2)
        cout<<"invalid mobile number"<<endl;
    }
    return 0;
}
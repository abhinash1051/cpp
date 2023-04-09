#include<iostream>
using namespace std;
class matrix
{
    protected:
        int a,b,c,d;
    public :
        matrix(int a,int b,int c,int d)
        {
            this -> a = a;

        }

};
class calculate_determinants :public matrix
{
    private :
     public :

     int caldetermimants()
     {
        return(a*b-b*c);
     }
};
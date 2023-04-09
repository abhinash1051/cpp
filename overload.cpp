#include<iostream>
using namespace std;

class Box
{
    double height;
    double width;
    double vol ;
	
    public :
	friend istream & operator >> (istream &, Box &);
	friend ostream & operator << (ostream &, Box &);
 };

 istream & operator >> (istream &din, Box &b)
 {

	cout << "Enter Box Height: " ; din >> b.height ;
	cout << "Enter Box Width : " ; din >> b.width ;
	return (din) ;
}
ostream & operator << (ostream &dout, Box &b)
{
	dout << endl << endl;
	dout << "Box Height : " << b.height << endl ;
	dout << "Box Width  : " << b.width << endl ;
	
        b.vol = b.height * b.width ;
	
        dout << "The Volume of Box : " << b.vol << endl;
    
       
        return(dout) ;
 }

 int main()
 {
       Box b1;

       cin >> b1;
       cout << b1;
       return 0;
}
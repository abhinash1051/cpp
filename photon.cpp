#include<iostream>
#include<math.h>
using namespace std;
class photon
{
    protected  :
        double wavelength;
    public :
        photon( long double wavelength)
        {
            this -> wavelength = wavelength/pow(10,-10);
        }     
};
class calculate_photonenergy : public photon
{
    private :
        double E;
    public :
        calculate_photonenergy(double value_in_angstron ) : photon(value_in_angstron)
        {

        }
        void calphotonenergy()
        {
            E = (6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength;
            cout<<"value of photons energy is  :"<<E<<endl;
        }


};

int main()
{
    calculate_photonenergy pt1(0.5);
    pt1.calphotonenergy();
    return 0;
}
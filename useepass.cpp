#include<iostream>
#include<fstream>>
using namespace std;

struct mail
{
    char un[50];
    char pas[50];
    void reg(int);
}
obj[5];
void mail::reg(int k)
{
    int i=k;
    cout<<"enter username";
    cin>>un;

    cout<<"enter password";
    cin>>pas;

    ofstream fileout;
    fileout.open("c.:\\user\\acer\\document\\regestration.txt\\",ios::app|ios::binary);    
    if(!fileout)
    {
        cout<<"\n cannot open file";
    }
    else
    {
         cout<<"\n";
        fileout.write((char *)&obj[i],sizeof(mail));
        fileout.close();
    }
    cout<<"\n ...................you are registred...............\n\n";

}
int main()
{
    int t;
    cout<<"enter registration detail for user 1";
    obj[0].reg(0);

    cout<<"enter reagistration detail for user 2";
    obj[1].reg(1);

    cout<<"enter registration detail for user 3";
    obj[2].reg(2);

    mail obj2;
    fstream filein;
    filein.open("c.:\\user\\acer\\document\\regestration.txt\\",ios::app|ios::binary);

    if(!filein)
    {
        cout<<"unable to open file to read";
    }
    else
    {
         cout<<"\nRegistered Details of All Users :: \n";
        filein.read((char *)&obj2,sizeof(obj2));
        while(filein)
        {
            cout<<"\nUsername :: "<<obj2.un<<"\nPasswword :: "<<obj2.pas<<"\n";
            filein.read((char *)&obj2,sizeof(obj2));
        }
            //filein.close();
    }
        return 0;
}
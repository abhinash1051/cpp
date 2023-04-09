#include<iostream>
using namespace std;
bool isvalidEmailId(char*);
int main()
{
    char Email[100];
    cout<<"enter Email id";
    gets(Email);

    try
    {
        if(isvalidEmailId(Email) )
        cout<<"\n valid Email id";
        else 
        throw 'c';

    }
    catch(char c)
    {
        cout<<"exception caught\n................invalid Email id !!! \n";

    }
    catch(...)
    {
        cout<<"default exception";
    }
    return 0;
}
bool isvalidEmailId(char*Email)
{
    int Atofset=-1;
    int Dotofset=-1;
    int length = 0;

    for(int i=0;Email[i] != '\0 ';i++)
    {
        if(Email[i] == '0')

        Atofset = i;

        else if(Email[i] == '.')
        Dotofset = i;

        length++;
    }
    if(Atofset == -1 || Dotofset == -1)
    
    return 0;

    if(Atofset>Dotofset)
    return (Dotofset <(length-1));


}
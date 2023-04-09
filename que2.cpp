// program to railway ticket
#include<iostream>
#include<string>
#include<time.h>
#include<math.h>
#include<queue>
using namespace std;
class ticket
{
    public :
        string passenger;
    int tnumber;


};
ticket ticketcounter()
{
    ticket temp;
    cout<<"enter your name";
    cin>>temp.passenger;
    srand(time(NULL));
    temp.tnumber = rand();
    return temp;
}
void showticketlist(queue<ticket>q)
{
    ticket temp;
    cout<<" ticket number | passenger name    |"<<endl;
    cout<<"-------------------------------------"<<endl;
    while(!q.empty())
    {
        temp  = q.front();
        cout<<"      "<<temp.tnumber<<"   |"<<temp.passenger<<endl;
        q.pop();
    }
    cout<<"|---------------------------------------|"<<endl;
    

}
int main()
{
    queue<ticket>q;
    int size;

    cout<<"enter the number of passenger";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        q.push(ticketcounter());
    }
    showticketlist(q);
    return 0;

}
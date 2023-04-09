// In a bank, different customers have savings account. Some customers may have taken a loan from the bank. So bank always maintains information about bank depositors and borrowers.

// Design a Base class Customer (name, phone-number). Derive a class Depositor(accno,  balance) from Customer.

// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.

// Write necessary member functions to read and display the details of ‘n’ customers.    
#include<iostream>
using namespace std;
class customer
{
    
    char name[20];
    int phone_number;

    public :
    void accept()
    {
        cout<<"enter customer name : ";
        cin>>name;

        cout<<"enter customer phone no :";
        cin>>phone_number;    
    }
    void display()
    {
        cout<<"\n details of customers :\n";
        cout<<"\n---------------------------------\n";
        cout<<"\n coustomer name \n"<<name;
        cout<<"customer phone no \n"<<phone_number;
    }
};
class depositer : public customer
{
    int acco;
    int  balance;

    public :

    void accept()
    {
        cout<<" enter customer  a/c no  n : ";
        cin>>acco;

        cout<<"\n enter balance :";
        cin>>balance;

    }
    void display()
    {
        cout<<"customer a/c no : "<<acco;
        cout<<"\n balance :"<<balance;
        cout<<"\n ---------------------------------\n";
    }
};
class borrow : public depositer
{
    int loan_no;
    int loan_amt;

    void accept()
    {
        cout<<" \n enter loan no : ";
        cin>>loan_no;

        cout<<"\n enter loan amount :";
        cin>>loan_amt;
    }
    void display()
    {
        cout<<"\n loan no :"<<loan_no;
        cout<<"\n loan amount :"<<loan_amt;
        cout<<"\n------------------------------------\n";
    }
};
int main()
{
    borrow *b1;
    int n,i;
    cout<<"\n enter no of customer detail you want :";
    cin>>n;

    b1 = new borrow[n];
    for(i=0;i<n;i++)
    {
                1[i].accept();
                b1[i].accept();
                b1[i].accept();
    }
        for(i=0; i<n; i++)
        {
                b1[i].dispc();
                b1[i].dispd();
                b1[i].dispb();
        }
        return 0;

}

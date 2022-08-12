// Define a class to represent a bank account. Include the following members:
// Data Members
// b) Name of the depositor
// b) Account number c) Type of account
// d) Balance amount in the account

#include<iostream>
using namespace std;
class bank
{
    string name;
    int acc_no;
    string type;
    int amount;

    public:
    void getdata()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the account number: ";
        cin>>acc_no;
        cout<<"Enter the acc type: ";
        cin>>type;
        cout<<"Enter the amount";
        cin>>amount;
    }
    void amountt()
    {
        int temp;
        cout<<"Enter the amount you want to deposit";
        cin>>temp;
        if(temp<1000)
        {
            cout<<"Min deposit is 1000"<<endl;
        }
        else
        {
            amount+=temp;
        }
    }
    void withdraw()
    {
        int temp;
        cout<<"Enter the amount you want to withdraw: ";
        cin>>temp;
        if(amount-temp<500)
        {
            cout<<"Balance is insufficient";
        }
        else
        {
            cout<<"Withdraw approved";
            amount-=temp;
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"acc_no: "<<acc_no<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"amount: "<<amount<<endl;
    }
};

int main()
{
    bank b1;
    b1.getdata();
    b1.amountt();
    b1.withdraw();
    b1.display();
}
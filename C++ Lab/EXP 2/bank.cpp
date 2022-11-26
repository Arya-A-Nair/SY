#include <iostream>
using namespace std;
class Account
{
    public:
    int balance;
    int amount_dep;
    int withdrawal;
    int accnum;
    int pin,personalcode;
    int count=3;
    int choice1;
    char name[50];
    void account()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your account number: ";
        cin>>accnum;
        cout<<"Enter your PIN: ";
        cin>>pin;
        cout<<"Enter your personal code: ";
        cin>>personalcode;
    }
    void withdraw()
    {
        cout<<"Enter amount you wish to withdraw: ";
        cin>>withdrawal;
        if (withdrawal>balance)
        {
            cout<<"Insufficient Balance"<<endl;
        }
        else
        {
            balance = balance - withdrawal;
            cout<<"New balance is: "<<balance<<endl;
        }
    }
    void checkBalance()
    {
        cout<<"Your balance is: "<<balance<<endl;
        
        
    }
    void Deposit()
    {
        cout<<"Enter amount you want to deposit: ";
        cin>>amount_dep;
        balance = balance + amount_dep;
        cout<<"New balance is: "<<balance<<endl;
    }
    void enterbalance()
    {
        cout<<"Enter balance in your account: ";
        cin>>balance;
    }
    void chequebook()
    {
        do
        {
            cout<<"Enter your PIN for confirmation: ";
            cin>>choice1;
            cout<<choice1;
            if(pin==choice1)
            {
                cout<<"Your chequebook will be sent to you within 3 working days!!\nThank you for applying.."<<endl;
                break;
            }
            else if (pin!=choice1)
            {
                cout<<"Please enter correct pin"<<endl;
                count--;
            }
            else if (count == 0)
            {
                cout<<"You have run out of tries your account has been suspended."<<endl;
            }
        } while (count>=0);
    }
    void forgotpin()
    {
        int choice2;
        cout<<"Enter your personal code to change pin: ";
        cin>>choice2;
        if(choice2==personalcode)
        {
            cout<<"Enter new PIN: ";
            cin>>pin;
            cout<<"PIN updated!!"<<endl;
        }
        else
        {
            cout<<"Incorrect personal code. Unable to change PIN!! Try again"<<endl;
        }
        
    }
};
int main()
{
    Account a1;
    int choice;
    
    do
    {
        cout<<"WELCOME TO GHANCHAKKAR BANK\n\n\n"<<endl;
        cout<<"Enter 1 Entering balance\n\n"<<endl;
        cout<<"Enter 2 to add account details\n\n"<<endl;
        cout<<"Enter 3 for Withdrawing Money\n\n"<<endl;
        cout<<"Enter 4 for Depositing Money\n\n"<<endl;
        cout<<"Enter 5 for Checking Available balance\n\n"<<endl;
        cout<<"Enter 6 for Applying for Chequebook\n\n"<<endl;
        cout<<"Enter 7 if you forgot your PIN\n\n"<<endl;
        cout<<"Enter 8 to QUIT\n\n"<<endl;
        cout<<"Enter the operation you want to perform: ";
        cin>>choice;
        Account a1;
        if (choice==3)
        {
            a1.withdraw();
        }
        else if (choice==4)
        {
            a1.Deposit();
        }
        else if (choice==5)
        {
            a1.checkBalance();
        }
        else if (choice==6)
        {
            a1.chequebook();
        }
        else if (choice==7)
        {
            a1.forgotpin();
        }
        else if (choice==1)
        {
            a1.enterbalance();
        }
        else if (choice==8)
        {
            cout<<"QUITTING"<<endl;
        }
        else if (choice==2)
        {
            a1.account();
        }
        else
        {
            cout<<"Please Enter valid input!!"<<endl;
        }
    }while(choice!=8);
}
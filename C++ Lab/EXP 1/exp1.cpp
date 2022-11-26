#include <iostream>
using namespace std;
int main() 
{
    int choice;
    int a,b,sum,diff,mult,remain;
    double division,doublea,doubleb;
    do
    {
        cout<<"Enter two numbers separated by space: ";
        cin>>a>>b;
        cout<<"Enter 1 for Addition of entered numbers"<<endl;
        cout<<"Enter 2 for Subtraction of entered numbers"<<endl;
        cout<<"Enter 3 for Multiplication of entered numbers"<<endl;
        cout<<"Enter 4 for Division of entered numbers"<<endl;
        cout<<"Enter 5 to Quit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        if (choice==1)
        {
            sum = a+b;
            cout<<"Addition of two numbers is: "<<sum<<endl;
        }
        else if(choice==2)
        {
                        diff = a-b;
            cout<<"Difference of two numbers is: "<<diff<<endl;
        }
        else if(choice==3)
        {
            mult = a*b;
            cout<<"Multiplication of two numbers is: "<<mult<<endl;
        }
        else if(choice==4)
        {
            remain = a%b;
            doublea = static_cast<double>(a);
            doubleb = static_cast<double>(b);
            division = doublea/doubleb;
            cout<<"Division of two numbers is: "<<division<<endl;
            cout<<"Remainder after division of two numbers is: "<<remain<<endl;;
        }
        else
        {
            cout<<"Please enter a valid input!!"<<endl;
        }
    }while(choice!=5);
    return 0;
}

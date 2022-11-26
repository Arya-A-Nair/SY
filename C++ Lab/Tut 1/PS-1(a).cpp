#include<iostream>
#include<math.h>
// Part 1(a)
using namespace std;
int main()
{
    int choice;
    int sum = 0;
    int remainder ;

    cout<<"Enter a number: ";
    cin>>choice;
    while(choice > 0 )
    {
        remainder = choice % 10;
        sum = sum + remainder;
        choice = choice / 10 ;

    }
    cout << "The sum of the digits is: "<<sum<<endl;
    return 0;
}
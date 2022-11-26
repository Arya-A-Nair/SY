#include<iostream>
#include<math.h>
// Part 1(b)
using namespace std;
int main()
{
    int reverse = 0 , choice, remainder  ;
    cout<<"Enter a number: ";
    cin>>choice;
    while (choice>0)
    {
        reverse = reverse*10 + choice%10;
        choice /= 10;
    }
    cout<<"Reverse of the number is: "<<reverse;
    
}
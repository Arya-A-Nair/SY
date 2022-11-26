#include<iostream>
#include<math.h>
// Part 2
using namespace std;
int main()
{
    int choice,sum = 0;
    cout<<"Enter a number: ";
    cin>>choice;
    for (int i = 1;i<=choice;i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of the numbers is: "<<sum;
}
#include<iostream>
#include<iomanip>
using namespace std;
template<class A>
class ArraySearch
{
    public:
    A *elements;
    int size;
    ArraySearch(int s)
    {
        size = s;
        elements = new A[size];
        for(int i=0;i<size;i++)
        {
            elements[i]=0;
        }
    }
    ~ArraySearch()
    {
        delete elements;
    }
    void input()
    {
        for(int i=0;i<size;i++)
        {
            cout<<"Enter element: ";
            cin>>elements[i];
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<elements[i]<<endl;
        }
    }
    void find()
    {
        int choice;
        int max , min;
        cout<<"Enter 1 to find largest number \n";
        cout<<"Enter 2 to find smallest number \n";
        cout<<"Enter choice: ";
        cin>>choice;
        if(choice==1)
        {
            max = elements[0];
            for(int i = 0 ;i<size;i++)
            {
                if(elements[i]>max)
                {
                    max = elements[i];
                }
            }
            cout<<"Max number is: "<<max<<endl;
        }
        else
        {
            min = elements[0];
            for(int j = 0 ;j<size;j++)
            {
                if(elements[j]<min)
                {
                    elements[j] = min;
                }
                
            }
            cout<<"Min number is: "<<min<<endl;
        }
    }

};

int main()
{
    ArraySearch<int>arr1(5);
    arr1.input();
    arr1.find();
}
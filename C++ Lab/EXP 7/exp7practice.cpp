#include<iostream>
#include<iomanip>
using namespace std;
template<class T>
class Array
{
    T *elems;
    int size;
    public:
    Array(int s)
    {
        size=s;
        elems=new T[size];
        for(int i=0;i<size;i++)
        elems[i]=0;
    }

    ~Array()
    {
        delete elems;
    }

    T& operator[](int index)
    {
        return elems[index];
    }

    void operator=(T temp)
    {
        for(int i=0;i<size;i++)
        elems[i]=temp;
    }
};

int main()
{
    int n=10;
    Array<int>arr1(n);
    Array<char>arr2(n);

    for(int i=0;i<n;i++)
    {
        arr1[i]='a'+i;
        arr2[i]='a'+i;
    }
    cout <<endl;
    for(int i=0;i<n;i++)
    {
        cout<<setw(8)<<arr1[i]<<setw(8)<<arr2[i]<<endl;
    }
}

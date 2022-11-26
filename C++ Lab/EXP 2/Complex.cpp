#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
    public:
    int a;
    int b;

    Complex(int real,int img)//Parametrized Constructor
    {
        a = real;
        b = img;
    }
    ~Complex()
    {
        cout<<"Finished!!"<<endl;
    }
    int getreal()//Getter Function
    {
        return a;
    }
    int getimg()//Getter Function
    {
        return b;
    }
    void add(Complex c)
    {
        //Adding two Complex numbers
        int add_a,add_b;
        add_a = c.a + a;
        add_b = c.b + b;
        cout<<"Addition is: "<<add_a<<" + "<<add_b<<"i"<<endl;
    }
    void multiply(Complex c)
    {
        //Mulitplying two complex numbers
        int mult_a,mult_b;
        mult_a = a*c.a - b*c.b;
        mult_b = a*c.b + b*c.a;
        cout<<"Multiplication is: "<<mult_a<<" + "<<mult_b<<"i"<<endl;
    }
};
int main()
{
    Complex c1(9,9);
    Complex c2(6,6);
    Complex c3 = c2;//Copy Constructor
    cout<<c1.getreal()<<endl;
    cout<<c2.getreal()<<endl;
    cout<<c1.getimg()<<endl;
    cout<<c2.getimg()<<endl;
    c1.add(c2);
    c1.multiply(c2);

}
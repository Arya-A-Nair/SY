#include <iostream>  
using namespace std;
class Shape {  
    protected:  
    float dim1, dim2;  
    public:  
    void read(float i, float j=0) 
    {  
        dim1 = i;  
        dim2 = j;  
    }  
    virtual void area(void) 
    {  
        cout << "No area"<<endl;  
    }  
} ;  
class triangle : public Shape 
{  
    public:  
    void area(void) 
    {  
        cout << "Triangle with dimensions "<<dim1<<" and "<<dim2<<endl;
        cout << "Area = "<<dim1 * 0.5 * dim2<<"\n"<<endl;  
    }  
};  
class rectangle : public Shape 
{  
    public:  
    void area(void) 
    {  
        cout << "Rectangle with dimensions "<<dim1<<" and "<<dim2<<endl;
        cout << "Area = "<<dim1 * dim2<<"\n"<<endl;
    }  
};  

int main()  
{  
    Shape *p;  
    triangle t1; 
    triangle t2; 
    triangle t3; 
    rectangle r1; 
    rectangle r2; 

    p = &t1;  
    p->read(10.0, 5.0);  
    p->area();

    p = &t2;  
    p->read(45.0, 12.0);  
    p->area(); 

    p = &t3;  
    p->read(13.0, 11.0);  
    p->area();   

    p = &r1;  
    p->read(15.8, 13.6);  
    p->area();

    p = &r2;  
    p->read(2.4, 9.8);  
    p->area();    

    return 0;  
}
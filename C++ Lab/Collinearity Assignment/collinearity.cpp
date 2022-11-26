#include <iostream>
#include<cmath>
using namespace std;
class Point
{
    public:
    int x , y;
    bool collinearity;

    void input()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
        cout<<"Enter the value of y: ";
        cin>>y;
    }
    void collinear(Point t1,Point t3)
    {
        int dist1,dist2;
        dist1 = sqrt(pow(t1.x-x,2)+pow(t1.y-y,2)) + sqrt(pow(x-t3.x,2)+pow(y-t3.y,2)); 
        dist2 = sqrt(pow(t1.x-t3.x,2)+pow(t1.y-t3.y,2));

        if (dist1 == dist2)
        {
            cout<<"Points are collinear!!";
        }
        else
        {
            cout<<"Points are not collinear!!";
        }

    }
};

int main()
{
    Point p1;
    p1.input();

    Point p2;
    p2.input();

    Point p3;
    p3.input();

    p2.collinear(p1,p3);
}
#include<iostream>
using namespace std;

class Student
{
    public:
    int roll;
    Student()
    {
        cout<<"Please enter your roll no.: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"Roll no. is "<<roll<<endl;
    }
};

class CAMarks : public Student
{
    public:
    int courseid,ise,ia;
    CAMarks()
    {
        cout<<"Enter CourseID: ";
        cin>>courseid;
        cout<<"Enter ISE Marks: ";
        cin>>ise;
        cout<<"Enter IA marks: ";
        cin>>ia;
    }
    void calculateCAmarks()
    {
        cout<<"Your CA marks are: "<<ise+ia;
    }
    void display()
    {
        cout<<"Your ISE marks are: "<<ise<<endl;
        cout<<"Your IA marks are: "<<ia<<endl;
        cout<<"Your Total CA marks are: "<<ise+ia<<endl;
    }
};

class TotalMarks : public CAMarks
{
    public:
    int courseid;
    int ese;
    TotalMarks()
    {
        cout<<"Enter ESE marks: ";
        cin>>ese;
    }
    void calculateTotalMarks()
    {
        cout<<"Your CA marks are: "<<ise+ia<<endl;
        cout<<"Your ESE marks are: "<<ese<<endl;
    }
    void display()
    {
        cout<<"Your ISE marks are: "<<ise<<endl;
        cout<<"Your IA marks are: "<<ia<<endl;
        cout<<"Your CA marks are: "<<ise+ia<<endl;
        cout<<"Your ESE marks are: "<<ese<<endl;
    }
};

int main()
{
    TotalMarks s3;
    s3.display();

    s3.calculateTotalMarks();
    s3.calculateCAmarks();

    s3.Student::display();
    s3.CAMarks::display();
}
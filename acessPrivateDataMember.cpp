#include<iostream>
using namespace std;
class Student{
    int marks;
    int password;
    public:
    void set()
    {
        cout<<"Enter Marks:";
        cin>>marks;
        cout<<"\nPassword:";
        cin>>password;
    }
    void change()
    {
        int chan;
        cout<<"\nEnter new marks if you want to change previous marks:";
        cin>>chan;
        marks=chan;
    }
    void display()
    {
        
        cout<<"\nMarks:"<<marks;
        cout<<"\nPassword:"<<password;
    }
};
int main()
{
    Student s;
    s.set();
    s.display();
    s.change();
    s.display();
    return 0;
}
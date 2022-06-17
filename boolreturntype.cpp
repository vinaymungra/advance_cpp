#include<iostream>
using namespace std;
class A{
    public :
    int no1;
    int no2;
    bool x=true;
    bool y=false;
    void set()
    {
        cout<<"\nEnter number 1 and number 2:";
        cin>>no1>>no2;
    }
    bool verify()
    {
        x=(no1==no2)?x:y;
        return(x);
    }
};

int main()
{
    A a;
    a.set();
    if(a.verify())
    {
        cout<<"Valid";
    }
    else{
        cout<<"not Valid";
    }
    return 0;
}
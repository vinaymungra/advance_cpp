#include<iostream>
using namespace std;

class Gov{

    public:
    Gov(){
        cout<<"Gov constructor called";
    }
    Gov(int y){
        cout<<"Gov para constructor called";
    }
};
class State:public Gov{
    
    public:
    State():Gov(10){
        cout<<"\nState  counstructor  called";
         
    }
    State(int x):Gov(){
        cout<<"\nState para counstructor called";
         
    }

};

int main()
{
    State s;
    

    return 0;
}
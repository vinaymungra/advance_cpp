#include<iostream>
using namespace std;

template<class T> class A{

    public :
    template<typename S> S B(S x){
        cout<<x;
    }
};

int main()
{
    A<int> a;
  
    a.B(10);
    return 0;
}
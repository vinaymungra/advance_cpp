#include <iostream>
#include "Project1.hpp"
using namespace std;
/*
    Benefit is that if Facebook given small comoanies to make simily face than
    all will write code under the same sfunction name provided by facebook;

*/
void Solution::findArmStrongNumber(int x){

    int temp=x;
    int count=0;
    int sum=0;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    temp=x;
    int rem;
    while(temp!=0)
    {
        rem=temp%10;
        temp=temp/10;
        int mul=1,i;
        for(i=1;i<=count;i++)
        {
            mul=mul*rem;
        }
        sum=sum+mul;
    }
    if(sum==x)
    {
        cout<<"Numebr is armstrong";
    }
    else{
        cout<<"Numebr is not armstrong";
    }
}
void Solution::findPrimeNumber(int x)
{
    int i,flag=1;
    
        if(x==1)
        {
            flag=0;
        }
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag=0;
        }

    }
    if(flag)
    {
        cout<<"Numebr is prime"<<x;
    }
    else{
        cout<<"Numebr is not prime"<<x;
    }
}
int main()
{
    int num,choice;
        Solution s;
        cout<<"ENter NUmber:";
        cin>>num;
        cout<<"1_Armstrong Number check";
        cout<<"\n2_Prime Number check";
        cin>>choice;
        switch(choice)
        {
            case 1:s.findArmStrongNumber(num);
                break;
            case 2:s.findPrimeNumber(num);
                 break;
                
        }
}
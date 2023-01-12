// Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two number:"<<endl;
    cin>>a>>b;
    cout<<"Before swaping a = "<<a<<"  "<<"b = "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}
//Write a C++ program to calculate an average of 3 numbers

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    float average;
    cout<<"Enter any three numbers:"<<endl;
    cin>>n1>>n2>>n3;
    average=n1+n2+n3/3;
    cout<<"Average is = "<<average<<endl;
    return 0;
}
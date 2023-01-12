// Write a C++ program to calculate the area of a circle

#include<iostream>
using namespace std;
int main()
{
    int radius,area_of_circle;
    cout<<"Enter radius of circle"<<endl;
    cin>>radius;
    area_of_circle=3.14*radius*radius;
    cout<<"Area of circle is = "<<area_of_circle;
    return 0;
}
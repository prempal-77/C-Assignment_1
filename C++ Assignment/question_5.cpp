// Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    float length,width,height,volume_of_cube;
    cout<<"Enter length of cube:"<<endl;
    cin>>length;
    cout<<"Enter width of cube"<<endl;
    cin>>width;
    cout<<"Enter height of cube"<<endl;
    cin>>height;
    volume_of_cube=length*width*height;
    cout<<"Volume of cuboid = "<<volume_of_cube<<endl;
    return 0;
}
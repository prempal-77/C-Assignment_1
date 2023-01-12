// Write a C++ program to find the maximum of two numbers

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;
    cout << "Maximum of " << a << " and " << b << " is " << max <<endl;

    return 0;
}

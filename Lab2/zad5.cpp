#include <iostream>
#include <algorithm>
using namespace std;

void swap(int&a, int& b)
{
    a ^= b; // a = a ^ b
    b ^= a; // b = b ^ a
    a ^= b; // a = a ^ b
}

int main()
{
    int a = 5;
    int b = 10;
    swap(a, b);
    cout << a << " " << b << endl;
}
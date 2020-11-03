#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a,b;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    swap(a, b);
    cout << a << " " << b << endl;

}
#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    if(*b<*a)
    {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    }
    else 
    return *a,*b;
}


int main()
{
    int a,b;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    swap(&a, &b);
    cout << a << " " << b << endl;   
}
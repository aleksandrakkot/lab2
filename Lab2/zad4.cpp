#include <iostream>
using namespace std;

int zadanie4(int *a, int *b, int *iloczyn)
{
   *iloczyn= (*a)*(*b);
   return *a+*b;
}


int main()
{
    int a,b;
    int iloczyn = 0;
    cout<<"Wprowadz dwie liczby calkowite: "<<endl;
    cin>>a>>b;
    int suma = zadanie4(&a, &b, &iloczyn);
    cout <<"Suma: "<< suma << " Iloczyn: " << iloczyn << endl;
    return 0;
}
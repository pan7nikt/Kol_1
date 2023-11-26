#include <iostream>

using namespace std;

double wartosc(double a, int n)
{
    double newa = 0;
    //a1
    for(int i=0; i<n; i++)
    {
        newa = a/2 + 1/a;
        a = newa;
    }
    return a;
}

int main()
{
    //wartosc a0
    double a = 0;
    //numer wyrazu
    int n = 0;

    //Pobiera wartosc poczatkowa a0 i numer wyrazu n
    cout << "Podaj wartosc poczatkowa: ";
    cin >> a;
    cout << "\nPodaj numer wyrazu (n): ";
    cin >> n;

    cout << "\nWyraz ciagu to: " << wartosc(a,n) << "\n";
    system("pause");
}


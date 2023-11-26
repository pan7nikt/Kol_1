#include <iostream>

using namespace std;

void zamien(int& a, int& b)
{
    int m = 0;
    if(a>b)
    {
        m=a;
        a=b;
        b=m;
    }
}

int main()
{
    int a = 0;
    int b = 0;
    
    cout << "Podaj wartosc a: ";
    cin >> a;
    cout << "\nPodaj wartosc b: ";
    cin >> b;
    zamien(a,b);
    cout << "\nWartosci po zamianie to A: " << a << " B: " << b << "\n";
    system("pause");
}
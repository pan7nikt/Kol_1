#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int k = 0;
int n = 5;

void wypelnij(int* tab)
{
    for(int i=0;i<n;i++)
    {
        tab[i] = rand() % k;
    }
}

int main()
{
    srand (time(NULL));

    int tab[n];
    cout << "Podaj wartosc k: ";
    cin >> k;
    
    wypelnij(tab);
    
    for(int i=0;i<n;i++)
    {
        cout << "\n" << i << ". " << tab[i];
    }

    

    system("pause");
}
#include <iostream>

using namespace std;

int n = 10;

void wyswietl(int tab[])
{
    for(int i=0;i<n;i++)
    {
        cout << "\n[";
        for(int j=0;j<3;j++)
        {
            if(i>=n)
            {
                cout << "]";
                break;
            }
            if(j<2)
            {
                cout << tab[i] << ",";
                i++;
            }
            else
            {
                cout << tab[i];
            }
        }
        cout << "]";
    }
}


int main()
{
    int tab[n] = {1,2,3,4,5,6,7,8,9,10};
    wyswietl(tab);
    system("pause");
}
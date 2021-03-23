#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbe a sprawdze czy jest liczba pierwsza: ";
    cin >> a;       // wczytywanie liczby do sprawdzenia
    int ile = 0;
    if (a >= 2)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0) ile++;
        }
        if (ile > 0) cout << "NIE";
        else cout << "TAK";
    }
}
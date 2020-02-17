#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

const unsigned ILOSC_LICZB = 6;
const int MAKSYMALNA_LICZBA = 49;

void main()
{
    unsigned aLiczby[ILOSC_LICZB];
    for (int i = 0; i < ILOSC_LICZB; ++i)
        aLiczby[i] = 0;

    srand(static_cast<int>(time(NULL)));
    for (int i = 0; i < ILOSC_LICZB; )
    {
        aLiczby[i] = rand() % MAKSYMALNA_LICZBA + 1;

        bool bPowtarzaSie = false;
        for (int j = 0; j < i; ++j)
        {
            if (aLiczby[j] == aLiczby[i])
            {
                bPowtarzaSie = true;
                break;
            }
        }
        if (!bPowtarzaSie) ++i;
    }
    cout << "==== LOTTO ====" << endl;
    cout << "Wynik losowania: " << endl;
    for (int i = 0; i < ILOSC_LICZB; ++i)
        cout << aLiczby[i] << " ";
    _getch();
}





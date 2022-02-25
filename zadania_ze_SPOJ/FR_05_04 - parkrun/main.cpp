#include <iostream>
#include <vector>
#include <cstdlib>


using namespace std;

int konwersja ( string rezultat)
{
    int wynik;
    wynik = atoi(rezultat.substr(0,rezultat.find(":")).c_str())*60;
    wynik += atoi(rezultat.substr(rezultat.find(":")+1).c_str());

    return wynik;
}

int main()
{
    ios_base::sync_with_stdio(0);

    int n, najlepszy_czas;
    string imie, nazwisko, czas;
    vector <string> najszybszy_biegacz;
    cin >> n;
    while (n--)
    {
        cin >> imie >> nazwisko >> czas;
        if ( najszybszy_biegacz.size() == 0 || najlepszy_czas > konwersja(czas))
        {
            najlepszy_czas = konwersja(czas);
            najszybszy_biegacz.clear();
            najszybszy_biegacz.push_back(imie + " " + nazwisko);
        }
        else if (najlepszy_czas == konwersja(czas))
            najszybszy_biegacz.push_back(imie + " " + nazwisko);
    }
    for ( int i = 0; i < najszybszy_biegacz.size(); i++)
        cout << najszybszy_biegacz[i] << endl;
}

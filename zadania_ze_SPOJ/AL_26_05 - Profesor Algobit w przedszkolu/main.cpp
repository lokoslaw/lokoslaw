#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string zaszyfrowany;
    getline(cin,zaszyfrowany);

    vector <char> poczatek_odszyfrowania;
    vector <char> koniec_odszyfrowania;

    for (int i = 0; i < zaszyfrowany.size(); i++)
    {
        if (i%2 == 0)
        {
            poczatek_odszyfrowania.push_back(zaszyfrowany[i]);
        }
        else if (i%2 != 0)
            koniec_odszyfrowania.push_back(zaszyfrowany[i]);
    }

    for (int i = 0; i < poczatek_odszyfrowania.size(); i++)
        cout << poczatek_odszyfrowania[i];
    for (int i = koniec_odszyfrowania.size()-1; i >= 0 ; i--)
        cout << koniec_odszyfrowania[i];
    return 0;
}

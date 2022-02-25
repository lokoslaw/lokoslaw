#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int t, suma;
    string napis;
    char aktualna_litera;
    cin >> t;
    while(t--)
    {
        suma = 0;
        aktualna_litera = 'A';
        cin >> napis;
        for (int i = 0; i < napis.size(); i++)
        {
            if (abs(napis[i] - aktualna_litera) > 13)
            {
                suma += (26 - abs(napis[i] - aktualna_litera));
                aktualna_litera = napis[i];
            }
            else
            {
                suma += abs(napis[i] - aktualna_litera);
                aktualna_litera = napis[i];
            }
        }
        cout << suma << endl;
        napis.clear();
    }
    return 0;
}

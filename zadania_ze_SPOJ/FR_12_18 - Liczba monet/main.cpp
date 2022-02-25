#include <iostream>

using namespace std;

int main()
{
    int nominaly[9] = {1, 2, 5, 10, 20, 50, 100, 200, 500};
    double kwota;
    int liczba_monet = 0;
    cin >> kwota;
    kwota = kwota*100;
    while (kwota > 0)
    {
        for (int i = 8; i >= 0; i--)
        {
            if(kwota >= nominaly[i])
            {
                kwota = kwota - nominaly[i];
                break;
            }
        }
        liczba_monet++;
    }
    cout << liczba_monet;
    return 0;
}

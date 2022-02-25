#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string liczba;
    bool parzystosc = false;
    int x;
    cin >> liczba;
    for (int i = 0; i < liczba.size(); i++)
    {
        x = atoi(liczba.substr(i,1).c_str());
        if (x % 2 == 0)
            parzystosc = true;
    }
    if (parzystosc == true)
        cout << "Tak";
    else
        cout <<"Nie";
    return 0;
}

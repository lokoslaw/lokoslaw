#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int x;
    cin >> n;

    while(n--)
    {
        cin >> x;
        if ((x > 0) && (sqrt(x) - (int)sqrt(x) == 0))
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }

    return 0;
}

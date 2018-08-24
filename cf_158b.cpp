#include <iostream>

using namespace std;

int main()
{
    int n, peo[5], taxi, p;
    while(cin >> n)
    {
        for (p = 0; p < 5; p++)
            peo[p] = 0;
        while(n--)
        {
            cin >> p;
            peo[p]++;
        }
        peo[1] = max(peo[1] - peo[3], 0);
        taxi = peo[3] + peo[4] + (peo[1] + 2 * peo[2] + 3) / 4;
        cout << taxi << endl;
    }
}

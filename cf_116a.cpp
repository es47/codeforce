#include <iostream>

using namespace std;

int main()
{
    int n, enter, exit, tram, temp;
    while(cin >> n)
    {
        temp = tram = 0;
        while(n--)
        {
            cin >> exit >> enter;
            temp = temp - exit + enter;
            tram = max(tram, temp);
        }
        cout << tram << endl;
    }
    return 0;
}

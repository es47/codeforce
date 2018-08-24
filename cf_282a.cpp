#include <iostream>

using namespace std;

int main()
{
    int n, x;
    string order;
    while(cin >> n)
    {
        x = 0;
        while(n--)
        {
            cin >> order;
            if (order[1] == '+')
                x++;
            else
                x--;
        }
        cout << x << endl;
    }
    return 0;
}

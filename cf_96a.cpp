#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, count;
    string player;
    while(cin >> player)
    {
        count = 1;
        for (i = 1; i < player.length(); i++)
        {
            if (player[i] == player[i - 1])
                count++;
            else
                count = 1;
            if (count == 7)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (count != 7)
            cout << "NO" << endl;
    }
}

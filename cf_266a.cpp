#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, take, i;
    string stone;
    while(cin >> n)
    {
        cin >> stone;
        take = 0;
        for (i = 1; i < n; i++)
            if (stone[i] == stone[i - 1])
                take++;
        cout << take << endl;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n, problem[3], win;
    while(cin >> n)
    {
        win = 0;
        while(n--)
        {
            cin >> problem[0] >> problem[1] >> problem[2];
            if (problem[0] + problem[1] + problem[2] >= 2)
                win++;
        }
        cout << win << endl;
    }
    return 0;
}

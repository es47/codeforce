#include <iostream>

using namespace std;

int main()
{
    long long int n, m, a, ans, length, width;
    while(cin >> n >> m >> a)
    {
        length = n / a;
        width = m / a;
        if (n % a != 0)
            length += 1;
        if (m % a != 0)
            width += 1;
        ans = length * width;
        cout << ans << endl;
    }
    return 0;
}

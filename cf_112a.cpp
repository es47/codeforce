#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string q1, q2;
    while(cin >> q1 >> q2)
    {

        for (i = 0; i < q1.length(); i++)
        {
            if (q1[i] >= 'A' && q1[i] <= 'Z')
                q1[i] += 'a' - 'A';
            if (q2[i] >= 'A' && q2[i] <= 'Z')
                q2[i] += 'a' - 'A';
            if (q1[i] != q2[i]) break;
        }
        if (q1[i] - q2[i] > 0)
            cout << "1" << endl;
        else if (q1[i] - q2[i] == 0)
            cout << "0" << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, flag(0);
    string ins;
    cin >> ins;
    for (i = 0; i < ins.length(); i++)
        if (ins[i] == 'H' || ins[i] == 'Q' || ins[i] == '9')
        {
            flag = 1;
            break;
        }
    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

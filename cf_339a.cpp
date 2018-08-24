#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, one, two, three;
    string input;
    while(cin >> input)
    {
        one = two = three = 0;
        for (i = 0; i < input.length(); i += 2)
        {
            if (input[i] == '1')
                one++;
            else if (input[i] == '2')
                two++;
            else
                three++;
        }
        for (i = 0; i < input.length(); i++)
        {
            if (i % 2 != 0)
                cout << "+";
            else
            {
                if (one != 0)
                {
                    cout << "1";
                    one--;
                    continue;
                }
                if (two != 0)
                {
                    cout << "2";
                    two--;
                    continue;
                }
                if (three != 0)
                {
                    cout << "3";
                    three--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string input;
    while(cin >> input)
    {
        for (i = 0; i < input.length(); i++)
        {
            if (input[i] >= 'A' && input[i] <= 'Z')
                input[i] += 'a' - 'A';
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y')
                continue;
            else
                cout << "." << input[i];
        }
        cout << endl;
    }
    return 0;
}

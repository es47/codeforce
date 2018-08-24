#include <iostream>

using namespace std;

int main()
{
    string word;
    while(cin >> word)
    {
        if (word[0] >= 'a' && word[0] <= 'z')
            word[0] -= 'a' - 'A';
        cout << word << endl;
    }
}

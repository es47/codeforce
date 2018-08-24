#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, flag(0);
    string word;
    cin >> word;
    for (i = 1; i < word.length(); i++)
        if (word[i] >= 'a')
            flag = 1;
    if (flag == 0)
        for (i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'a')
                word[i] -= 32;
            else
                word[i] += 32;
        }
    cout << word << endl;
    return 0;
}

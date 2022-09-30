#include <iostream>
#include <cstring>
#include <stack>

#define MAX_SIZE 50

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;

        int open = 0;
        int close = 0;
        int check = 0;
        for (int i = 0; i < str.size(); i++)
        {
            str[i] == '(' ? open++ : close++;
            if (open < close)
            {
                cout << "NO"
                     << "\n";
                check = 1;
                break;
            }
        }
        if (open == close)
            cout << "YES"
                 << "\n";
        else if (open != close && check == 0)
            cout << "NO"
                 << "\n";
    }
}

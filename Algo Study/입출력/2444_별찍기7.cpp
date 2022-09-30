//별찍기 - 7
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = N - i - 1; j > 0; j--)
        {
            cout << " ";
                }
        for (int j = 2 * N - 2 * i - 1; j < 2 * N; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * N - 2 * i - 3; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
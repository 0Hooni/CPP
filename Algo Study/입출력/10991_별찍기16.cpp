//별찍기 - 16
#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - i; j < 2 * N; j++)
        {
            if (j % 2 == 0)
                cout << " ";
            else if (j % 2 != 0&& 2*(N-i-1)>j)
                cout << " ";
            else
                cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
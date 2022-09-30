//별찍기 - 17
#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        if (i == N-1)
            for (int j = 0; j < 2 * N - 1; j++)
                cout << "*";

        else
        {
            for (int j = 0; j < N - i - 1; j++) //줄 앞 공백 출력
                cout << " ";
            for (int j = 0; j < 2 * i + 1; j++)
            {
                if (j == 0 || j == 2 * i)
                    cout << "*";
                else
                    cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}
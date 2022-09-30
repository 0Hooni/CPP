#include <iostream>

using namespace std;

int find_two(int n)
{
    int cnt = 0;
    while (n % 2 == 0)
    {
        cnt++;
        n = n / 2;
    }
    return cnt;
}

int find_five(int n)
{
    int cnt = 0;
    while (n % 5 == 0)
    {
        cnt++;
        n = n / 5;
    }
    return cnt;
}

int main()
{
    int cnt_two = 0;
    int cnt_five = 0;

    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cnt_two += find_two(i);
        cnt_five += find_five(i);
    }

    if (cnt_two > cnt_five && cnt_five != 0)
        cout << cnt_five;
    else if (cnt_two < cnt_five && cnt_two != 0)
        cout << cnt_two;
    else
        cout << 0;

    return 0;
}
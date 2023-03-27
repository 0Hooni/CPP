
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int res = 0;
    string num;
    bool isMinus = false;
    for (int i = 0; i < input.size(); i++)
    {
        if ('0' <= input[i] && input[i] <= '9')
        {
            // 숫자가 나오면 숫자로 묶어줌
            num += input[i];
        }
        if (input[i] == '-' || input[i] == '+' || i == input.size() - 1)
        {
            // 기호 전까지 값을 res에 저장(isMinus을 이용)
            if (isMinus)
                res -= stoi(num);
            else
                res += stoi(num);

            num = "";
        }

        if (input[i] == '-')
        {
            if (!isMinus)
                isMinus = !isMinus;
        }
    }

    cout << res;

    return 0;
}
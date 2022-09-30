#include <iostream>

using namespace std;

int main()
{
    //음료 고유번호의 곱이 두 칵테일로 만들어지는 고유번호
    //홀수 > 짝수

    int cakNum[3] = {0};

    for(int i = 0; i < 3;i++)
        cin >> cakNum[i];

    int res = 1;
    int cnt = 0;

    for (int i = 0; i < 3; i++)
        if(cakNum[i] % 2 == 1) {
            res *= cakNum[i];
            cnt++;
        }
    
    

    if(res == 1 && cnt == 0)

        res = cakNum[0] * cakNum[1] * cakNum[2];

    cout<<res;
}
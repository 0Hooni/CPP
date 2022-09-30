#include <iostream>

using namespace std;

int main()
{
    long long int n = 0, dp[36] = {0}, temp;
    cin>> n;
    dp[0] = 1; dp[1] = 1; dp[2] = 2;
    
    for(int i = 3; i<36; i++){
        temp = 0;
        for(int j = 0; j < i; j++)
            temp += dp[j]*dp[i-(j+1)];
        dp[i] = temp;
    }

    cout << dp[n];

   return 0;
}
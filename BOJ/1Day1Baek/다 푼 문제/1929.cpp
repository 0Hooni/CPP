//문제번호 : 10973
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
//global var area
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}


int main() {
    init();
    int m, n;
    cin >> m >> n;

    vector<bool> isPrime(n+1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for(int i=2; i<=n; i++){
        if(isPrime[i])
            for(int j=2*i; j<=n; j+=i)
                isPrime[j] = false;

        if(m<=i && isPrime[i]) cout << i << "\n";
    }

    return 0;
}

/*
 * 에라토스테네스의 체
 * 소수가 있으면 그 소수의 배수는 다 지운다
 */

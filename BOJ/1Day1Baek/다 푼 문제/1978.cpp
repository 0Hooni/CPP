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
int a, b;
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
bool isPrime(int n){
    if(n == 1) return false;

    int cnt = 0;
    for(int i=2; i<n; i++){
        if(n%i == 0) cnt++;
    }
    if(cnt == 0) return true;
    else return false;
}

int main() {
    int n;
    cin >> n;

    int cnt_prime = 0;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        if(isPrime(tmp)) cnt_prime++;
    }
    cout << cnt_prime;

    return 0;
}

/*
 */

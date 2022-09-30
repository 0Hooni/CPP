#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

//global var
int r[101];

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int GCD(int a, int b){

    if(b == 0){
        return a;
    }else{
        return GCD(b, a%b);
    }
}

int main() {
    init();

    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> r[i];

    for(int i = 1; i < n; i++) {
        cout << r[0] / GCD(r[0], r[i])
             << "/" << r[i] / GCD(r[0], r[i]) << "\n";
        //분수 표현은 최대공약수로 나누어서 출력해준다.
    }

    return 0;
}
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
#include <cctype>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool isIn[21];
long long Factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}
int main(){
    init();
    memset(isIn, true, sizeof(isIn));
    isIn[0] = true;
    int n; cin >> n;
    for(int i=1; i<=n; i++) isIn[i] = false;

    int cmd; cin >> cmd;
    vector<int> v;
    if(cmd == 1){
        long long k;  cin >> k;
        int now_input = 0;
        while (v.size() != n){
            while (isIn[++now_input]);
            if(Factorial(n-v.size()-1) >= k){
                v.push_back(now_input);
                isIn[now_input] = true;
                now_input = 0;
            }
            else{ k -= Factorial(n-v.size()-1); }
        }

        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
    }
    else if(cmd == 2){
        for(int i=0; i<n; i++) {
            int tmp; cin >> tmp;
            v.push_back(tmp);
        }
        long long order = 0;
        for(int i=0; i<v.size(); i++){
            int count_front = 0;
            isIn[v[i]] = true;
            for(int j=1; j<=v[i]; j++){
                if(!isIn[j]) count_front++;
            }
            order += count_front * Factorial(v.size()-(i+1));
        }
        cout << order + 1;
    }
    return 0;
}

/*
 */

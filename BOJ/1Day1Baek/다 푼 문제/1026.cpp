#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<pair<int, int>> v;
char board[51][51];
int main(){
    init();
    int n; cin >> n;
    vector<int> A;
    vector<int> B;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }
    sort(A.begin(), A.end());
    while (n--){
        int tmp; cin >> tmp;
        B.push_back(tmp);
    }
    sort(B.rbegin(), B.rend());

    int sum = 0;
    for(int i=0; i<A.size(); i++)
        sum += A[i]*B[i];

    cout << sum;
    return 0;
}

/*
 */

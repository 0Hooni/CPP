#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n; cin >> n;
    vector<int> num;
    while (n--){
        int tmp; cin >> tmp;
        num.push_back(tmp);
    }
    sort(num.begin(), num.end());
    cout << num[0] << " " << num[num.size() - 1];
    return 0;
}

/*
 * 다양한 풀이가 있을 것 같아서 선정
 */

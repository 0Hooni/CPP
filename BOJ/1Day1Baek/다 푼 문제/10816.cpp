#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>

using namespace std;
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable
vector<int> card;
vector<int> numOfCard;

int main() {
    init();

    int n; cin >> n;
    for (int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        card.push_back(tmp);
    }
    sort(card.begin(), card.end());
    

    int m; cin >> m;
    for(int i=0; i<m; i++) {
        int tmp; cin >> tmp;
        // 카드를 체크하는 알고리즘
        auto upper = upper_bound(card.begin(), card.end(), tmp);
        auto lower = lower_bound(card.begin(), card.end(), tmp);
        
        numOfCard.push_back(upper - lower);
    }

    for(int output : numOfCard) {
        cout << output << " ";
    }
    
    return 0;
}
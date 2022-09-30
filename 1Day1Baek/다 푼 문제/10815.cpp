#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<int> card;

int dnq(int start, int end, int num){
    while (start <= end){
        int mid = (start+end)/2;

        if(card[mid] == num) return 1;
        else{
            if(card[mid] > num) end = mid-1;
            else start = mid + 1;
        }
    }
    return 0;
}
int main(){
    init();
    int n; cin >> n;

    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        card.push_back(tmp);
    }
    sort(card.begin(), card.end());

    int m; cin >> m;
    for(int i=0; i<m; i++){
        int tmp; cin >> tmp;
        if(card[0] <= tmp && tmp <= card[n-1]){
            cout << dnq(0, n-1, tmp) << " ";
        }
        else cout << "0 ";
    }

    return 0;
}

/*
 */

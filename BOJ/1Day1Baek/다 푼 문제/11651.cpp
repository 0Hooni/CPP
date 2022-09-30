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
bool comp(pair<int, int> &n1, pair<int, int> &n2){
    if(n1.second == n2.second) return n1.first < n2.first;
    else return n1.second < n2.second;
}

int main(){
    init();
    int n; cin >> n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), comp);
    for(int i=0; i<v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";


    return 0;
}

/*
 */

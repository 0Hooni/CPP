#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>
#include <climits>
using namespace std;

// Define


// Global variable
int V, E;
vector<pair<int, pair<int, int>>> edge;
vector<int> par;
long long res;
// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int findParent(int a){
    if(par[a] == a) return a;
    else return par[a] = findParent(par[a]);
}
bool isSameParent(int a, int b) {
    int par_a = findParent(a);
    int par_b = findParent(b);

    return par_a == par_b;
}
void uni(int a, int b) {
    int par_a = findParent(a);
    int par_b = findParent(b);
    par[par_b] = par_a;
}
void MST() {
    for(int i=0; i<edge.size(); i++) {
        int cur_a = edge[i].second.first;
        int cur_b = edge[i].second.second;

        if(!isSameParent(cur_a, cur_b)) {
            // union tree
            uni(cur_a, cur_b);
            res += edge[i].first;
        }
    }
    
}

int main() {
    init();
    cin >> V >> E;
    for(int i=0; i<=E; i++) { par.push_back(i); }
    // 입력
    for(int i=0; i<E; i++) {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        edge.push_back({w, {v1, v2}});
    }
    sort(edge.begin(), edge.end());
    MST();

    cout << res;
    return 0;
}
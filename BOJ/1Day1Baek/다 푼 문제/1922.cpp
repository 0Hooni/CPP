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
int n, m;
vector<pair<int, pair<int, int>>> edge;
vector<int> parent;
int res = 0;

// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int findParent(int a) {
    // 부모노드가 없는 경우(최 상단 노드)
    if(parent[a] == a) return a;

    // 부모 노드가 있는 경우 부모 노드를 찾음
    else return parent[a] = findParent(parent[a]);
}
bool isSameParent(int a, int b) {
    int par_a = findParent(a);
    int par_b = findParent(b);

    // 부모 노드가 같은 경우
    if(par_a == par_b) return true;
    else return false;
    
}
void MST() {
    for(int i=0; i<m; i++) {
        int curFirstNode = edge[i].second.first;    // 노드 1
        int curSecondNode = edge[i].second.second;  // 노드 2

        // 부모노드가 같지 않으면 트리 연결해주기 + 트리의 거리 총합에 더해줌
        if(!isSameParent(curFirstNode, curSecondNode)) {
            // union tree
            int parFirstNode = findParent(curFirstNode);
            int parSecondNode = findParent(curSecondNode);
            parent[parSecondNode] = parFirstNode;
            res += edge[i].first;   // 간선의 가중값
        }
    }
}

int main() {
    init();
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        edge.push_back({w, {v1, v2}});
    }
    sort(edge.begin(), edge.end());
    
    parent.push_back(0);
    for(int i=1; i<=n; i++) { parent.push_back(i); }
    
    MST();
    cout << res;

    return 0;
}
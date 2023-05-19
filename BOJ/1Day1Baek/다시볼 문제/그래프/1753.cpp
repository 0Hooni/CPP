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

// #define
#define INF INT_MAX
#define MAX_IDX 20001

using namespace std;

// Global variable
int V, E, start;
vector<pair<int, int>> g[MAX_IDX];
int dist[MAX_IDX];
// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dijkstra() {
    // 코스트가 낮은 순으로 방문
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        for(int i=0; i<g[cur].size(); i++) {
            int next = g[cur][i].first;
            int nextCost = g[cur][i].second;

            if(dist[next] > cost + nextCost) {
                dist[next] = cost + nextCost;
                pq.push({dist[next], next});
            }
        }
    }

    for(int i=1; i<=V; i++) {
        if(dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }
    
}


int main() {
    init();
    
    cin >> V >> E;
    cin >> start;

    for(int i=0; i<E; i++) {
        int u, v, w;
        cin >> u >> v >> w; 
        g[u].push_back({v, w});
    }

    // 거리를 담을 배열을 초기화
    // dist 배열은 start가 다른 idx까지 가는 최소비용을 저장
    // 만일 start가 여러개로 확인해야되면 2차원으로 구현해야됨

    for(int i=0; i<=V; i++) {
        dist[i] = INF;
    }

    dijkstra();


    return 0;
}

/*
- 최단 가중치로 이동하는것이 핵심 -> 경유를 하는것이 이득일 수 있다.
*/
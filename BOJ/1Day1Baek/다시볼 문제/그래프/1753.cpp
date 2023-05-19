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

// Define
#define INF INT_MAX
#define MAX_IDX 20001

using namespace std;

// Global variable
int V, E, start;    // 정점 V, E, 시작노드 start
vector<pair<int, int>> g[MAX_IDX];  // 간선정보를 저장하는 g벡터
int dist[MAX_IDX];  // 시작점부터 index(= 정점 번호)까지 가는 거리에 대한 정보 저장

// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void dijkstra() {
    // 코스트가 낮은 순으로 방문
    // 가중치, 시작 노드를 페어로 받음
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, start});
    dist[start] = 0;    // 자기 자신으로 가는것이기에 0

    while (!pq.empty()) {
        int cost = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        // 현재 노드와 연결된 노드들을 체크
        for(int i=0; i<g[curNode].size(); i++) {
            int nextNode = g[curNode][i].first;
            int nextCost = g[curNode][i].second;

            // 기존 값보다 경유하는것이 더 낮은 경우 업데이트
            if(dist[nextNode] > cost + nextCost) {
                dist[nextNode] = cost + nextCost;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
}

int main() {
    init();
    
    cin >> V >> E;
    cin >> start;

    for(int i=0; i<E; i++) {
        int u, v, w;
        cin >> u >> v >> w; 

        // u 노드에서 v로 가는 가중치 w의 간선정보
        g[u].push_back({v, w}); 
    }

    // 거리를 담을 배열을 초기화
    // dist 배열은 start가 다른 idx까지 가는 최소비용을 저장
    for(int i=0; i<=V; i++) {
        dist[i] = INF;
    }

    dijkstra();

    // 출력
    for(int i=1; i<=V; i++) {
        if(dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }

    return 0;
}
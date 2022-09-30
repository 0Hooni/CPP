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

bool visit[1001];
vector<int> graph[1001];
void dfs(int start);
void bfs(int start);

int main(){
    init();
    int n, m; cin >> n >> m;
    int start; cin >> start;

    while (m--){
        int u, v;   //start, destination
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(vector<int> &i : graph)
        sort(i.begin(), i.end());

    dfs(start); cout << "\n";
    memset(visit, false, sizeof(visit));
    bfs(start);
    return 0;
}

void dfs(int cur){  // 두번째 틀린이유 -> dfs의 타입을 int로 했음, return 부분에서 오류가 난것으로 보임
    visit[cur] = true;
    cout << cur << " ";
    for(auto i : graph[cur]) {
        if (!visit[i]) { dfs(i); }
    }
}
void bfs(int start){
    visit[start] = true;

    queue<int> q;
    q.push(start);

    while (!q.empty()){
        int cur = q.front(); q.pop();
        cout << cur << " ";
        for(auto i : graph[cur]){
            if (!visit[i]) {
                q.push(i);
                visit[i] = true;
            }
        }
    }
}
/*
 * 문제의 핵심은 dfs, bfs의 구현
 * 작은것부터 탐색한다
 * 작은거부터 탐색하기 위해서는
 * 1. dfs, bfs의 for문을 i=0:n으로 보내기(n은 정점의 갯수 -> 번호)
 * 2. 완성된 그래프를 정렬하기(작은것이 먼저 들어가게 만들기 위해)
 */

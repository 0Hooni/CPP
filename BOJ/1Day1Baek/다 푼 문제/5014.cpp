#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>


using namespace std;

// Define


// Global variable
int total, dest, cur;
int df[2];
int dist[1000001];
// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bfs(int start) {
    queue<int> q;
    memset(dist, -1, sizeof(dist));
    q.push(start);
    dist[start] = 0;

    while (!q.empty()) {
        int curFloor = q.front();
        q.pop();
    
        if(curFloor == dest) { return; }
        for(int i=0; i<2; i++) {
            int nextFloor = curFloor + df[i];
            if(0 < nextFloor && nextFloor <= total) {
                if(dist[nextFloor] == -1) {
                    q.push(nextFloor);
                    dist[nextFloor] = dist[curFloor] + 1;
                }
            }
        }
    }
    
}

int main() {
    init();

    cin >> total >> cur >> dest >> df[0] >> df[1];
    df[1] *= -1;
    // cur == start
    // floor == node num
    // df[0] == up // df[1] == down

    bfs(cur);
    if(dist[dest] != -1)  cout << dist[dest];
    else cout << "use the stairs";
        

    return 0;
}

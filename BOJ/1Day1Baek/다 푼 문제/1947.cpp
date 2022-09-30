//문제번호 : 1947
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

//def area
typedef long long ll;
#define MAX_INDEX 10001

//global var area
int n;
vector<pair<int, int>> tree[MAX_INDEX];

bool check[MAX_INDEX];
int dist[MAX_INDEX];


//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void bfs(int node){
    memset(check, false, sizeof(check));
    memset(dist, 0, sizeof(dist));

    queue<int> q;
    q.push(node);
    check[node] = true;
    dist[node] = 0;

    while (!q.empty()){
        int x = q.front();
        q.pop();


        for(int i=0; i<tree[x].size(); i++){
            if(!check[tree[x][i].first]){
                check[tree[x][i].first] = true;
                dist[tree[x][i].first] = dist[x] + tree[x][i].second;
                q.push(tree[x][i].first);
            }
        }


    }
}

int main() {
    //code
    cin >> n;

    for(int i=1; i<n; i++){
        int n1, n2, distance;
        cin >> n1 >> n2 >> distance;

        tree[n1].push_back(make_pair(n2, distance));
        tree[n2].push_back(make_pair(n1, distance));
    }

    bfs(1);
    int max_dist = 0;
    int start = 1;
    for(int i=1; i<=n; i++){
        if(dist[start] < dist[i]) start = i;
    }
    bfs(start);
    for(int i=1; i<=n; i++){
        if(max_dist < dist[i])
            max_dist = dist[i];
    }

    cout << max_dist;



    //code
    return 0;
}

/*
 */

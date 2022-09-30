//문제번호 : 1167
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
#define MAX_INDEX 100001

//global var area
int v;
vector<pair<int, int>> a[MAX_INDEX];
bool check[MAX_INDEX];
int dist[MAX_INDEX];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void bfs(int start){
    memset(dist, 0, sizeof(dist));
    memset(check, false, sizeof(check));
    queue<int> q;
    check[start] = true;
    q.push(start);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0; i<a[x].size(); i++){
            pair<int, int> e = a[x][i];
            if(check[e.first] == false){
                dist[e.first] = dist[x] + e.second;
                //출발점을 기준으로 e.first 노드에 도착했을때
                //거리를 누적시켜서 저장
                //만약 1이 시작이면 dist[5] == 2 + 3 + 6;
                q.push(e.first);
                check[e.first] = true;
            }
        }
    }
}

int main() {
    //code
    cin >> v;

    for(int i=0; i<v; i++){
        int v_num;
        cin >> v_num;

        int link_num, distance;
        while (1){
            cin >> link_num;
            if(link_num == -1) break;
            else cin >> distance;

            a[v_num].push_back(make_pair(link_num, distance));
        }
    }
    bfs(1); //1에서부터의 거리를 dist 배열에 저장
    int start = 1;
    for(int i=2; i<=v; i++)
        if(dist[i] > dist[start])
            //1부터 i 까지의 거리를 비교
            //더 멀면 start 를 먼 쪽 노드로 지정
            start = i;
    //위의 반복을 통해 1에서부터 가장 거리가 긴 노드에 시작점을 설정

    bfs(start);     //지정된 시작점으로부터 bfs 를 하여 dist 를 새롭게 정의

    int max_dist = dist[1];
    //1로 설정하는 이유는
    //bfs(1)을 통해 가장 멀리있는 노드를 start 로 잡았기 때문
    // -> start 에서 가장 멀리있는 노드는 1일 가능성이 높기 때문
    for(int i=2; i<=v; i++){
        if(max_dist < dist[i])
            max_dist = dist[i];
    }

    cout << max_dist;
    //code
    return 0;
}

/*
 * 깊이를 먼저 체크하여 각 노드중에 말단을 찾는다
 * 찾아낸 노드를 기준으로 각 노드까지의 거리를 저장
 * 거리를 저장한 배열중에서 최대값을 찾아 출력한다
 *
 * 궁금할 수 있는 부분이 왜 두번째 탐색 이후 세번째 탐색은 하지 않는것
 * 분명 한번 더 탐색을 하면 더 먼곳이 나올수 도 있는데? 라 생각이 들게 되는데
 * 첫번째 탐색이후 가장 끝 부분이 시작점으로 잡히게 되고
 * 이후 탐색을 한번 더 하면 해당 부분으로 부터 가장 끝 부분까지의 거리가 최장이 됨
 * 이후의 탐색을 추가로 하게되면 결국 같은 간선이 잡히거나 혹은 경로의 가중치값이 같은
 * 다른간선이 잡히는 것 이외에는 max_dist 에는 차이가 없다는 거다.
 *
 * 추가 참고 -> 스파스테이블, 희소배열, lca
 */

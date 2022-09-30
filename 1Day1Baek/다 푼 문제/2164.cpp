#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n; cin >> n;
    queue<int> q;
    for(int i=1; i<=n; i++){
        q.push(i);
    }

    while (q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();

    return 0;
}

/*
 */

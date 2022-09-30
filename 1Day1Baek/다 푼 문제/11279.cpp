#include <iostream>
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
    priority_queue<int> pq;
    while (n--){
        int x; cin >> x;
        if(x == 0){
            if(pq.empty())
                cout << "0\n";
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        else
            pq.push(x);
    }

    return 0;
}

/*
 */

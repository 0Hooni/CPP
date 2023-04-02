#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>

using namespace std;
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable
vector<int> graph;

int main() {
    init();
    int n, r;
    cin >> n >> r;

    for(int i=1; i<=n; i++) {
        graph.push_back(i);
    } 

    do {
        for(int i=0; i<r; i++) {
            cout << graph[i] << " ";
        }
        cout << "\n";
        reverse(graph.begin() + r, graph.end());
    } while(next_permutation(graph.begin(), graph.end()));

    return 0;
}
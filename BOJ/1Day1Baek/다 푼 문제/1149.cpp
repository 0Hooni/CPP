#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int n;
int paint[1001][3];

void coloring(int bf_color){

}
int main(){
    init();

    cin >> n;
    paint[0][0] = 0;
    paint[0][1] = 0;
    paint[0][2] = 0;
    for(int i=1; i<=n; i++){
        int cost[3];
        cin >> cost[0] >> cost[1] >> cost[2];
        paint[i][0] = min(paint[i-1][1], paint[i-1][2]) + cost[0];
        paint[i][1] = min(paint[i-1][0], paint[i-1][2]) + cost[1];
        paint[i][2] = min(paint[i-1][0], paint[i-1][1]) + cost[2];
    }

    cout << min(paint[n][0], min(paint[n][1], paint[n][2]));

    return 0;
}

/*
 *
 */

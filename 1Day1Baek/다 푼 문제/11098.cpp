#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<pair<int, int>> v;
char board[51][51];
int main(){
    init();
    int t; cin >> t;
    vector<string> ep;
    while (t--){
        int n; cin >> n;
        int max_price = 0;
        string max_player = "";
        while (n--){
            int price;
            string player;
            cin >> price >> player;
            if(max_price < price){
                max_price = price;
                max_player = player;
            }
        }
        ep.push_back(max_player);
    }
    for(int i=0; i<ep.size(); i++)
        cout << ep[i] << "\n";

    return 0;
}

/*
 */

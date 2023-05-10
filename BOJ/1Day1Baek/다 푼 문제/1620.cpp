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
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable
int main() {
    init();
    int N, M;
    cin >> N >> M;

    map<string, int> poketmonStr;
    map<int, string> poketmonInt;

    for(int i=1; i <= N; i++) {
        string str; cin >> str;
        poketmonStr.insert({str, i});
        poketmonInt.insert({i, str});
    }

    for(int i=0; i<M; i++) {
        string str;
        cin >> str;
        if('0' <= str[0] && str[0] <= '9') {
            cout << poketmonInt[stoi(str)] << "\n";
        }
        else {
            cout << poketmonStr[str] << "\n";
        }
    }
    return 0;
}

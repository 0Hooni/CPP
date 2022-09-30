#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> v;

int main(){
    int x, y;
    int N;

    cin >> N;

    for(int i = 0; i < N;i++){
        pair<int, int> temp;
        cin >> x >> y;
        temp.first = x;
        temp.second = y;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(),greater<pair<int, int>>());

    for(int i = 0; i < N; i++){
       pair<int, int> temp = v.back();
        v.pop_back();
        cout << temp.first << " " << temp.second << "\n";
    }

    return 0;
}

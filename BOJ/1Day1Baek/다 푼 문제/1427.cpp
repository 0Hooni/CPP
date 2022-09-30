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
int main(){
    init();
    vector<int> v;
    string str; cin >> str;

    for(int i=0; i<str.length(); i++)
        v.push_back(str[i]-'0');

    sort(v.rbegin(), v.rend());
    for(int i=0; i<v.size(); i++)
        cout << v[i];

    return 0;
}

/*
 */

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

bool comp(string s1, string s2){
    if(s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}
int main(){
    init();
    int n; cin >> n;
    vector<string> v;
    while (n--){
        string str; cin >> str;
        if(find(v.begin(), v.end(), str) != v.end()){
            continue;
        }
        else v.push_back(str);
    }
    sort(v.begin(), v.end(), comp);
    for(int i=0; i<v.size(); i++)
        cout << v[i] << "\n";

    return 0;
}

/*
 */

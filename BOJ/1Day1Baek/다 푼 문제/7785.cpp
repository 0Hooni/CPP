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
    int n; cin >> n;
    set<string> s;
    for(int i=0; i<n; i++){
        string str; cin >> str;
        string task; cin >> task;
        if(task=="enter")
            s.insert(str);
        else
            s.erase(str);

    }
    for(auto i = s.rbegin(); i != s.rend(); i++)
        cout << *i << "\n";

    return 0;
}

/*
 */

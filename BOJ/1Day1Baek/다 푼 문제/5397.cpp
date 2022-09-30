#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
#include <cctype>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    stack<char> left;
    stack<char> right;
    int n; cin >> n;
    while (n--){
        string str; cin >> str;
        for(int i=0; i<str.length(); i++){
            if(str[i] == '<' && !left.empty()){
                right.push(left.top());
                left.pop();
            }
            else if(str[i] == '>' && !right.empty()){
                left.push(right.top());
                right.pop();
            }
            else if(str[i] == '-' && !left.empty()){
                left.pop();
            }
            else if(isdigit(str[i]) || isupper(str[i]) || islower(str[i])) {
                left.push(str[i]);
            }
        }
        while (!left.empty()){
            right.push(left.top());
            left.pop();
        }
        while (!right.empty()){
            cout << right.top();
            right.pop();
        }
        cout << "\n";
    }

    return 0;
}

/*
 */

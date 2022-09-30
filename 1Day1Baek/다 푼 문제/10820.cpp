#include <iostream>
#include <string.h>
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

int apb, APB, num, _ws;
int main(){
    init();
    string str;
    while (getline(cin, str)){
        apb = APB = 0;
        num = _ws = 0;

        for(int i=0; i<str.size(); i++){
            if('a' <= str[i] && str[i] <= 'z') apb++;
            else if('A' <= str[i] && str[i] <= 'Z') APB++;
            else if('0' <= str[i] && str[i] <= '9') num++;
            else if(str[i] == ' ') _ws++;
        }
        cout << apb << " " << APB << " " << num << " " << _ws << "\n";
    }
}

/*
 */

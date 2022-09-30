#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
//global var


int main(){
    init();
    string str;

    getline(cin, str);
    int gap = 'O' - 'B';
    for(int i = 0; i < str.size(); i++){
        if('a' <= str[i] && str[i] <= 'z'){
            if(str[i] + gap > 'z') cout << (char)(str[i] - gap);
            else cout << (char)(str[i] + gap);
        }
        else if('A' <= str[i] && str[i] <= 'Z'){
            if(str[i] + gap > 'Z') cout << (char)(str[i] - gap);
            else cout << (char)(str[i] + gap);
        }
        else cout << str[i];
    }

    return 0;
}

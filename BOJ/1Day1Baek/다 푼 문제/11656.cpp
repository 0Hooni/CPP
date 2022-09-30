#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

string str;
int size;
vector<string> word;

int main(){
    init();
    cin >> str;

    size = str.size();

    for(int i = 0; i < size; i++){
        word.push_back(str);
        str.erase(str.begin());
    }
    sort(word.begin(), word.end());


    for(int i = 0;i < word.size(); i++){
        cout << word[i] << "\n";
    }

    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int cnt[26]={0};
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++) {
        cnt[(int)str[i]-'a']++;
    }

    for(int i=0;i<26;i++) cout<<(int)cnt[i]<<" ";

    return 0;
}
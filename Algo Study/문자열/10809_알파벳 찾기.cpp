#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int cnt[26];
    memset(cnt, -1, sizeof(cnt));

    string str;
    cin >> str;

    for (int j = 0; j < str.size(); j++)
        for (int i = 0; i < 26; i++)
            if (i == (int)str[j] - (int)'a'&&cnt[i]==-1)
                cnt[i] = j;

    for(int i=0;i<26;i++) cout<<cnt[i]<<" ";
    return 0;
}
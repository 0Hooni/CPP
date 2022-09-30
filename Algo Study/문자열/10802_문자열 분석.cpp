#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str;
    int cnt[4]; //소문자, 대문자, 숫자, 공백

    while(getline(cin,str)){
        memset(cnt,0,sizeof(cnt));

        for(int i=0;i<str.size();i++){
            if(str[i]>='a'&&str[i]<='z') cnt[0]++;
            else if(str[i]<='Z'&&str[i]>='A') cnt[1]++;
            else if(str[i]<='9'&&str[i]>='0') cnt[2]++;
            else if(str[i]==' ') cnt[3]++;
        }

        for(int i=0;i<4;i++) cout<<cnt[i]<<" ";
 
        cout<<"\n";
    }

    return 0;
}
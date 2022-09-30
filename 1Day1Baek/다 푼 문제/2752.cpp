
#include <iostream>

using namespace std;

int num[3];

int main() {
    for(int i=0;i<3;i++) cin >> num[i];

    for(int i=0;i<3;i++)
        for(int j = i; j<3; j++)
            if(num[i]>num[j]) swap(num[i], num[j]);

    for(int i = 0;i<3;i++) cout << num[i] << " ";

    return 0;
}
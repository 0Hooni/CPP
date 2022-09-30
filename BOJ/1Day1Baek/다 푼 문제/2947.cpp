#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

//global var
int n[5];

void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    
    for(int i = 0; i < 5; i++)
        cin >> n[i];

    while (n[0] != 1 || n[1] != 2 || n[2] != 3
            || n[3] != 4 || n[4] != 5)
    {
        for (int i = 0; i < 4; i++)
        {
            if (n[i] > n[i + 1])
            {
                swap(n[i], n[i + 1]);
                for (int j = 0; j < 5; j++)
                    cout << n[j] << " ";
                cout << "\n";
            }
        }
    }

    return 0;
}
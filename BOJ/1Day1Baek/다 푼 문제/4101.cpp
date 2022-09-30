#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    while (1)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        cout << (a > b ? "Yes" : "No") << "\n";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
    int people, num;
    cin >> people >> num;
    int peopleCount = people;
    vector<int> res;

    int cur = 0;

    for(int i=0; i < people; i++) {
        res.push_back(i+1);
    }

    cout << "<";
    for(int i=0; i < peopleCount; i++) {
        cur = (cur + num - 1) % people;
        cout << res[cur];

        res.erase(res.begin() + cur);
        people -= 1;
        if(!res.empty()) cout << ", ";
    }
    cout << ">";

    return 0;
}
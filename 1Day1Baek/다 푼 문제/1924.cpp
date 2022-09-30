#include <iostream>
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

int main(){
    init();
    int month, day;
    cin >> month >> day;
    int total = 0;
    total += day;
    month--;
    while (month != 0){
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                total += 31;
                break;
        }
        switch (month) {
            case 4:
            case 6:
            case 9:
            case 11:
                total += 30;
                break;
        }
        if(month == 2)
            total += 28;

        month--;
    }

    switch (total%7) {
        case 1:
            cout << "MON";
            break;
        case 2:
            cout << "TUE";
            break;
        case 3:
            cout << "WED";
            break;
        case 4:
            cout << "THU";
            break;
        case 5:
            cout << "FRI";
            break;
        case 6:
            cout << "SAT";
            break;
        case 0:
            cout << "SUN";
            break;
    }
    return 0;
}

/*
 */

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>

using namespace std;
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable
bool thisVolPossible[51][1001];
vector<int> volDiff;

int main() {
    init();
    int numOfSong, startVol, maxVol;
    cin >> numOfSong >> startVol >> maxVol;

    // index 0에 빈 값을 넣어줌
    volDiff.push_back(0);

    for(int i=0; i<numOfSong; i++) {
        int tmp; cin >> tmp;
        volDiff.push_back(tmp);
    }

    memset(thisVolPossible, false, sizeof(thisVolPossible));
    thisVolPossible[0][startVol] = true;

    for(int curSongNum = 1; curSongNum <= numOfSong; curSongNum++) {
        for(int nowVol=0; nowVol <= maxVol; nowVol++) {
            // 이전곡 중 가능했던 볼륨이 있으면
            if(thisVolPossible[curSongNum-1][nowVol]) {
                // 현재 음악을 플레이할 수 있는 볼륨을 체크해둔다
                if(nowVol - volDiff[curSongNum] >= 0) {
                    thisVolPossible[curSongNum][nowVol - volDiff[curSongNum]] = true;
                }
                if(nowVol + volDiff[curSongNum] <= maxVol) {
                    thisVolPossible[curSongNum][nowVol + volDiff[curSongNum]] = true;
                }
            }
        }
    }

    int lastSongMaxVol = -1;
    for(int vol = maxVol; vol >= 0; vol--) {
        if(thisVolPossible[numOfSong][vol]) {
            lastSongMaxVol = vol;
            break;
        }
    }
    cout << lastSongMaxVol;
    
    return 0;
}
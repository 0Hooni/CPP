#include <iostream>

using namespace std;

bool isMovieNum(int Num){
    while(Num != 0){
        if(Num % 1000 == 666) return true;
        else Num /= 10;
    }

    return false;
}

int movieNum;   //input 담당
int countFindMovieNum;
int nowNum;

int main() {
    cin >> movieNum;

    while(movieNum != countFindMovieNum){
        nowNum++;
        if(isMovieNum(nowNum)) countFindMovieNum++;
    }

    cout << nowNum;

    return 0;
}

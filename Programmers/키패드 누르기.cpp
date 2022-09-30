#include <string>
#include <vector>
#include <math.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int curLeft = 10;
    int curRight = 12;
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            curLeft = numbers[i];
            answer += 'L';
        }
        else if(numbers[i] == 3 ||numbers[i] == 6 ||numbers[i] == 9){
            curRight = numbers[i];
            answer += 'R';
        }
        else {
            if(numbers[i] == 0) numbers[i] = 11;
            // 누르려는 숫자와 행, 열을 비교하여 짧은거리인 손이 누름
            // 만일 비교한 이 둘이 같다면 주손을 이용
            int diffLeft = abs(curLeft - numbers[i]);
            int diffRight = abs(curRight - numbers[i]);
            diffLeft = (diffLeft / 3) + (diffLeft % 3);
            diffRight = (diffRight / 3) + (diffRight % 3);
            if(diffLeft < diffRight || (diffLeft == diffRight && hand == "left")) {
                answer += 'L';
                curLeft = numbers[i];
            }
            else {
                answer += 'R';
                curRight = numbers[i];
            }
        }
    }
    return answer;
}

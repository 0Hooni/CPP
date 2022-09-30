#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    for(int i=0; i<moves.size(); i++){
        int nowIdx = moves[i] - 1;

        for(int j=0; j<board[0].size(); j++){
            if(board[j][nowIdx] != 0){
                if(!s.empty() && board[j][nowIdx] == s.top()) {
                    s.pop();
                    answer += 2;
                }
                else s.push(board[j][nowIdx]);

                board[j][nowIdx] = 0;
                break;
            }
        }
    }

    return answer;
}
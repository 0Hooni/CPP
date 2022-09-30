#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int canWin = 0;
    int realWin = 0;
    for(int i : lottos){
        if(i == 0) canWin++;
        else {
            if(find(win_nums.begin(), win_nums.end(), i) != win_nums.end())
                realWin++;
        }
    }
    int high = canWin + realWin;
    int low = realWin;
    answer.push_back(high > 1 ? 7-high : 6);
    answer.push_back(low > 1 ? 7-low : 6);
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day = 1;
    int endProc = 0;

    for(int i = 0; i<progresses.size(); i++) {
        int nowProc = progresses[i];
        int nowSpeed = speeds[i];
        // 현재의 프로세서가 지난 날자만큼으로 완료가 되는지 체크
        // 된다면 다음으로 넘기고 오늘 끝나는 프로세서의 갯수++
        if(100 <= nowProc + nowSpeed*day) endProc++;

        // 안되면 이전까지의 프로세스 갯수를 push해주고 초기화
        // 현재 프로세서가 끝날때까지 day++
        else {
            if(endProc != 0) {
                answer.push_back(endProc);
                endProc = 0;
            }
            while(nowProc + nowSpeed*(++day) < 100);
            endProc++;
        }
    }
    // for문 끝날때 완성됐던 마지막 갯수를 추가함
    answer.push_back(endProc);

    return answer;
}

// 고수의 풀이
//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//    vector<int> answer;
//
//    int day;
//    int max_day = 0;
//    for (int i = 0; i < progresses.size(); ++i)
//    {
//        day = (99 - progresses[i]) / speeds[i] + 1;
//
//        if (answer.empty() || max_day < day) {
//            answer.push_back(1);
//            max_day = day;
//        }
//        else
//            answer.back()++;
//    }
//
//    return answer;
//}
//출처: https://dokylee.tistory.com/64 [dokylee's Tech Blog:티스토리]
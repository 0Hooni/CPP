#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;


map<string, int> reportCnt;
map<string, set<string>> reportLog;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    
    for(string s: report) {
        int blankIdx = s.find(' ');
        string from = s.substr(0, blankIdx);
        string to = s.substr(blankIdx);
        
        if(reportLog[from].find(to) == reportLog[from].end()){
            reportCnt[to]++;
            reportLog[from].insert(to);
        }
    }
    
    for(string s: id_list) {
        int res = 0;
        
        for(string str: reportLog[s])
            if(reportCnt[str] >= k) res++;
        
        answer.push_back(res);
    }
    
    return answer;
}

#include <string>
#include <vector>
#include <utility>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;              // 정답
    vector<pair<string, string>> tmp;   // uid, "님이 ~~"
    map<string, string> id_name;        // uid, name
    for(string s : record){
        string str[3] = {"", "", ""}; // 0: cmd; 1: uid; 2: name;

        int cur_str = 0;
        for(int idx = 0; idx < s.size(); idx++){
            if(s[idx] == ' ') { cur_str++; continue; }
            str[cur_str] += s[idx];
        }
        
        // 명령어(str[0]) 별로 역할 구분
        if(str[0] == "Enter"){ // 들어옴
            if(id_name.find(str[1]) != id_name.end())   // map에 존재할 때
                id_name[str[1]] = str[2];

            
            else {                      // map에 존재하지 않을 때
                id_name.insert({str[1], str[2]});
            }
            
            tmp.push_back({str[1], "님이 들어왔습니다."});
        }
        else if(str[0] == "Leave"){     // 나감
            tmp.push_back({str[1], "님이 나갔습니다."});
        }
        else if(str[0] == "Change"){    // 변경
            id_name[str[1]] = str[2];
        }
    }

    // uid를 map을 통해 name으로 바꿔줌 + "님이 ~~"를 붙여준다
    for(auto a : tmp){
        answer.push_back(id_name[a.first] + a.second);
    }
    return answer;
}

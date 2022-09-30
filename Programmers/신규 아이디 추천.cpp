#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    for(int i=0; i<new_id.length(); i++){
        if('a' <= new_id[i] && new_id[i] <= 'z') continue;
        else if('0' <= new_id[i] && new_id[i] <= '9') continue;
        else if('A' <= new_id[i] && new_id[i] <= 'Z')    // rule 1
            new_id[i] += 32;
        else if(new_id[i] != '-' && new_id[i] != '_' && new_id[i] != '.')   // rule 2
            new_id.erase(new_id.begin() + (i--));
    }

    for(int i=1; i<new_id.length(); i++){
        if(new_id[i] == '.' && new_id[i-1] == '.'){
            new_id.erase(new_id.begin() +(i--));
        }
    }
    if(new_id.empty()) new_id += 'a';


    if(new_id[0] == '.')
        new_id.erase(new_id.begin());
    if(15 < new_id.length())
        new_id.erase(new_id.begin()+15, new_id.end());
    if(new_id[new_id.length() - 1] == '.')
        new_id.pop_back();

    while (new_id.length() < 3) new_id += new_id[new_id.length() - 1];


    answer = new_id;
    return answer;
}

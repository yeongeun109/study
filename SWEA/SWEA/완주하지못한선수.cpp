#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<string> newarr;
    for (int i = 0; i < completion.size(); i++) {
        newarr.push_back(completion[i]);
    }
    
    for (int i = 0; i < participant.size(); i++) {
        bool a = false;
        for (int j = 0; j < newarr.size(); j++) {
            if (participant[i] == newarr[j]) {
                a = true;
                newarr.erase(newarr.begin() + j);
                break;
            }
        }
        if (a == false)
        {
            answer = participant[i];
        }
    }
    return answer;
}

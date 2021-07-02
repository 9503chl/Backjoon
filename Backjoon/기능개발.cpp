#include <string> 
#include <vector> 
#include <iostream> 
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; int cnt = 0;
    while (progresses.size() !=0) {
        for (int i = 0; i < size(progresses); i++) progresses[i] += speeds[i];
        while (!progresses.empty() && !speeds.empty() && progresses[0] >= 100) {
            cnt++;
            speeds.erase(speeds.begin()), progresses.erase(progresses.begin());
        }
        if (cnt != 0) answer.push_back(cnt),cnt = 0;
    }
    return answer;
}

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;

}
#include <string> 
#include <vector> 
#include <stack>
#include <iostream> 
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; int cnt = 0; int cur = 1; int size1 = 0;
    stack <int> stk; //321 54
    while (cur <= progresses.size()) {
        for (int i = 0; i < size(progresses); i++) {
            if (progresses[i] >= 100) {
                stk.push(i + 1); //순서 저장
                progresses[i] -= 10001; 
            }
            progresses[i] += speeds[i];
        }
        if (stk.top() == cur) {
            size1 = stk.size();
            for (int i = 0; i < size1; i++) cnt+1, stk.pop();
            answer.push_back(cnt), cur += cnt, cnt = 0; 
        }
    }
    return answer;
}

int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;

}
#include <string>
#include <vector>
#include <iostream> 

using namespace std;

string solution(int n) {
    string answer = "";
    int s = n;
    int remain = 0;
    while (s != 0) { //nÀÌ ¸ò
        remain = s % 3;
        s /= 3;
        if (remain == 0) answer += "4", s--; //³ª´©¾î ¶³¾îÁü
        else if (remain == 1) answer += "1";
        else if (remain == 2) answer += "2";
    }
    return answer;
}
int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;
    int N; cin >> N;
    cout << solution(N);
}
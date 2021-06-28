#include <string>
#include <stack>
#include <iostream> 

using namespace std;

int solution(string s)
{
    stack <char> first;
    int answer = -1;
    first.push(s[0]);
    for (int i = 1; i < size(s); i++) {
        if (!first.empty() && first.top() == s[i]) first.push(s[i]), first.pop(), first.pop();
        else first.push(s[i]);
    }
    if (first.empty()) answer = 1;
    else answer = 0;
    return answer;
}
int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;
    string N; cin >> N;
    cout << solution(N);
}
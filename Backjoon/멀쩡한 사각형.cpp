#include <iostream> 

using namespace std;

long long solution(int w, int h) {
    long long answer = 0;
    for (int i = 0; i < w; i++) answer += (long long)h * i / w; //����̰� w/h�� �׷���
    return answer * 2;
}
int main() {
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);;
    int W,H; cin >> W >> H;
    cout << solution(W,H);
}
#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int first;
	int second;
	int empty;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N; vector <stt> dp(N + 1, {0,});
	dp[1] = { 1,1,1 };
	for (int i = 2; i <= N; i++) {
		dp[i].first = (dp[i - 1].second + dp[i - 1].empty) %9901;
		dp[i].second = (dp[i - 1].first + dp[i - 1].empty) % 9901;
		dp[i].empty = (dp[i - 1].second + dp[i - 1].first + dp[i-1].empty) % 9901;
	}
	cout << (dp[N].first + dp[N].second + dp[N].empty) % 9901;
}
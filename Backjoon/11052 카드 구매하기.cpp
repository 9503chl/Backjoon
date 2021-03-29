#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int N, cnt = 0; cin >> N;
	vector <int> dp(N + 1, 0);
	for (int i = 1; i <= N; i++) cin >> dp[i];
	for (int i = 2; i <= N; i++) {
		cnt = dp[i];
		for (int j = 1; j <= i / 2; j++) {
			if (dp[j] + dp[i - j] > cnt) cnt = dp[j] + dp[i - j];
		}
		dp[i] = cnt;
	}
	cout << dp[N];
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, K, cnt = 0; cin >> N >> K;
	vector <vector <long long>> dp(K + 1, vector <long long>(N + 1));
	if (K == 1) cout << 1;
	else if (K == 2) cout << N + 1;
	else {
		for (int i = 0; i <= N; i++) dp[2][i] = 1;
		for (int i = 3; i <= K; i++) {
			for (int j = 0; j <= N; j++) {
				if (j == 0) dp[i][j] = 1;
				else {
					dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000000;
				}
			}
		}
		for (int i = 0; i <= N; i++) {
			cnt = (cnt + dp[K][i]) % 1000000000;
		}
		cout << cnt % 1000000000;
	}
}
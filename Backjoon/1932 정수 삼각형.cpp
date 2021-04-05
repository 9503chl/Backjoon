#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N,max1 = 0; cin >> N; 
	vector <vector <int>> dp(N + 1, vector <int>(N+1,0));
	for (int i = 1; i <= N; i++) 
		for (int j = 1; j <= i; j++) cin >> dp[i][j];
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) dp[i][j] += dp[i - 1][j - 1];
			else dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	for (int i = 1; i <= N; i++)
		if (max1 < dp[N][i]) max1 = dp[N][i];
	cout << max1;
}


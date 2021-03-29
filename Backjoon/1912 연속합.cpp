#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int n, rst = 0; cin >> n; vector <int> dp(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> dp[i];
	for (int i = 1; i <= n; i++)
		if (dp[i] < dp[i - 1] + dp[i]) dp[i] = dp[i - 1] + dp[i];
	rst = dp[1];
	for (int i = 2; i <= n; i++)
		if (rst < dp[i]) rst = dp[i];
	cout << rst;
}
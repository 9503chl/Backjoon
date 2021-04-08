#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int sel, no;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int n, max1,last = 0; cin >> n; vector <stt> dp(n + 1, { 0, });
	for (int i = 1; i <= n; i++) cin >> dp[i].sel;
	for (int i = 2; i <= n; i++) {
		dp[i].no = max(dp[i-1].sel,dp[i-1].no + dp[i].sel);
		dp[i].sel = max(dp[i - 1].sel + dp[i].sel , dp[i].sel);
	}
	max1 = dp[1].sel;
	for (int i = 2; i <= n; i++) {
		if (max1 < dp[i].sel) max1 = dp[i].sel;
		if (max1 < dp[i].no) max1 = dp[i].no;
	}
	cout << max1;
}
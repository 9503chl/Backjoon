#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int a1, a2, a3;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, rst = 0; cin >> N; 
	vector <stt> dp(N+1, { 0, });
	cin >> dp[1].a1 >> dp[1].a2 >> dp[1].a3; //26 40 83
	for (int i = 2; i <= N; i++) {
		cin >> dp[i].a1 >> dp[i].a2 >> dp[i].a3;
		dp[i].a1 = dp[i].a1 + min(dp[i - 1].a2, dp[i - 1].a3);
		dp[i].a2 = dp[i].a2 + min(dp[i - 1].a1, dp[i - 1].a3);
		dp[i].a3 = dp[i].a3 + min(dp[i - 1].a2, dp[i - 1].a1);
		rst = min(dp[i].a1, min(dp[i].a2, dp[i].a3));
	}
	cout << rst;
}
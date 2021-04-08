#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int a1, a2, a3;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N; vector <stt> dp(N + 1, { 0, });
	for (int i = 1; i <= 3; i++) cin >> dp[i].a1 >> dp[i].a2 >> dp[i].a3;
	for (int i = 2; i <= N; i++) {
		if (i == N) {
			
		}
		else {
			dp[i].a1 = min(dp[i - 1].a2, dp[i - 1].a3);
			dp[i].a2 = min(dp[i - 1].a1, dp[i - 1].a3);
			dp[i].a3 = min(dp[i - 1].a1, dp[i - 1].a2);
		}
	}

}
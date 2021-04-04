#include <iostream>
#include <vector>
using namespace std;
struct stt{
	int sel;
	int no;
};
int main() { 
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N; vector <stt> dp(N + 1, { 0, });
	vector <int> cnt(N + 1, 0);
	for (int i = 1; i <= N; i++) cin >> cnt[i];
	if (N == 1) cout << cnt[1];
	else if (N == 2) cout << cnt[2] + cnt[1];
	else {
		dp[1].sel = cnt[1]; dp[2].sel = cnt[2] + cnt[1];
		dp[2].no = dp[1].sel;
		for (int i = 3; i <= N; i++) {
			dp[i].no = max(dp[i - 1].sel, dp[i - 1].no);
			dp[i].sel = max(dp[i - 1].no + cnt[i], cnt[i] + cnt[i - 1] + dp[i - 2].no);
		}
		cout << max(dp[N].sel, dp[N].no);
	}
}
	

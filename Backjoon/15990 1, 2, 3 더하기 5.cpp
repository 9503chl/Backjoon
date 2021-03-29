#include <iostream>
#include <vector>
using namespace std;
struct stt {
	long long a1;
	long long a2;
	long long a3;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int n, max = 0; cin >> n;
	vector <int> cnt(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> cnt[i];
		if (max < cnt[i]) max = cnt[i];
	}
	if (max < 3) max = 4;
	vector <stt> dp(max + 1, { 0,0,0 });
	dp[1].a1 = 1; dp[1].a2 = 0; dp[1].a3 = 0;
	dp[2].a1 = 0; dp[2].a2 = 1; dp[2].a3 = 0;
	dp[3].a1 = 1; dp[3].a2 = 1; dp[3].a3 = 1;
	for (int i = 4; i <= max; i++) {
		dp[i].a1 = (dp[i - 1].a2 + dp[i - 1].a3) % 1000000009;
		dp[i].a2 = (dp[i - 2].a1 + dp[i - 2].a3) % 1000000009;
		dp[i].a3 = (dp[i - 3].a1 + dp[i - 3].a2) % 1000000009;
	}
	for (int i = 0; i < size(cnt); i++) cout << (dp[cnt[i]].a1 + dp[cnt[i]].a2 + dp[cnt[i]].a3) % 1000000009 << "\n";
}
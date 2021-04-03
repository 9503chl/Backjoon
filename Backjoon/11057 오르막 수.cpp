#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int cnt[10];
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, rst = 0; cin >> N; vector <stt>dp(N + 1, { 0, });
	for (int i = 0; i < 10; i++) dp[1].cnt[i] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) dp[i].cnt[j] = 1;
			else dp[i].cnt[j] = (dp[i - 1].cnt[j] + dp[i].cnt[j - 1]) % 10007;
		}
	}
	for (int i = 0; i < 10; i++) rst = (rst + dp[N].cnt[i]) % 10007;
	cout << rst;
}
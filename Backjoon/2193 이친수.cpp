#include <iostream>
#include <vector>
using namespace std;
struct stt {
	long long cnt0;
	long long cnt1;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	vector <stt> dp(N + 1, { 0,0 });
	dp[1].cnt0 = 0; dp[1].cnt1 = 1;
	for (int i = 2; i <= N; i++) {
		dp[i].cnt1 = dp[i - 1].cnt0;
		dp[i].cnt0 = dp[i - 1].cnt1 + dp[i - 1].cnt0;
	}
	cout << (long long)dp[N].cnt1 + dp[N].cnt0;
}
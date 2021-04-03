#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int first;
	int second;
	int empty;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num; vector <stt> dp(num + 1, { 0, });
		for (int j = 1; j <= num; j++) cin >> dp[j].first;
		for (int j = 1; j <= num; j++) cin >> dp[j].second;
		for (int j = 2; j <= num; j++) {
			dp[j].first += max(dp[j-1].second, dp[j-1].empty);
			dp[j].second += max(dp[j-1].first, dp[j-1].empty);
			dp[j].empty = max(dp[j-1].first, dp[j-1].second);
		}
		cout << max(dp[num].first, max(dp[num].second, dp[num].empty)) << "\n";
	}
}
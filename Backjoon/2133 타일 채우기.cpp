#include <iostream>
#include <vector>
using namespace std;
struct stt{
	int reg, irr;
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N; vector <stt> dp(N + 1, { 0, });
	if (N == 1) cout << 0;
	else if (N == 2) cout << 3;
	else {
		dp[2].reg = 3;
		for (int i = 4; i <= N; i+=2) {
			dp[i].reg += (dp[i - 2].reg + dp[i-2].irr) * 3;
			for (int j = 4; j <= i; j += 2) { 
				if (i == j) dp[i].irr += 2;
				else dp[i].irr += (dp[i - j].reg+ dp[i-j].irr) * 2;
			}
		}
		cout << dp[N].reg + dp[N].irr;
	}
}
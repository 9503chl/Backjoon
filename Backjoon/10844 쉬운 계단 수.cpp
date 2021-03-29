#include <iostream>
#include <vector>
using namespace std;
struct stt {
	int a[10];
};
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int N, sum = 0; cin >> N;
	vector <stt> dp(N + 1, { 0, });
	for (int i = 1; i <= 9; i++) dp[1].a[i] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) dp[i].a[j] = dp[i - 1].a[j + 1] % 1000000000;
			else if (j == 9) dp[i].a[j] = dp[i - 1].a[j - 1] % 1000000000;
			else dp[i].a[j] = (dp[i - 1].a[j - 1] + dp[i - 1].a[j + 1]) % 1000000000;
		}
	}
	for (int i = 0; i <= 9; i++) sum = (sum + dp[N].a[i]) % 1000000000;
	cout << sum;
}
#include <iostream>
using namespace std;

long long cnt[100001] = { 0, };

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cnt[1] = 1;
	cnt[2] = 3;
	for (int i = 3; i <= n; i++) {
		cnt[i] = (cnt[i - 1] + cnt[i - 2] * 2) % 10007;
	}
	cout << cnt[n];
}
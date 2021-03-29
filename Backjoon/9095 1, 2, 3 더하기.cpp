#include <iostream>
using namespace std;

int cnt[11] = { 0, };
int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	cnt[1] = 1;
	cnt[2] = 2;
	cnt[3] = 4;
	for (int i = 4; i <= 10; i++) cnt[i] = cnt[i - 3] + cnt[i - 2] + cnt[i - 1];
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n; cout << cnt[n] << "\n";
	}
}
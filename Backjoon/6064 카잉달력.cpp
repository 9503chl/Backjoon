#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ucld(int a, int b) { //유클리드 호제법
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int T, N, M, x, y; cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M >> x >> y;
		int total = N * M / ucld(N, M);
		bool yes = false;
		for (int j = x; j <= total; j += N) {
			if ((j - 1) % M == y - 1) {
				cout << j << "\n";
				yes = true; break;
			}
		}
		if (yes == false) cout << -1 << "\n";
	}
}
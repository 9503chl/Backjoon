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
		vector <int> cnt;
		int break1 = 0;
		int a = x; int b = y;
		while (a < total) { //3 13.. 53
			cnt.push_back(a);
			a += N;
		}
		while (b < total) {
			for (int i = 0; i < size(cnt); i++) {
				if (cnt[i] == b) {
					break1 = b;
					cout << b << "\n"; break;
				}
			}
			if (break1 == b) break;
			b += M;
		}
		if (a > total && b > total) cout << -1 << "\n";
	}
}
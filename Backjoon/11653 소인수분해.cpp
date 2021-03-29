#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int N, x = 0, j = 0;;
	cin >> N;
	vector <int> rst(N, 0);
	vector <bool> check(N + 1, false);
	for (int i = 2; i * i <= N; i++) {
		if (!check[i]) {
			for (int j = i * i; j <= N; j += i) {
				check[j] = true;
			}
		}
	}
	for (int i = 2; i <= N; i++) {
		if (!check[i]) {
			rst[j] = i; j++;
		}
	}
	j = 0;	x = rst[j];
	while (N != 1) {
		if (N % x == 0) {
			cout << x << "\n"; N /= x;
		}
		else x = rst[++j];
	}
}
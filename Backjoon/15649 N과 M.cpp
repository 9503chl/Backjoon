#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Bt(int Arr[], int a, int b, int c) { //백트래킹
	for (int i = 1; i <= a; i++) {
		int k = 0;
		if (c == 0) Arr[0] = i;
		else {
			for (k = 0; k < c; k++) {
				if (Arr[k] == i) break;
			}
			if (k == c) {
				Arr[c] = i;
			}
			else continue;
		}
		if (b - 1 == c) {
			for (int k = 0; k < b; k++) cout << Arr[k] << "\n";
		}
		else Bt(Arr, a, b, c + 1);
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, M; cin >> N >> M;
	int cnt[8] = { 0, };
	Bt(cnt, N, M, 0);
}
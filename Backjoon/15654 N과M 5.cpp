#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Array[8], rst[8] = { 0, };
bool yes[8] = { true, };
void Bt(int n, int m, int cnt) {
	for (int i = 0; i < n; i++) { //자기자신일때 넘어간느데 안됨.
		if (cnt < m && yes[i] == true) {
			yes[i] = false;
			rst[i] = Array[i];
			Bt(n, m, cnt + 1);
			yes[i] = true;
		}
		else {
			for (int i = 0; i < m; i++) cout << rst[i] << " ";
			cout << "\n";
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) cin >> Array[i];
	sort(Array, Array+N);
	Bt(N, M, 0);
}
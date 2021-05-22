#include <iostream>
#include <vector>

using namespace std;
int Array[8];
void Bt(int n, int m, int cnt){ //n은 최대수, m은 길이
	for (int i = 0; i < n; i++) { //재귀를 이용하자
		Array[cnt] = i + 1;
		if (cnt < m-1) Bt(n, m, cnt + 1);
		else {
			for (int j = 0; j < m; j++) cout << Array[j] << " ";
			cout << "\n";
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N, M, a; cin >> N >> M;
	for (int i = 0; i < M; i++) Array[i] = 1;
	Bt(N, M, 0);
}
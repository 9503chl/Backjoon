#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec1,vec2,rst;
bool yes[10001] = { false, };
int end1 = 0; bool endTrue = false;
void Bt(int n, int cnt) {
	for (int i = 0; i < n; i++) {
		if (end1 == 1 && cnt == n) {
			for (int j = 0; j < n; j++) cout << rst[j] << " ";
			cout << "\n"; endTrue = true; end1 = 0; return;
		}
		if (cnt < n) {
			if (!yes[i]) {
				rst[cnt] = vec2[i]; yes[i] = true;
				Bt(n, cnt + 1);
				yes[i] = false;
			}
			else continue;
		}
		else {
			if (rst == vec1) end1++; 
			rst[cnt-1] = 0; break;
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	vec1.resize(N, 0); vec2.resize(N, 0); rst.resize(N, 0);
	for (int i = 0; i < N; i++) cin >> vec1[i];
	vec2 = vec1; sort(vec2.begin(), vec2.end());
	Bt(N,0); 
	if (!endTrue) cout << -1;
}
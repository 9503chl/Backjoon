#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> vec1, vec2;
bool yes[10001] = { false, };
int first = 0;
void Bt(int n, int cnt) {
	for (int i = 0; i < n; i++) {
		if (cnt < n) {
			if (!yes[vec2[i]]) {
				vec1[cnt] = vec2[i]; yes[vec2[i]] = true;
				Bt(n, cnt + 1);
				yes[vec2[i]] = false;
			}
			else continue;
		}
		else {
			for (int j = 0; j < n; j++) cout << vec1[j] << " ";
			cout << "\n";
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	vec1.resize(N, 0), vec2.resize(N, 0);
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		yes[num] = true; vec1[i] = num;
	}
	vec2 = vec1; sort(vec2.begin(), vec2.end());
	vec1[N - 1] = 0; yes[vec1[N - 1]] = false; 
	vec1[N - 2] = 0; yes[vec1[N - 2]] = false;
	Bt(N, N - 2);
}
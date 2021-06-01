#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool yes[10] = { false, };
char cnt[10];
vector <int> first1(10,0),rst(10,0),last(10, 0);
bool first = false;
void Bt(int n, int num) {
	if (num == n + 1) {
		if (!first) first1 = rst, first = true;
		else last = rst;
		return;
	}
	for (int i = 0; i <= 9; i++) {
			if (num == 0) {
				rst[num] = i; yes[i] = true;
				Bt(n, num+1); yes[i] = false;
			}
			else { 
				if (!yes[i]) {
					if (cnt[num - 1] == '<') {
						if (rst[num-1] < i) {
							rst[num] = i; yes[i] = true;
							Bt(n, num + 1); yes[i] = false;
						}
					}
					else { // >
						if (rst[num -1] > i) {
							rst[num] = i; yes[i] = true;
							Bt(n, num + 1); yes[i] = false;
						}
					}
				}
			}
		}
	}
int main()
{
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int N; cin >> N; 
	for (int i = 0; i < N; i++) cin >> cnt[i];
	Bt(N,0);
	for (int i = 0; i <= N; i++) cout << last[i];
	cout << "\n";
	for (int i = 0; i <= N; i++) cout << first1[i];
}
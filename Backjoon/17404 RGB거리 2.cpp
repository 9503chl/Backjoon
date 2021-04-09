#include<iostream>
#include<algorithm>
using namespace std;
int d[1001][3];
int rgb[1001][3];
int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j < 3; j++)
			cin >> rgb[i][j];
	int ans = 1000001;
	for (int k = 0; k <= 2; k++) {
		for (int i = 0; i <= 2; i++) {
			if (i == k) d[1][i] = rgb[1][i]; 
			else d[1][i] = 10000001;
		}
		for (int i = 2; i <= n; i++) {
			d[i][0] = min(d[i - 1][1], d[i - 1][2]) + rgb[i][0];
			d[i][1] = min(d[i - 1][0], d[i - 1][2]) + rgb[i][1];
			d[i][2] = min(d[i - 1][0], d[i - 1][1]) + rgb[i][2];
		}
		for (int i = 0; i <= 2; i++) {
			if (i == k) continue; 
			ans = min(ans, d[n][i]);
		}
	}
	cout << ans;
}
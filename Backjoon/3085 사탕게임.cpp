#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,max1 = 1;
char cnt[50][50];
void sum() {
	int rst = 0;
	for (int i = 0; i < N; i++) {
		rst = 1;
		for (int j = 0; j < N - 1; j++) {
			if (cnt[i][j] == cnt[i][j + 1]) rst++;
			else rst = 1;
			max1 = max(max1, rst);
		}
	}
	for (int i = 0; i < N; i++) {
		rst = 1;
		for (int j = 0; j < N - 1; j++) {
			if (cnt[j + 1][i] == cnt[j][i]) rst++;
			else rst = 1;
			max1 = max(max1, rst);
		}
	}
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	cin >> N;
	for (int i = 0; i < N; i++) 
		for (int j = 0; j < N; j++) cin >> cnt[i][j];
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N - 1; j++) {
			swap(cnt[i][j], cnt[i][j + 1]);
			sum();
			swap(cnt[i][j], cnt[i][j + 1]);
			//x변환이냐 y변환이냐
			swap(cnt[j + 1][i], cnt[j][i]);
			sum();
			swap(cnt[j + 1][i], cnt[j][i]);
		}
	}
	cout << max1;
}
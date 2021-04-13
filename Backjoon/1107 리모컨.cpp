#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
int min1 = 0, cnt = 0;
string N; vector <int> but;
string rst;
void check(int a) {
	min1 = abs(a - but[0] - 48); 
	int index = 0;
	for (int i = 1; i < but.size(); i++) min1 = min(min1, abs(a - but[i] - 48)); 
	for (int i = 0; i < but.size(); i++) {
		if (min1 == abs(a - but[i] - 48)) {
			index = but[i]; break;
		}
	}
	rst.push_back(index + '0'); cnt++;
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	vector <bool> ex(10, true); int M; 
	cin >> N >> M; 
	for (int i = 0; i < M; i++) {
		int num; cin >> num;
		ex[num] = false;
	}
	if (N == "100") cout << 0;
	else if (M == 10) cout << stoi(N) - 100;
	else{
		for (int i = 0; i < 10; i++)
			if (ex[i] == true) but.push_back(i);
		for (int i = 0; i < size(N); i++) check(N[i]);
		cout << min(abs(stoi(N) - stoi(rst)) + cnt,stoi(N)-100);
	}
}
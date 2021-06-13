#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int t,cnt=0; cin >> t;
	while (t>0) {
		if (t >= 5) t -= 5;
		else if (t >= 4) t -= 4;
		else if (t >= 3) t -= 3;
		else if (t >= 2) t -= 2;
		else t -= 1;
		cnt++;
	}
	cout << cnt;
}
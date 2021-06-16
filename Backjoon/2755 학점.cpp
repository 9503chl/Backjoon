#include <iostream>
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	double N; int M = 0; double rst = 0;
	cin >> N; 
	for (int i = 0; i < N; i++) {
		string a; double num; string cnt; cin >> a >> num >> cnt;
		M += num;
		if (cnt == "A+") rst += num * 4.3;
		else if (cnt == "A0") rst += num * 4.0;
		else if (cnt == "A-") rst += num * 3.7;
		else if (cnt == "B+") rst += num * 3.3;
		else if (cnt == "B0") rst += num * 3.0;
		else if (cnt == "B-") rst += num * 2.7;
		else if (cnt == "C+") rst += num * 2.3;
		else if (cnt == "C0") rst += num * 2.0;
		else if (cnt == "C-") rst += num * 1.7;
		else if (cnt == "D+") rst += num * 1.3;
		else if (cnt == "D0") rst += num * 1.0;
		else if (cnt == "D-") rst += num * 0.7;
		else continue;
	}
	rst = ceil(rst/M*100)/100;
	cout.precision(3);
	cout << rst;
}
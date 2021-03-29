#include <iostream>
#include <math.h>
using namespace std;

int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	string num;
	long long jin, a = 0, rst = 0;
	cin >> num >> jin;
	for (int i = size(num); i > 0; i--) {
		if (num[a] < 58) rst += (num[a] - 48) * pow(jin, i - 1);
		else rst += (num[a] - 55) * pow(jin, i - 1);
		a++;
	}
	cout << rst;
}
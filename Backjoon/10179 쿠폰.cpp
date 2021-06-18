#include <iostream> 
#include <vector> 
#include <cmath>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);; cin.tie(0);
	int N; cin >> N;
	cout << fixed;
	cout.precision(2);
	vector <double> rst(N, 0);
	for (int i = 0; i < N; i++) {
		double num; cin >> num;
		rst[i] = num * 0.8;
	}
	for (int i = 0; i < N; i++) cout << "$" << rst[i] << "\n";
}
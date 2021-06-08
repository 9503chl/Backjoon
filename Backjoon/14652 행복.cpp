#include <iostream>
using namespace std;


int main() {
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(false);
	int N,M,K; cin >> N >> M >> K;
	cout << K % N + 1 << " " << K % M + 1;
}
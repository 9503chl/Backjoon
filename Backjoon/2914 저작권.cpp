#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int A,I; cin >> A >> I;
	cout << (A * (I-1)) + 1;
}
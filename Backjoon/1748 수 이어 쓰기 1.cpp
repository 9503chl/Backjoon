#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	int N; cin >> N;
	if (N < 10) cout << N; //�����ڸ�
	else if (N < 100) cout << 9 + (N - 9) * 2; //�����ڸ�
	else if (N < 1000) cout << 189 + (N - 99) * 3; //��
	else if (N < 10000) cout << 2889 + (N - 999) * 4; //õ
	else if (N < 100000) cout << 38889 + (N - 9999) * 5; //��
	else if (N < 1000000) cout << 488889 + (N - 99999) * 6; //�ʸ�
	else if (N < 10000000) cout << 5888889 + (N - 999999) * 7; //�鸸
	else if (N < 100000000) cout << 68888889 + (N - 9999999) * 8; //õ��
	else cout << 788888889 + 9;
}
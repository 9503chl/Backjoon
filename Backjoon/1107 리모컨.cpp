#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int N , M; vector <int> but (10, true);
int min1 = 0, length = 0, cnt = 0, rst = 0, cntB = 0;
void check(int a) {
	a %= 10;
	for (int i = 0; i < 10; i++)
		if (but[i] == true) {
			min1 = abs(a - i); break; //������ ã��
		}
	for (int i = 0; i < 10; i++) 
		if (but[i] == true) min1 = min(min1, abs(a - i)); //��
	for (int i = 0; i < 10; i++) {
		if (abs(a - i) == min1 && but[i] == true) {
			cnt = i; break; //�ε���ã��
		}
	}
	cntB++; //�̰͵� ��ư�����°�
}
int main()
{
	cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
	cin >> N >> M; 
	for (int i = 0; i < M; i++) { //��ư �����
		int num; cin >> num;
		but[num] = false;
	}
	int x = N;
	while (x / 10) {
		x /= 10;
		length += 1;
	}
	for (int i = length; i >= 0; i--) {
		check(N / pow(10, i));
		rst += (cnt * pow(10, i));
	}
	cout << min(abs(N - rst) + cntB, abs(N - 100));
}
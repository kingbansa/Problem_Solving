#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int N, W, H; //����, ����, ����
	cin >> N >> W >> H;
	int degak = sqrt((W*W) + (H*H)); // �밢�����ε� ���� �� �ִ�.
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a <= H || a <= degak)
			printf("DA\n");
		else
			printf("NE\n");
	}
	return 0;
}
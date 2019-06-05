#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int N, W, H; //성냥, 가로, 세로
	cin >> N >> W >> H;
	int degak = sqrt((W*W) + (H*H));
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
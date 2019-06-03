#include <iostream>
using namespace std;
int T;
int main(void)
{
	cin >> T;
	while (T--)
	{
		int N, hakjum = 0, hakresult = 0;
		double gap, result = 0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> hakjum >> gap;
			hakresult += hakjum;
			result += hakjum * gap;
		}
		printf("%d %.1f\n", hakresult, result / hakresult);
	}
	return 0;
}
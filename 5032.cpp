#include <iostream>
using namespace std;
int main(void)
{
	int e, f, c, result = 0;
	cin >> e >> f >> c;
	// 왜 예제를 보면 9개 0개 3개 인데 4개가 답이 되는거지??
	e += f;
	while (true)
	{
		if (e - c < 0)
			break;
		else {
			e -= c;
			e += 1;
			result++;
		}
	}
	printf("%d\n", result);
	return 0;
}
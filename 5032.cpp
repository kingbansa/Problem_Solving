#include <iostream>
using namespace std;
int main(void)
{
	int e, f, c, result = 0;
	cin >> e >> f >> c;
	// �� ������ ���� 9�� 0�� 3�� �ε� 4���� ���� �Ǵ°���??
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
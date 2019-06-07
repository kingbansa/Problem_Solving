#include <iostream>
using namespace std;
int main(void)
{
	int e, f, c, result = 0;
	cin >> e >> f >> c;
	e += f;
	while (e / c) // 0¿Ãµ«∏È ≈ª√‚
	{
		int num = e / c;
		result += num;
		e %= c; e += num;
	}
	printf("%d\n", result);
	return 0;
}
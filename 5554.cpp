#include <iostream>
using namespace std;
int main(void)
{
	int a, b, c, d, result = 0;
	cin >> a >> b >> c >> d;
	result = a + b + c + d;
	printf("%d\n%d", result / 60, result % 60);
	return 0;
}
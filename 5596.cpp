#include <iostream>
using namespace std;
int p()
{
	int result = 0;
	for (int i = 0; i < 4; i++) {
		int a;
		cin >> a;
		result += a;
	}
	return result;
}
int main(void)
{
	int A = p(), B = p(); // ¹Î±¹ ¸¸¼¼
	if (A >= B)
		printf("%d\n", A);
	else
		printf("%d\n", B);
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int arr[10];
int pch = 987654321, savepch;
int main(void)
{
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	int result = 0;
	for (int i = 0; i < 10; i++) {
		result += arr[i];
		int Min = abs(100 - result);
		if (pch >= Min) {
			pch = Min;
			savepch = result;
		}
	}
	printf("%d\n", savepch);
	return 0;
}
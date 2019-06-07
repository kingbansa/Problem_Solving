#include <iostream>
using namespace std;
int arr[3];
int main(void)
{
	int n, pch = -1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > pch)
			pch = arr[i];
	}

	if (n == 2) {
		for (int i = 1; i <= pch; i++) {
			if (arr[0] % i == 0 && arr[1] % i == 0)
				printf("%d\n", i);
		}
	}
	else {
		for (int i = 1; i <= pch; i++) {
			if (arr[0] % i == 0 && arr[1] % i == 0 && arr[2] % i == 0)
				printf("%d\n", i);
		}
	}
	return 0;
}
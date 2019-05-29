#pragma warning(disable:4996)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
int main(void)
{
	cin >> N;
	int arr[15000] = { 0, };
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr+N);
	int MAX = 0, result;
	for (int i = 0; i < N; i++) {
		result = arr[i] * (N-i);
		if (result > MAX)
			MAX = result;
	}
	cout << MAX << '\n';
	return 0;
}
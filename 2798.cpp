#include <iostream>
using namespace std;
int arr[105];
int a[3];
int N, M;
int pch = 987654321, savepch;
void brute(int start, int index)
{
	if (index == 3)
	{
		int result = 0;
		for (int i = 0; i < index; i++) {
			result += a[i];
		}
		if (result > M)
			return;
		
		int Min = M - result;
		if (pch > Min) {
			pch = Min;
			savepch = result;
		}
		return;
	}

	for (int i = start; i < N; i++) {
		a[index] = arr[i];
		brute(i+1, index + 1);
	}
}

int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	brute(0,0);
	printf("%d\n", savepch);
	return 0;
}
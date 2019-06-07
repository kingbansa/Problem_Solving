#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main(void)
{
	int wscore[10];
	for (int i = 0; i < 10; i++) {
		cin >> wscore[i];
	}

	int kscore[10];
	for (int i = 0; i < 10; i++) {
		cin >> kscore[i];
	}

	sort(wscore, wscore + 10, greater<int>());
	sort(kscore, kscore + 10, greater<int>());

	int A = 0, B = 0;
	for (int i = 0; i < 3; i++) {
		A += wscore[i];
		B += kscore[i];
	}
	
	printf("%d %d\n", A, B);
	return 0;
}
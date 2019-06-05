#include <iostream>
#include <queue>
#include <vector>
using namespace std;
bool v[505], visited[505][505];
int main(void)
{
	int n, m, result = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		visited[a][b] = visited[b][a] = 1;
		if (a == 1)
			v[b] = true;
		else if (b == 1)
			v[a] = true;
	}

	for (int i = 2; i <= n; i++) {
		if (visited[1][i]) {
			for (int j = 2; j <= n; j++) {
				if (visited[i][j]) {
					v[j] = true;
				}
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		if (v[i])
			result++;
	}

	printf("%d\n", result);
	return 0;
}
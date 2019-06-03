#include <iostream>
using namespace std;
pair<pair<pair<int,int>, int>, pair<int,int>> arr[1004];
int N, K;
int main(void)
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		arr[i].first.first.first = a, arr[i].first.first.second = b, arr[i].first.second = c, arr[i].second.first = d;
	}

	for (int i = 0; i < N; i++)
	{
		int gold = arr[i].first.first.second, silver = arr[i].first.second, bronze = arr[i].second.first, result = 1;
		for (int j = 0; j < N; j++)
		{
			if (i == j)
				continue;
			if (arr[j].first.first.second > gold)
				result++;
			else if (arr[j].first.first.second == gold) {
				if (arr[j].first.second > silver)
					result++;
				else if (arr[j].first.second == silver) {
					if (arr[j].second.first > bronze)
						result++;
				}
			}
		}
		arr[i].second.second = result;
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i].first.first.first == K) {
			printf("%d\n", arr[i].second.second);
			return 0;
		}
	}
}
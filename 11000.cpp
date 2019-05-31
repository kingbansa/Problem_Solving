#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
pair<int, int> arr[200005];
int N;
int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + N);
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(arr[0].second);
	int start, end;
	for (int i = 1; i < N; i++) {
		start = arr[i].first;
		end = arr[i].second;
		if (pq.top() > start) {
			pq.push(end);
		}
		else {
			pq.pop();
			pq.push(end);
		}
	}
	printf("%d\n", pq.size());
	return 0;
}
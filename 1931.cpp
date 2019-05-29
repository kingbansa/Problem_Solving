#pragma warning(disable:4996)
#include <cstdio>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> vec;
int N;

// pair 정렬 --> 끝나는 시간이 빠른 순으로, 만약 같다면 시작하는 시간이 작은 순으로
bool CompareNum(const pair<int,int>& a, const pair<int,int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(void)
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		vec.push_back(make_pair(a, b));
	}
	
	// 정렬
	sort(vec.begin(), vec.end(), CompareNum);

	// 회의 시작
	int end = 0;
	int result = 0;
	for (int i = 0; i < N; i++) {
		if (end > vec[i].first)
			continue;;
		result++;
		end = vec[i].second;
	}

	printf("%d\n", result);
	return 0;
}
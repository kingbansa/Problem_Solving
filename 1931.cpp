#pragma warning(disable:4996)
#include <cstdio>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> vec;
int N;

// pair ���� --> ������ �ð��� ���� ������, ���� ���ٸ� �����ϴ� �ð��� ���� ������
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
	
	// ����
	sort(vec.begin(), vec.end(), CompareNum);

	// ȸ�� ����
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
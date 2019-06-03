#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string A, B;
	char ch;
	cin >> A >> ch >> B;
	if (ch == '*') {
		int zero = A.size() + B.size() - 2;
		printf("1");
		for (int i = 0; i < zero; i++)
			printf("0");
	}
	else {
		int size;
		if (A.size() < B.size()) { 
			size = A.size();
			printf("1");
			for (int i = B.size() - 2; i >= size; i--)
				printf("0");
			printf("1");
			for (int i = size - 2; i >= 0; i--)
				printf("0");
		}
		else if (A.size() > B.size()) {
			size = B.size();
			printf("1");
			for (int i = A.size() - 2; i >= size; i--)
				printf("0");
			printf("1");
			for (int i = size - 2; i >= 0; i--)
				printf("0");
		}
		else if (A.size() == B.size()) {
			printf("2");
			for (int i = 0; i < A.size() - 1; i++)
				printf("0");
		}
	}
	return 0;
}
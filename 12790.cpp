#include <iostream>
using namespace std;
int T;
int main(void)
{
	cin >> T;
	while (T--)
	{
		int hp, mp, sp, dp;
		cin >> hp >> mp >> sp >> dp;
		int php, pmp, psp, pdp;
		cin >> php >> pmp >> psp >> pdp;
		hp += php, mp += pmp, sp += psp, dp += pdp;
		if (hp < 1) hp = 1;

		if (mp < 1) mp = 1;

		if (sp < 0) sp = 0;

		int result = (1 * hp) + (5 * mp) + (2 * sp) + (2 * dp);
		printf("%d\n", result);
	}
	return 0;
}
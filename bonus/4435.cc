#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int g[] = { 1,2,3,3,4,10 };
int s[] = { 1,2,2,2,3,5,10 }, n;
int main() {
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int sum1, sum2, a;
		sum1 = sum2 = 0;
		for (int j = 0; j < 6; j++) {
			cin >> a;
			sum1 += (a*g[j]);
		}
		for (int j = 0; j < 7; j++) {
			cin >> a;
			sum2 += (a*s[j]);
		}
		if (sum1 > sum2)
			cout << "Battle " << i << ": Good triumphs over Evil\n";
		else if (sum1 < sum2)
			cout << "Battle " << i << ": Evil eradicates all trace of Good\n";
		else
			cout << "Battle " << i << ": No victor on this battle field\n";
	}
	return 0;
}
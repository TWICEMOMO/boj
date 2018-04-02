#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int arr[200001];
long long d[2000001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, narr_n = 1;
	long long sum = 0, team_n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		int t = sqrt(arr[i]);
		for (int j = 1; j <= t; j++) {
			if (arr[i] % j == 0) {
				d[j]++;
				if (arr[i] / j != j) d[arr[i] / j]++;
			}
		}
	}
	sort(arr, arr + n);
	for (int c = 1; c <=arr[n-1]; c++) {
		if (d[c] < 2) continue;

		if (sum < (long long)c* d[c]) sum = (long long)c * d[c];
	}
	printf("%lld", sum);
}
#include <cstdio>
using namespace std;

double ans;
int C, a[1001];
int main() {
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		int sum = 0;
		int N; scanf("%d", &N);
		for (int j = 0; j < N; j++) {
			scanf("%d", &a[j]);
			sum += a[j];
		}
		int cnt = 0;
		double avg = sum / double(N);
		for (int i = 0; i < N; i++) {
			if (a[i] > avg) cnt++;
		}
		avg = cnt/double(N);
		avg *= 100;
		printf("%0.3lf%%\n",avg);
	}
	return 0;
}
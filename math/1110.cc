#include <cstdio>
using namespace std;

void go(int s);
bool visit[1001];
int N, ans;
int main() {
	scanf("%d", &N);
	go(N);
	printf("%d\n", ans);
	return 0;
}
void go(int s) {
	if (visit[s]) return;
	ans++;
	visit[s] = true;
	int firstNum = s / 10;
	int secondNum = s % 10;
	int smid = firstNum + secondNum;
	int sNext = secondNum * 10 + smid % 10;
	go(sNext);
}
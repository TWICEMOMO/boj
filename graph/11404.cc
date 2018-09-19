#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <functional>
#include <utility>
#include <cstdio>
using namespace std;

typedef pair<int, int> P;
const int MAX = 101;
const int INF = 200000;
int n, dist[MAX][MAX], k;
int main() {
	cin >> n>>k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dist[i][j] = i == j ? 0 : INF;
		}
    }

	for (int i = 0; i < k; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		dist[a - 1][b - 1] = min(dist[a-1][b-1],c);
	}

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dist[i][j] == INF || dist[i][j]==0)
				printf("0 ");
			else
			    printf("%d ", dist[i][j]);
		}
		cout << endl;
	}
    return 0;
}
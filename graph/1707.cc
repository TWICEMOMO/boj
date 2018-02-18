#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

int k;
int visit[20001];
vector<int>vec[20001];
void dfs(int s, int c);
int main() {
	scanf("%d", &k);
	while (k--) {
		int v, e; scanf("%d %d", &v, &e);
		memset(visit, 0, sizeof(visit));
		for (int i = 0; i < e; i++) {
			int a, b; scanf("%d %d", &a, &b);
			vec[a].push_back(b); vec[b].push_back(a);
		}
		for(int i=1;i<=v;i++)
			if(visit[i]==0) dfs(i, 2);
		bool flag = false;
		for (int i = 1; i <= v; i++) {
			for (int j = 0; j < vec[i].size(); j++) {
				if (visit[i] == visit[vec[i][j]]) {
					flag = true;
				}
			}
		}
		if (flag) printf("NO\n");
		else printf("YES\n");
		for (int i = 0; i <= 20001; i++) {
			vec[i].clear();
		}
	}
	return 0;
} 
void dfs(int s, int c) {
	visit[s] = c;
	for (int i = 0; i < vec[s].size(); i++) {
		int now = vec[s][i];
		if (visit[now]==0) {
			if(c==2) dfs(now, c-1);
			else dfs(now, c + 1);
		}
	}
}
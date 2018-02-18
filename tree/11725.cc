#include <iostream>
#include <vector>
using namespace std;

vector<int>v[100001];
int N, a[100001];
bool visit[100001];
void go(int  s, int p);
int main() {
	cin.tie(0);
	cin >> N;
	for (int i = 1; i < N; i++) {
		int b, c; cin >> b >> c;
		v[b].push_back(c);
		v[c].push_back(b);
	}
	go(1,0);
	for (int i = 2; i <= N; i++) {
		cout << a[i] << '\n';
	}
	return 0;
}
void go(int s, int p) {
	visit[s] = true;
	p = s;
	for (int i = 0; i < v[s].size(); i++) {
		if (visit[v[s][i]]) continue;
		a[v[s][i]] = p;
		go(v[s][i], p);
	}
}
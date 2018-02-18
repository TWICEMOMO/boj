#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

string s;
int d[101], N, M;
int main() {
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		d[i] = i;
	}
	for (int i = 0; i < M; i++) {
		vector<int>v;
		vector<int>v2;
		int cnt = 0;
		int a, b, c; cin >> a >> b >> c;
		for (int j = c; j <= b; j++) {
			v.push_back(d[j]);
		}
		for (int j = a; j < c; j++) {
			v2.push_back(d[j]);
		}
		for (int j = a; j < c; j++) {
			d[j + b - c + 1] = v2[cnt++];
		}
		cnt = 0;
		for (int j = a; j < v.size() + a; j++) {
			d[j] = v[cnt++];
		}
	}	
    for (int i = 1; i <= N; i++) {
		cout << d[i] << " ";
	}
	return 0;
}
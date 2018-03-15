#include <iostream>
using namespace std;

void go(int inl, int inr, int prel, int prer);
int n, ino[100001], preo[100001];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		ino[k] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> preo[i];
	}
	go(0, n - 1, 0, n - 1);
	return 0;
}
void go(int inl, int inr, int prel, int prer) {
	if (inl > inr || prel > prer) return;
	int root = preo[prer];
	cout << root << " ";
	int inroot = ino[root];
	go(inl, inroot - 1, prel, prel + inroot - 1 - inl);
	go(inroot + 1, inr, prel + inroot - inl, prer - 1);
}
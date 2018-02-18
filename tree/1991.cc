#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int>v[27];
void preorder(int s);
void inorder(int s);
void postorder(int s);
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		char a, b, c; cin >> a >> b >> c;
		if (b != '.') {
			v[a - 'A'].push_back(b - 'A');
		}
		else {
			v[a - 'A'].push_back(-1);
		}
		if (c != '.') {
			v[a - 'A'].push_back(c - 'A');
		}
		else {
			v[a - 'A'].push_back(-1);
		}
	}
	preorder(0);
	cout << '\n';
	inorder(0);
	cout << '\n';
	postorder(0);
	cout << '\n';
	return 0;
}
void preorder(int s) {
	if (s == -1) return;
	cout <<char('A'+s);
	preorder(v[s][0]);
	preorder(v[s][1]);
}
void inorder(int s) {
	if (s == -1) return;
	inorder(v[s][0]);
	cout << char('A' + s);
	inorder(v[s][1]);
}
void postorder(int s) {
	if (s == -1) return;
	postorder(v[s][0]);
	postorder(v[s][1]);
	cout << char('A' + s);
}
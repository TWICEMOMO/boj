#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if(j%2==0) cout << "*";
			else cout << " ";
		}
		cout << '\n';
		for (int j = 0; j < N; j++) {
			if (j % 2 != 0) cout << "*";
			else cout << " ";
		}
		cout << '\n';
	}
	return 0;
}
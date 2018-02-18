#include <iostream>
using namespace std;

int L, P, V;
int main() {
	for (int i = 1;; i++) {
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) break;
		int k = 0;
		if (V%P <= L) k = V%P;
		else k = L;
		cout << "Case " << i << ": " << L*(V / P) + k << '\n';
	}
	return 0;
}
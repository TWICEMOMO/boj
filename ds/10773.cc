#include <iostream>
#include <stack>
using namespace std;

int K, sum;
stack<int>st;
int main() {
	cin >> K;
	int zero = 0;
	for (int i = 0; i < K; i++) {
		int a; cin >> a;
		if (a == 0) st.pop();
		else st.push(a);
	}
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
	return 0;
}
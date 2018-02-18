#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int t; 
int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		double v;
		string s;
		cin >> v >> s;
		cout << fixed;
		cout.precision(4);
		if (s == "kg") cout << v*2.2046 <<" lb"<< '\n';
		else if (s == "l") cout << v*0.2642 <<" g"<< '\n';
		else if (s == "lb") cout << v*0.4536 <<" kg"<< '\n';
		else if (s == "g") cout << v*3.7854 <<" l"<<'\n';
	}
	return 0;
}
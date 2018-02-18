#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int P;
int main() {
	cin >> P;
	for (int i = 0; i < P; i++) {
		string s; cin >> s;
		int a, b, c, d, e, f, g, h;
		a = b = c = d = e = f = g = h = 0;
		for (int i = 2; i < s.length(); i++) {
			if (s[i - 2] == 'T' && s[i - 1] == 'T' && s[i] == 'T') a++;
			else if (s[i - 2] == 'T' && s[i - 1] == 'T' && s[i] == 'H') b++;
			else if (s[i - 2] == 'T' && s[i - 1] == 'H' && s[i] == 'T') c++;
			else if (s[i - 2] == 'T' && s[i - 1] == 'H' && s[i] == 'H') d++;
			else if (s[i - 2] == 'H' && s[i - 1] == 'T' && s[i] == 'T') e++;
			else if (s[i - 2] == 'H' && s[i - 1] == 'T' && s[i] == 'H') f++;
			else if (s[i - 2] == 'H' && s[i - 1] == 'H' && s[i] == 'T') g++;
			else if (s[i - 2] == 'H' && s[i - 1] == 'H' && s[i] == 'H') h++;
		}
		cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << '\n';
	}
	return 0;
}
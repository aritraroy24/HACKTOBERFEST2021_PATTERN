#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

void solve() {

	int n, m; cin >> n >> m;
	int width = (3 * m) + 1;
	for (int i = 1; i <= width; ++i)
		cout << '*';
	cout << '\n';

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= width; ++j) {
			if (j % 3 == 1)
				cout << '*';
			else
				cout << '.';
		}
		cout << '\n';
		for (int j = 1; j <= width; ++j) {
			if (j % 3 == 1)
				cout << '*';
			else
				cout << '.';
		}
		cout << '\n';
		for (int j = 1; j <= width; ++j) {
			cout << '*';
		}
		cout << '\n';
	}

	return;
}

int main() {
	fastIO
	int t = 1;
	// cin >> t;

	while (t--) {
		solve();
	}
	return 0;
}

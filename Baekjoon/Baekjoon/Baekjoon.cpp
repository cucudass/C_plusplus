#include <iostream>
using namespace std;

int main()
{
	int n, m, fn, ln, bn;
	cin >> n >> m;
	int * arr = new int[n];

	for (int i = 0; i < m; i++) {
		cin >> fn >> ln >> bn;
		for (int j = fn; j <= ln; j++) {
			arr[j] = bn;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

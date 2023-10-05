#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n1, n2, num, count = 0;
	bool flag;
	vector<int> v;
	cin >> n1;
	cin >> n2;
	for (int i = n1; i <= n2; i++) {
		if (i != 1 && i != 0) {
			for (int j = 2; j <= i; j++) {
				if (j != i && i % j == 0) {
					flag = false;
					break;
				}
			}
			if (flag) {
				v.push_back(i);
				count += i;
			}
		}
	}
	sort(v.begin(), v.end());

	cout << count << endl;
	cout << v[v.size() - 1] << endl;
	return 0;
}

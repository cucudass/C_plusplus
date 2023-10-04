#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int b;
	char ch[100];
	int n[100];
	int num = 0, cnt = 0, number = 0;
	cin >> ch >> b;

	for (int i = 0; i < strlen(ch); i++) {
		if (ch[i] >= 48 && ch[i] < 58) {
			num += (ch[i] - 48) * pow(b, i);
		}
		if (ch[i] >= 65 && ch[i] <= 90) {
			num += (ch[i] - 55) * pow(b, i);
		}
	}

	cout << num << endl;
	return 0;
}

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string rev(string s) {
	reverse(s.begin(), s.end());
	return s.c_str();
}

int main()
{
	vector<char> v;
	vector<int> cv;
	int cnt = 0, max_num = 0, index = 0;
	char * ch = new char[101];
	int * arr = nullptr;
	cin >> ch;
	for (int i = 0; i < (int)strlen(ch); i++) {
		v.push_back(toupper(ch[i]));
	}
	cout << endl;
	
	v.erase(unique(v.begin(), v.end()));
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << i << v[i];
	}
	cout << endl;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < (int)strlen(ch); j++) {
			if (v[i] == ch[j]) {
				cnt++;
			}
			cv[i] = cnt;
			cnt = 0;
		}
	}

	max_num = *max_element(begin(cv), end(cv));
	if (count(v.begin(), v.end(), max_num) > 1) {
		cout << "?" << endl;
	} else {
		index = max_element(begin(cv), end(cv))-begin(cv);
		cout << v[index];
	}

	return 0;
}
#include <iostream>
using namespace std;
int thezeronumber(int n) {
	int ans = 0;
	while (n >= 5) {
		ans += n / 5;
		n /= 5;
	}
	return ans;
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int num;
		cin >> num;
		cout << thezeronumber(num) << endl;
	}
	return 0;
}
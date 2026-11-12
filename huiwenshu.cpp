#include <iostream>
#include <cmath>
using namespace std;
bool Hws(int i) {
	if (i < 0 || i % 10 == 0 && i != 0)return false;
	int a = 0;
	while (i > a) {
		a = i % 10 + a * 10;
		i = i / 10;
	}
	return i == a || i == a / 10;
}
bool Wqpfs(int i) {
	int sum = 0;
	int temp = i;
	while (temp> 0) {
		int digit = temp % 10;
		sum += digit * digit;
		temp/= 10;
	}
	double root = round(sqrt(sum));
	return root * root == sum;
}
int main() {
	int count = 0;
	for (int i = 1; i < 2027; i++) {
		if(Hws(i) && Wqpfs(i)) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

string addBinary(string a, string b) {
	// Assume a = 101, b = 110 ; Sum = 1011  | 211
	string result;
	int carry = 0;

	int maxlength = max(a.length(), b.length());
	a = string(maxlength - a.length(), '0') + a;
	b = string(maxlength - b.length(), '0') + b;

	for (int i = maxlength - 1; i >= 0; i--) {
		int bit1 = a[i] - '0';
		int bit2 = b[i] - '0';

		int sum = bit1 + bit2 + carry;
		result = to_string(sum % 2) + result;
		carry = sum / 2;

	}
	if (carry)
		result = '1' + result;

	return result;
}

void main() {
	string a = "11";
	string b = "1";
	cout << addBinary(a,b);
}



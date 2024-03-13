#include <iostream>
#include <string>

using namespace std;

//int main() {
//    int array[] = { 23,16,87,1,2,98,80,70 };
//    int size = sizeof(array) / sizeof(array[0]); 
//
//    for (int i = 0; i < size; i++) {
//        for (int j = i + 1; j < size; j++) {
//            if (array[i] > array[j]) { 
//                int temp = array[i];
//                array[i] = array[j];
//                array[j] = temp;
//            }
//        }
//    }
//
//    for (int k = 0; k < size; k++) {
//        cout << array[k] << endl;
//    }
//
//    return 0;
//}

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



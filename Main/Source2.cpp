#include <iostream>



using std::cin;
using std::cout;

int elem(int n, int d);
int multi(int A, int B);

int main() {

	int A, B;
	cin >> A >> B;
	cout << multi(A,B);

	
	

	return 0;
}

int multi(int A, int B) {
	int temp = B;
	if (A > 1)
		return temp += multi(A - 1, B);
	else
		return temp;
}

int elem(int n, int d) {
	int value = 0;
	if (n > 1)
		value = elem(n - 1, d) + d;
	else
		value = d;
	return value;
}
#include <iostream>
#include <string>
#include <fstream>


using std::cin;
using std::cout;

int ma2121in() {

	std::ifstream file("inputt.txt");

	void check(int** A, int* B, int N);
	if (!file.is_open()) {
		cout << "ERROR\n";
	}
	else {
		std::string temp;
		getline(file, temp);
		int N = std::stoi(temp);
		int* B = new int[N];
		int** A = new int* [N];
		for (int i = 0; i < N; ++i) {
			A[i] = new int[N];
		}

		for (int i = 0; i < N; ++i) {
			getline(file, temp);
			temp += ' ';
			int begin = 0,temp1 = 0, j = 0;
			while (temp.find(' ', begin) != -1) {
				temp1 = temp.find(' ', begin);
				A[i][j] = std::stoi(temp.substr(begin, temp1 - begin));
				++j;
				begin = temp1 + 1;
			}
		}
		check(A, B, N);
		for (int i = 0; i < N; ++i) {
			cout << B[i] << ' ';
		}
	}
	file.close();


	return 0;
}
void check(int** A, int* B, int N) {
	for (int i = 0; i < N; ++i) {
		bool flag = true;
		for (int j = 0; j < N; ++j) {
			if (A[j][i] % 2 != 0)
				flag = false;
		}
		flag ? B[i] = 1 :B[i] = 0;
	}
}
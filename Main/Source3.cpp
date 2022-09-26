#include <iostream>
#include <cstring>
#include <fstream>



using std::cin;
using std::cout;

bool compare(char* prefix, char* postfix, char* word);

int mdxgcvain() {

	std::ifstream file("inputt.txt");

	if (!file.is_open()) {
		cout << "ERROR\n";
	}
	else {
		char prefix[10],postfix[10];
		cin >> prefix >> postfix;
		cout << prefix << postfix;

		while (!file.eof()) {
			char word[255];
			file >> word;
			cout << compare(prefix, postfix, word);
		}

		file.close();
	}

	return 0;
}

bool compare(char* prefix, char* postfix,char*word) {
	bool flag = true;
	for (int i = 0; i < strlen(prefix); ++i) {
		if (word[i] != prefix[i])
			flag = false;
	}
	for (int j = 0,i = strlen(word) - strlen(postfix); j < strlen(postfix); ++j,i++) {
		if (word[i] != postfix[j])
			flag = false;
	}
	return flag;
}
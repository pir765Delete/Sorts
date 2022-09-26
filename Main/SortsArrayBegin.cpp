#include <iostream>
#include <Windows.h>
#include "sorts.h"

using std::cout;
using std::cin;


int mai12n() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "¬ведите размер  массива\n";
	int n;
	cin >> n;

	int* a = new int[n];
	cout << "¬ведите массив\n";

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	/*insertSort(a, n);

	for (int i = 0; i < n; ++i)
		cout << a[i] << '\n';*/
	//Ѕинарный поиск
	
	cout << "¬ведите элемент, который нужно найти\n";
	int key;
	cin >> key;

	cout << "Ёлемент находитс€ на " << binarySearch(a, n, key) + 1 << " месте\n";

	delete[]a;
	return 0;
}
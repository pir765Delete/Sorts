#include <iostream>
#include <Windows.h>
#include "sorts.h"

using std::cout;
using std::cin;


int mai12n() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "������� ������  �������\n";
	int n;
	cin >> n;

	int* a = new int[n];
	cout << "������� ������\n";

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	/*insertSort(a, n);

	for (int i = 0; i < n; ++i)
		cout << a[i] << '\n';*/
	//�������� �����
	
	cout << "������� �������, ������� ����� �����\n";
	int key;
	cin >> key;

	cout << "������� ��������� �� " << binarySearch(a, n, key) + 1 << " �����\n";

	delete[]a;
	return 0;
}
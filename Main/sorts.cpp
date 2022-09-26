// �������� �����
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4
// 3 4
int binarySearch(int* a, int n, int key) {
	bool flag = false;
	int left = 0;
	int right = n - 1;
	int mid = (left + right) / 2;
	while (left <= right && !flag) {
		if (a[mid] == key)
			flag = true;
		else if (key < a[mid])
			right = mid - 1;
		else
			left = mid + 1;
		mid = (left + right) / 2;
	}
	return flag ? mid : -1;
}


//���������� �������
//������� ����������� ������� � ������ � ������ � �.�.
void selectSort(int* a, int n) {
	for (int i = 0; i < n - 1; i++) {
		int j0 = i;
		for (int j = i + 1; j < n; j++)
			if (a[j0] > a[j])
				j0 = j;
		int temp = a[i];//
		a[i] = a[j0];  //swap
		a[j0] = temp; //
	}
}

//���������� ���������
//������ ������� �� 2 ����� ��������������� � ��� � ������ �������� �� 2 �����
//��������� � ������ �� ������� ���������������
//void insertSort(int* a, int n) {
//	for (int i = 1; i < n; i++) {
//		// �������� a[i] � ��������������� ����� a[0�i-1]
//		int key = a[i];
//		int j = i - 1;
//		// �������� ������ ��������, �0����� �[i]
//		while (j >= 0 && a[j] > key)
//			a[j + 1] = a[j--];
//		a[j + 1] = key; // ������ a[i] ���������� �� ������������� �����
//
//	}
//}

//���������� ��������� 
// ���� ������� ����� ������ ��� ������ �� ������ �� �������
// ���=������� ���� ���������� ����������� �� ����� ����� 0
void bubbleSort(int* a, int n) {
	bool flag = false;
	for (int i = 1; i < n && flag == false; ++i) {
		flag = true;
		if (a[i - 1] > a[i]) {
			flag = false;
			int temp = a[i - 1];
			a[i - 1] = a[i];
			a[i] = temp;
		}

	}

}
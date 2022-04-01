#include "Header2_2.h"

void MASS_REVERS(int a[], const int size) {
	cout << "��� ��� ������ ������� ������� ����� ����� ���� ��������� �������, �� ��� ��������� ������ �������!" << endl;
	cout << "\n";
	for (int i = 0; i < size / 2; i++) {
		int temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
}

void MINUS_IN_PLUS(int a[], const int size) {
	cout << "��� ��� ������ ������� ������� ������ ����� ���� ��������� �������, �� ���� ����������� ���������� (�� �������� � ��������)!" << endl;
	cout << "\n";
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}

void PLUS_IN_MINUS(int a[], const int size) {
	cout << "��� ��� ������ ������� ������� ������ ����� ���� ��������� �������, �� ���� ����������� ���������� (�� �������� � ��������)!" << endl;
	cout << "\n";
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

}

void (*TEMP_FOO(int f))(int* a, const int size) {
	if (f == 1) {
		return MASS_REVERS;
	}
	if (f == 2) {
		return  MINUS_IN_PLUS;
	}
	if (f == 3) {
		return PLUS_IN_MINUS;
	}
}

void print(int* arr, unsigned size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}



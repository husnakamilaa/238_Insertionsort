// 238_Insertionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[40];
int n;

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array: ";
		cin >> n;
		if (n <= 40)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 40 elemen.\n";

		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan elemen array: " << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ":";
		cin >> arr[i]
	}

}

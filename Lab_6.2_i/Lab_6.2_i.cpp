#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;

void Create(int* t, const int size, const int low, const int high);
void Print(int* t, const int size);
int Sum(int* t, const int size);

void Create(int* t, const int size, const int low, const int high) {
	for (int i = 0; i < size; i++)
		t[i] = low + rand() % (high - low + 1);
}
void Print(int* t, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << t[i];
	cout << endl;
}

int Sum(int* t, const int size) {
	int S = 0;
	for (int i = 0; i < size; i++)
		if (t[i] % 2 == 0)
			S += t[i];
	return S;
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 10;
	int f[n], low = 0, high = 10;

	Create(f, n, low, high);
	cout << "t = ";
	Print(f, n);
	cout << "S = " << Sum(f, n) << endl;


	system("pause");
	cin.get();
	return 0;
}
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <time.h>

using namespace std;

void Create(int* t, const int size, const int low, const int high, int i);
void Print(int* t, const int size, int i);
int Sum(int* t, const int size, int i);

void Create(int* t, const int size, const int low, const int high, int i) {
	t[i] = low + rand() % (high - low + 1);
	if (i < size - 1)
		Create(t, size, low, high, i + 1);
}

void Print(int* t, const int size, int i) {

	cout << setw(4) << t[i];
	if (i < size - 1)
		Print(t, size, i + 1);
	else
		cout << endl;
}

int Sum(int* t, const int size, int i) {
	if (i < size)
		if (t[i] % 2 == 0)
			return t[i] + Sum(t, size, i + 1);
		else
			return Sum(t, size, i + 1);
	else
		return 0;
}

int main() {

	srand((unsigned)time(NULL));
	const int n = 10;
	int f[n], low = 0, high = 10;

	Create(f, n, low, high, 0);
	cout << "t = ";
	Print(f, n, 0);
	cout << "S = " << Sum(f, n, 0) << endl;

	system("pause");
	cin.get();
	return 0;
}
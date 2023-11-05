#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <iomanip>
using namespace std;

void printArray(int* arr, int size);
void generateArray(int* arr, int size, int min, int max);
int findSmallestIndex(const int* arr, int size, int SmallestIndex, int SmallestNum);
int main() {
	const int arrSize = 10;
	int a[arrSize];
	generateArray(a, arrSize, -10, 10);

	cout << "originalArray:        ";
	printArray(a, arrSize);

	int sm = findSmallestIndex(a, 10, -1, INT_MAX);
	cout << "SmallestIndex of Array: " << sm;

}

void generateArray(int* arr, int size, int min, int max) {
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
	}
}

void printArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << array[i] << " ";
	}
	cout << endl;
}

int findSmallestIndex(const int* arr, int size, int SmallestIndex, int SmallestNum) {

	for (int i = 0; i < size; i++) {
		if (!(arr[i] % 2 == 0) && arr[i] < SmallestNum) {
			SmallestIndex = i;
			SmallestNum = arr[i];
		}
	}

	return SmallestIndex;
}

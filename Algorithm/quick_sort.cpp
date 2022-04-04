#include<iostream>

using namespace std;

int numArray[8] = { 15,22,13,27,12,10,20,25 };

void exchange(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void partition(int low, int high, int& pivotpoint) {
	int i, j;
	int pivotItem;

	pivotItem = numArray[low];
	j = low;
	for (i = low + 1; i <= high; i++) {
		if (numArray[i] < pivotItem) {
			j++;
			exchange(numArray[i], numArray[j]);
		}
	}
	
	pivotpoint = j;

	exchange(numArray[low], numArray[pivotpoint]);
}

void quicksort(int low, int high) {
	int pivotpoint;

	if (high > low) {
		partition(low, high, pivotpoint);
		quicksort(low, pivotpoint - 1);
		quicksort(pivotpoint + 1, high);
	}
}

int main() {
	
	quicksort(0, 7);

	for (int i = 0; i < 8; i++)
		cout << numArray[i] << " ";

}
#include <iostream>
#include <random>

void ExchangeSort(int numArray[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (numArray[i] > numArray[j]) {
				numArray[i] = numArray[i] + numArray[j];
				numArray[j] = numArray[i] - numArray[j];
				numArray[i] = numArray[i] - numArray[j];
			}
		}
	}
}

int main() {
	int numArray[10] = {2,6,4,5,7,9,8,1,3,10};

	ExchangeSort(numArray, 10);

	for (int i = 0; i < 10; i++)
		std::cout << numArray[i] << std::endl;
}
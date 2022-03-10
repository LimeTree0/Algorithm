//#include<iostream>
//#define N 100
//
//int bisearch(int n, int numArray[], int key) {
//	int low, high, middle, location, value;
//	low = 0, high = n - 1, location = -1;
//
//	while (low <= high && location == -1) {
//		middle = (low + high) / 2;
//		value = numArray[middle];
//		if (value == key)
//			location = middle;
//		else if (value > key)
//			high = middle - 1;
//		else
//			low = middle + 1;
//	}
//
//	return location;
//}
//
//
//int main() {
//
//	int numArray[N], key;
//	key = 28;
//	for (int i = 1; i < N + 1; i++)
//		numArray[i - 1] = i*2;
//
//	int location = bisearch(N, numArray, key);
//
//	if (location == -1) {
//		printf_s("'%d' does not exist\n", key);
//		return 0;
//	}
//
//	printf_s("location of '%d' in the array : %d", key, location);
//}
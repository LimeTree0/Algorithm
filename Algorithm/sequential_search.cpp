//#include<iostream>
//#define N 100
//
//int seqsearch(int n, int numArray[], int key) {
//	int location = 0;
//	while (location < n && key != numArray[location])
//		location++;
//
//	if (location == n)
//		return -1;
//
//	return location;
//}
//
//
//int main() {
//	
//	int numArray[N], key;
//	key = 50;
//	for (int i = 1; i < N+1; i++)
//		numArray[i - 1] = i;
//
//	int location = seqsearch(N, numArray, key);
//
//	if (location == -1) {
//		printf_s("'%d' does not exist\n", key);
//		return 0;
//	}
//
//	printf_s("location of '%d' in the array : %d", key, location);
//}
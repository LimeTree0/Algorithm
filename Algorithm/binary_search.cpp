#include<iostream>
#define N 10	// 배열의 크기

int x = 5;
int S[N] = { 1,2,3,4,5,6,7,8,9,10 };

// 이분 탐색 함수(반복문 활용)
/*
int bisearch(int n, int numArray[], int key) {
	int low, high, middle, location, value;
	low = 0, high = n - 1, location = -1;

	while (low <= high && location == -1) {
		middle = (low + high) / 2;
		value = numArray[middle];
		if (value == key)
			location = middle;
		else if (value > key)
			high = middle - 1;
		else
			low = middle + 1;
	}

	return location;
}
*/

// 재귀 함수를 이용한 이분탐색
int location(int low, int high)
{
	int mid;

	if (low > high) return -1;	// 배열에 존재하지 않는 경우
	else {
		mid = (low + high) / 2;
		if (x == S[mid]) return mid;
		else if (x < S[mid]) location(low, mid - 1);
		else return location(mid + 1, high);
	}
}

// 반복문을 이용한 이분탐색
int location2(int low, int high)
{
	int mid;

	while (low <= high) {	// 배열에 존재하지 않으면 종료
		mid = (high + low) / 2;
		if (S[mid] == x) return mid;
		else if (x < S[mid]) high = mid - 1;
		else low = mid + 1;
	}

	return -1;
}


int main() {

	int key = location(0, N - 1);
	printf("재귀 함수 이분검색 : %d\n", key);
	key = location2(0, N - 1);
	printf("반복문 이분 검색 : %d\n", key);
}
#include<iostream>

int seqsearch(int size, int numArray[], int key) {	//size: 배열의 크기 numArray: 배열 key: 검색하고 싶은 요소

	int location = 0;	// location 0으로 초기화

	// 배열에서 키를 찾거나 배열 끝에 도달하면 반복문 종료
	while (location < size && key != numArray[location])
		location++;

	// 배열의 끝에 도달한 경우 -1 반환
	if (location == size)
		return -1;

	// 아닌 경우(키를 찾음) location 반환
	return location;
}


int main() {
	
	int  key;
	int numArray[] = {1,9,4,2,3,4,7,8};
	int sizeOfNumArray = sizeof(numArray) / 4;
	key = 4;

	int location = seqsearch(sizeOfNumArray, numArray, key);

	if (location == -1) {
		printf_s("'%d' does not exist\n", key);
		return 0;
	}

	printf_s("key : %d location : %d", key, location);
}
#include<iostream>

int seqsearch(int size, int numArray[], int key) {	//size: �迭�� ũ�� numArray: �迭 key: �˻��ϰ� ���� ���

	int location = 0;	// location 0���� �ʱ�ȭ

	// �迭���� Ű�� ã�ų� �迭 ���� �����ϸ� �ݺ��� ����
	while (location < size && key != numArray[location])
		location++;

	// �迭�� ���� ������ ��� -1 ��ȯ
	if (location == size)
		return -1;

	// �ƴ� ���(Ű�� ã��) location ��ȯ
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
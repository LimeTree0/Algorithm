#include<iostream>
#define N 10	// �迭�� ũ��

int x = 5;
int S[N] = { 1,2,3,4,5,6,7,8,9,10 };

// �̺� Ž�� �Լ�(�ݺ��� Ȱ��)
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

// ��� �Լ��� �̿��� �̺�Ž��
int location(int low, int high)
{
	int mid;

	if (low > high) return -1;	// �迭�� �������� �ʴ� ���
	else {
		mid = (low + high) / 2;
		if (x == S[mid]) return mid;
		else if (x < S[mid]) location(low, mid - 1);
		else return location(mid + 1, high);
	}
}

// �ݺ����� �̿��� �̺�Ž��
int location2(int low, int high)
{
	int mid;

	while (low <= high) {	// �迭�� �������� ������ ����
		mid = (high + low) / 2;
		if (S[mid] == x) return mid;
		else if (x < S[mid]) high = mid - 1;
		else low = mid + 1;
	}

	return -1;
}


int main() {

	int key = location(0, N - 1);
	printf("��� �Լ� �̺а˻� : %d\n", key);
	key = location2(0, N - 1);
	printf("�ݺ��� �̺� �˻� : %d\n", key);
}
//#include<iostream>
//
//using namespace std;
//
//// �Ժ��Լ�
//void Merge(int S[], int start, int mid, int end) {
//	int i = start, j = mid+1, k = 0;
//	int* sortedArray = new int[end - start + 1];
//
//	// ũ����� �ӽ� �迭�� ������������ ����
//	while (i <= mid && j <= end) {
//		if (S[i] < S[j]) sortedArray[k++] = S[i++];
//		else sortedArray[k++] = S[j++];
//	}
//
//	// ������ �迭�� �ӽ� �迭�� ����
//	if (i > mid)while (j <= end)sortedArray[k++] = S[j++];
//	else while (i <= mid)sortedArray[k++] = S[i++];
//
//	// ���� �迭�� ���ĵ� �迭�� ����
//	for (i = start, k = 0; i <= end; i++, k++) S[i] = sortedArray[k];
//		
//}
//
////�պ����� �Լ�
//void MergeSort(int S[],int start, int end ) {
//
//	if (start < end) {
//		int mid = (start + end) / 2;
//		MergeSort(S, start, mid);
//		MergeSort(S, mid + 1, end);
//		Merge(S, start, mid, end);
//	}
//	
//}
//
//int main() {
//
//	int S[] = { 27,10,12,20,25,13,15,22 };
//	MergeSort(S, 0, 7);
//	for (int x : S)
//		cout << x << " ";
//
//}
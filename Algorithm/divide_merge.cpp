//#include<iostream>
//
//using namespace std;
//
//// 함병함수
//void Merge(int S[], int start, int mid, int end) {
//	int i = start, j = mid+1, k = 0;
//	int* sortedArray = new int[end - start + 1];
//
//	// 크기비교후 임시 배열에 오름차순으로 저장
//	while (i <= mid && j <= end) {
//		if (S[i] < S[j]) sortedArray[k++] = S[i++];
//		else sortedArray[k++] = S[j++];
//	}
//
//	// 나머지 배열을 임시 배열에 저장
//	if (i > mid)while (j <= end)sortedArray[k++] = S[j++];
//	else while (i <= mid)sortedArray[k++] = S[i++];
//
//	// 원래 배열에 정렬된 배열을 저장
//	for (i = start, k = 0; i <= end; i++, k++) S[i] = sortedArray[k];
//		
//}
//
////합병정렬 함수
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
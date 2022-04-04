//#include<iostream>
//#define N 13
//
//using namespace std;
//
//// 숫자 배열
//int numArray[] = { 10,12,13,14,18,20,25,27,30,35,40,45,47 };
////검색 키값
//int x;
//
////검색 함수
//int location(int low, int high) {
//	int mid;
//
//	//검색 실패시 -1 반환
//	if (low > high)
//		return -1;
//	else {
//		mid = (low + high) / 2;
//		if (x == numArray[mid])
//			return mid;
//		else if (x < numArray[mid])
//			return location(low, mid - 1);
//		else
//			return location(mid + 1, high);
//	}
//}
//
//int main() {
//	x = 3;
//	cout << location(0, N - 1) << endl;
//
//	x = 25;
//	cout << location(0, N - 1) << endl;
//}
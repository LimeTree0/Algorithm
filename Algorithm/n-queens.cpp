//#include<iostream>
//#define n 4 // 보드의 크기
//using namespace std;
//
//int col[n + 1];
//int coUnt = 1;
//bool promising(int i) {
//	int k = 1;
//	bool sWitch = true;
//
//	while (k < i && sWitch) {
//		if (col[i] == col[k] || abs(col[i] - col[k]) == i - k) sWitch = false;
//		k++;
//	}
//	return sWitch;
//}
//
//void queens(int i) {
//	if (promising(i)) {
//		if (i == n) {
//			cout << "----------Solution " << coUnt++ << "----------" << endl;
//			for (int k = 1; k <= n; k++) cout << k << " " << col[k] << endl;
//		}
//		else {
//			for (int j = 1; j <= n; j++) {
//				col[i + 1] = j;
//				queens(i + 1);
//			}
//		}
//	}
//}
//
//int main() {
//	queens(0); // 0으로 호출
//}
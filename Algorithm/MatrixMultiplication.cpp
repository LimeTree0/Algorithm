//#include<iostream>
//using namespace std;
//
//void MatrixMult(int n, int *a, int *b, int* c) {
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++) {
//			*(c + i * n + j) = 0;
//			for (int k = 0; k < n; k++)
//				// Çà·Ä °ö ¿¬»ê
//				*(c + i * n + j) = *(c + i * n + j) + *(a + i * n + k) * *(b + k * n + j);
//		}
//
//			
//}
//
//void MatrixPrint(int n, int *a) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++)
//			cout << *(a + i * n + j) << " ";
//
//		cout << endl;
//	}
//		
//}
//
//int main() {
//	int Array1[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,1,2,3}, {4,5,6,7} };
//	int Array2[4][4] = { {8,9,1,2}, {3,4,5,6}, {7,8,9,1}, {2,3,4,5} };
//	int Array3[4][4];
//	MatrixMult(4, (int*)Array1, (int*)Array2, (int*)Array3);
//	MatrixPrint(4, (int*)Array3);
//}
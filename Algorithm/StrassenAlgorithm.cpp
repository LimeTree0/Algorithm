//#include <iostream>
//#define MAX_SIZE 4
//
//class Matrix {
//private:
//	int matrix1[MAX_SIZE][MAX_SIZE] = { {1,2,3,4}, {5,6,7,8}, {9,1,2,3}, {4,5,6,7} };
//	int matrix2[MAX_SIZE][MAX_SIZE] = { {8,9,1,2}, {3,4,5,6}, {7,8,9,1}, {2,3,4,5} };
//	int resultMatrix[MAX_SIZE][MAX_SIZE];
//	int n = MAX_SIZE;
//	void strassen(int n, int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE]);
//
//public:
//	void print();
//	void strassen_start();
//};
//
//void Matrix::strassen_start() {
//	int i, j;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++)
//			resultMatrix[i][j] = 0; // 결과 메트릭스를 0으로 초기화 한다.
//
//	strassen(n, matrix1, matrix2, resultMatrix);
//}
//
//// strassen algorithm
//void Matrix::strassen(int n, int A[][MAX_SIZE], int B[][MAX_SIZE], int C[][MAX_SIZE]) {
//	int m1[MAX_SIZE][MAX_SIZE], m2[MAX_SIZE][MAX_SIZE], m3[MAX_SIZE][MAX_SIZE],
//		m4[MAX_SIZE][MAX_SIZE], m5[MAX_SIZE][MAX_SIZE], m6[MAX_SIZE][MAX_SIZE],
//		m7[MAX_SIZE][MAX_SIZE], tempMatrix1[MAX_SIZE][MAX_SIZE], tempMatrix2[MAX_SIZE][MAX_SIZE];
//
//	// threshold <= 2인 경우, 기본 행렬 곱셉 알고리즘으로 실행
//	if (n <= 2) {
//		C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
//		C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
//		C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
//		C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
//	}
//
//	// threshold > 2인 경우, strassen 알고리즘으로 실행
//	else {
//		// m1 matrix
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				tempMatrix1[i][j] = A[i][j] + A[i + n / 2][j + n / 2];
//				tempMatrix2[i][j] = B[i][j] + B[i + n / 2][j + n / 2];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m1);
//
//		// m2 matrix
//		for (int i = 0; i < n/2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				tempMatrix1[i][j] = A[i + n / 2][j] + A[i + n / 2][j + n / 2];
//				tempMatrix2[i][j] = B[i][j];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m2);
//
//		//m3 matrix
//		for (int i = 0; i < n/2; i++)
//			for (int j = 0; j < n/2; j++) {
//				tempMatrix1[i][j] = A[i][j];
//				tempMatrix2[i][j] = B[i][j + n / 2] - B[i + n / 2][j + n / 2];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m3);
//
//		//m4 matrix
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n/2; j++) {
//				tempMatrix1[i][j] = A[i + n / 2][j + n / 2];
//				tempMatrix2[i][j] = B[i + n / 2][j] - B[i][j];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m4);
//
//		//m5 matrix
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				tempMatrix1[i][j] = A[i][j] + A[i][j + n / 2];
//				tempMatrix2[i][j] = B[i + n / 2][j + n / 2];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m5);
//
//		//m6 matrix
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				tempMatrix1[i][j] = A[i + n / 2][j] - A[i][j];
//				tempMatrix2[i][j] = B[i][j] + B[i][j + n / 2];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m6);
//
//		//m7 matrix
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				tempMatrix1[i][j] = A[i][j + n / 2] - A[i + n / 2][j + n / 2];
//				tempMatrix2[i][j] = B[i + n / 2][j] + B[i + n / 2][j + n / 2];
//			}
//		strassen(n / 2, tempMatrix1, tempMatrix2, m7);
//
//		// merge matrix C11, C12, C21, C22 
//		for (int i = 0; i < n / 2; i++)
//			for (int j = 0; j < n / 2; j++) {
//				C[i][j] = m1[i][j] + m4[i][j] - m5[i][j] + m7[i][j];
//				C[i][j+n/2] = m3[i][j]+ m5[i][j];
//				C[i + n / 2][j] = m2[i][j] + m4[i][j];
//				C[i + n / 2][j + n / 2] = m1[i][j] + m3[i][j] - m2[i][j] + m6[i][j];
//			}
//	}
//}
//
//// 합병된 행렬 출력
//void Matrix::print() {
//	for (int i = 0; i < MAX_SIZE; i++) {
//		for (int j = 0; j < MAX_SIZE; j++)
//			std::cout << resultMatrix[i][j] << " ";
//		std::cout << std::endl;
//	}
//}
//
//int main() {
//	Matrix matrix;
//
//	matrix.strassen_start();
//	matrix.print();
//}
//#include<iostream>
//#define size 6
//using namespace std;
//
//int M[size + 1][size + 1];
//int d[] = { 5,2,3,4,6,7,8 };
//int p[size + 1][size + 1] = {1,};
//
//int min(int x, int y) {
//	return x < y ? x : y;
//}
//
//int minmult() {
//	for (int i = 1; i <= size; i++)
//		M[i][i] = 0;
//	for (int diagonal = 1; diagonal <= size - 1; diagonal++)
//		for (int i = 1; i <= size - diagonal; i++) {
//			int j = i + diagonal;
//			M[i][j] = 9999999;
//			for (int k = i; k <= j - 1; k++) {
//				int temp = M[i][j];
//				M[i][j] = min(M[i][j], M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]);
//				if (M[i][j] != temp) p[i][j] = k;
//			}
//
//				
//		}
//	return M[1][size];
//}
//
//void order(int i, int j) {
//	if (i == j)
//		cout << "A" << i;
//	else {
//		int k = p[i][j];
//		cout << "(";
//		order(i, k);
//		order(k + 1, j);
//		cout << ")";
//	}
//}
//
//int main() {
//	cout << "ÃÖÀûÀÇ °ö¼À È½¼ö : " << minmult() << endl;
//	cout << "ÃÖÁ¾ ´ä : "; order(1, 6);
//}
//#include<iostream>
//#include<iomanip>
//#define MAX_SIZE 5
//using namespace std;
//
//
//int W[6][6] = {
//	// ���ڸ� ���߱� ���� 5x5 �迭�� 6x6�迭�� ����� �ش�.
//	// W[0][n]�� �迭�� W[n][0] �迭�� �� �迭�̴�.
//	{100,100,100,100,100,100},
//	{100,0,1,100,1,5},
//	{100,9,0,3,2,100},
//	{100,100,100,0,4,100},
//	{100,100,100,2,0,3},
//	{100,3,100,100,100,0} };
//int D[6][6] = { 0, };
//int P[6][6] = { 0, };
//
//void floyd() {
//	for (int i = 1; i <= MAX_SIZE; i++)
//		for (int j = 1; j <= MAX_SIZE; j++)
//			D[i][j] = W[i][j];
//
//	for (int k = 1; k <= MAX_SIZE; k++)
//		for (int i = 1; i <= MAX_SIZE; i++)
//			for (int j = 1; j <= MAX_SIZE; j++) {
//				if (D[i][j] > D[i][k] + D[k][j]) {
//					P[i][j] = k;
//					D[i][j] = D[i][k] + D[k][j];
//				}
//			}
//}
//
//void print() {
//	cout <<"       D�迭" << "           "  << "       P�迭"<<endl;
//	for (int i = 1; i <= MAX_SIZE; i++) {
//		// D�迭 ���
//		for (int j = 1; j <= MAX_SIZE; j++)
//			cout << setw(3) << right << D[i][j];
//
//		cout << "         ";
//
//		// P�迭 ���
//		for (int j = 1; j <= MAX_SIZE; j++)
//			cout << setw(3) << right << P[i][j];
//		cout << endl;
//	}
//}
//
//void path(int q, int r) {
//	if (P[q][r]) {
//		path(q, P[q][r]);
//		cout << "v" << P[q][r]<< " ";
//		path(P[q][r], r);
//	}
//
//}
//
//int main() {
//	floyd();
//	print();
//	cout << endl;
//	cout << "v5 -> v3�� ���� �߰� ��� : "; path(5, 3);
//}
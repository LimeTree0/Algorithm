//#include<iostream>
//
//// ����� ���� ���
//int bin(int n, int k) {
//	if (k == 0 || n == k)
//		return 1;
//	else
//		return bin(n - 1, k - 1) + bin(n - 1, k);
//}
//
//// ������ȹ ���� ���
//int bin2(int n, int k) {
//	//�迭 ���� ������ ���� ����
//	int arrayn = n + 1;
//	int arrayk = k + 1;
//	// 2���� �迭 ���� �Ҵ�
//	int** arr = new int* [arrayn];
//	for (int i = 0; i < n + 1; i++)
//		arr[i] = new int[arrayk];
//
//	for (int i = 0; i <= n; i++) {
//		int min = (i < k) ? i : k;
//
//		for (int j = 0; j <= min; j++) {
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//		
//		
//
//	return arr[n][k];
//}
//
//int main() {
//	int a = bin(6, 3);
//	int b = bin2(6, 3);
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//}
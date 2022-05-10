//#include<iostream>
//#define N 3
//#define W 30
//
//using namespace std;
//
//int itemValue[N+1] = { 0,50,60,140 };
//int itemWeight[N+1] = { 0,5,10,20 };
//
//int P[N+1][W+1] = {0,};
//
//int knapsack() {
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= W; j++) {
//			if (itemWeight[i] > j)P[i][j] = P[i - 1][j];
//			else P[i][j] = max(P[i - 1][j], P[i - 1][j - itemWeight[i]] + itemValue[i]);
//		}
//	}
//
//	return P[N][W];
//}
//
//int main() {
//	
//	int a = knapsack();
//	cout << a << endl;
//
//}
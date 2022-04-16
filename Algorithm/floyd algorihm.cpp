#include<iostream>
#include<iomanip>
#define MAX_SIZE 5
using namespace std;

int W[6][6] = {
	// 숫자를 맞추기 위해 5x5 배열을 6x6배열로 만들어 준다.
	// W[0][n]번 배열과 W[n][0] 배열은 빈 배열이다.
	// 무한대는 적당한 수인 100으로 표현했다.
	{100,100,100,100,100,100},
	{100,0,1,100,1,5},
	{100,9,0,3,2,100},
	{100,100,100,0,4,100},
	{100,100,100,2,0,3},
	{100,3,100,100,100,0} };
int D[6][6] = { 0, };

void floyd() {
	for (int i = 1; i <= MAX_SIZE; i++)
		for (int j = 1; j <= MAX_SIZE; j++)
			D[i][j] = W[i][j];

	for (int k = 1; k <= MAX_SIZE; k++)
		for (int i = 1; i <= MAX_SIZE; i++)
			for (int j = 1; j <= MAX_SIZE; j++) {
				if (D[i][j] > D[i][k] + D[k][j])
					D[i][j] = D[i][k] + D[k][j];
			}
}

void print() {
	for (int i = 1; i <= MAX_SIZE; i++) {
		for (int j = 1; j <= MAX_SIZE; j++)
			cout << setw(3) << right << D[i][j];
		cout << endl;
	}
}

int main() {
	floyd();
	print();
}
#include<iostream>
#include<vector>
#define N 10
using namespace std;

vector <pair<int, int>> F;

int W[N + 1][N + 1] = {
	{100, 100,100,100,100,100, 100, 100, 100, 100, 100}, // [1]행부터 시작하기 위해 [0]행은 100으로 설정
	{100, 0,	32,	100,	17,	100,	100,	100,	100,	100,	100} ,  // [0]열을 지워서 [1]열 부터 시작하기 위해 100으로 설정
	{100, 32,	0,	100,	100,	45,	100,	100,	100,	100,	100},
	{100, 100,	100,	0,	18,	100,	100,	5,	100,	100,	100},
	{100, 17,	100,	18,	0,	10,	100,	100,	3,	100,	100},
	{100, 100,	45,	100,	10,	0,	28,	100,	100,	25,	100},
	{100, 100,	100,	100,	100,	28,	0,	100,	100,	100,	6},
	{100, 100,	100,	5,	100,	100,	100,	0,	59,	100,	100},
	{100, 100,	100,	100,	3,	100,	100,	59,	0,	4,	100},
	{100, 100,	100,	100,	100,	25,	100,	100,	4,	0,	12},
	{100, 100,	100,	100,	100,	100,	6,	100,	100,	12,	0},
};

void prim() {
	int nearest[N + 1];
	int distance[N + 1];
	int vnear;

	for (int i = 2; i <= N; i++) {
		nearest[i] = 1;
		distance[i] = W[1][i];
	}

	for (int i = 1; i < N; i++) {
		int min = 100;
		for (int i = 2; i <= N; i++) {
			if (0 <= distance[i] && distance[i] < min) {
				min = distance[i];
				vnear = i;
			}
		}

		F.push_back(make_pair(nearest[vnear], vnear));
		distance[vnear] = -1;

		for (int i = 2; i <= N; i++) {
			if (W[i][vnear] < distance[i]) {
				distance[i] = W[i][vnear];
				nearest[i] = vnear;
			}
		}
			
	}
}

int main() {
	prim();

	for (int i = 0; i < N-1; i++)
		cout << "v" << F[i].first << "<->" <<"v" << F[i].second << endl;
}
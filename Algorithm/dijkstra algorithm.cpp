#include<iostream>
#include<vector>
#define N 5
using namespace std;

vector <pair<int, int>> F;

int W[N + 1][N + 1] = {
	{100,100,100,100,100,100},
	{100,0,7,4,6,1},
	{100,100,0,100,100,100},
	{100,100,100,0,5,100},
	{100,100,3,100,0,100},
	{100,100,100,100,1,0},
};

void dijkstra() {
	int touch[N + 1];
	int length[N + 1];
	int vnear;

	for (int i = 2; i <= N; i++) {
		touch[i] = 1;
		length[i] = W[1][i];
	}

	for (int i = 1; i < N; i++) {
		int min = 100;
		for (int i = 2; i <= N; i++) {
			if (0 <= length[i] && length[i] < min) {
				min = length[i];
				vnear = i;
			}
		}

		F.push_back(make_pair(touch[vnear], vnear));
		

		for (int i = 2; i <= N; i++) {
			if (length[vnear] + W[vnear][i] < length[i]) {
				length[i] = length[vnear] + W[vnear][i];
				touch[i] = vnear;
			}
		}
		length[vnear] = -1;

	}
}

int main() {
	dijkstra();

	for (int i = 0; i < N - 1; i++)
		cout << "v" << F[i].first << "<->" << "v" << F[i].second << endl;
}
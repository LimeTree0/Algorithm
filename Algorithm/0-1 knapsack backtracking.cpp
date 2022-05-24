#include<iostream>
using namespace std;
#define n 4
#define W 16

int numbest = 0, maxProfit = 0;
bool bestset[n + 1] = { false, };
bool include[n + 1] = { false, };

int p[] = { 0, 40,30,50,10 };
int w[] = { 0, 2,5,10,5 };


bool promising(int i, int weight, int profit) {
	float bound;
	int totweight;
	if (weight >= W) return false;
	else {
		int j = i + 1;
		bound = profit;
		totweight = weight;

		while (j <= n && totweight + w[j] <= W) {
			totweight = totweight + w[j];
			bound = bound + p[j];
			j++;
		}

		int k = j;
		if (k <= n) bound = bound + (W - totweight) * p[k] / w[k];
		return bound > maxProfit;
	}
}

void knapsack(int i, int profit, int weight) {
	
	if (weight <= W && profit > maxProfit) {
		maxProfit = profit;
		numbest = i;
		for (int i = 1; i <= n; i++) bestset[i] = include[i];
		
	}

	if (promising(i, weight, profit)) {
		include[i + 1] = true;
		knapsack(i + 1, profit + p[i + 1], weight + w[i + 1]);
		include[i + 1] = false;
		knapsack(i + 1, profit, weight);
	}

}

int main() {
	knapsack(0, 0, 0);
	cout << "max profit : " << maxProfit << endl;
	for (int i = 1; i <= numbest; i++)
		if (bestset[i]) cout << "item " << i << " ";
}
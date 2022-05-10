//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define N 5
//using namespace std;
//
//class Edge {
//public:
//	int vertex1, vertex2;
//	int weight;
//	Edge(int vertex1, int vertex2, int weight) {
//		this->vertex1 = vertex1;
//		this->vertex2 = vertex2;
//		this->weight = weight;
//	}
//};
//
//bool compare(Edge v1, Edge v2) {
//	return v1.weight < v2.weight;
//}
//
//vector<Edge> graph;
//vector<Edge> MST;
//
//int set[N + 1];
//
//int getParentNode(int n) {
//	if (set[n] == n) return n;
//	return getParentNode(set[n]);
//}
//
//bool cycleCheck(int vertex1, int vertex2) {
//	if (getParentNode(vertex1) == getParentNode(vertex2)) return true;
//	return false;
//}
//
//void unionVertex(int vertex1, int vertex2) {
//	if (vertex1 < vertex2) set[vertex2] = vertex1;
//	else set[vertex1] = vertex2;
//}
//
//void kruskal() {
//
//	sort(graph.begin(), graph.end(), compare);
//
//	for (int i = 1; i <= N; i++) set[i] = i;
//
//	for (int i = 0; MST.size()< N - 1; i++) {
//		int vertex1 = graph[i].vertex1;
//		int vertex2 = graph[i].vertex2;
//		int weight = graph[i].weight;
//
//		if (!cycleCheck(vertex1, vertex2)) {
//			unionVertex(vertex1, vertex2);
//			MST.push_back(Edge(vertex1, vertex2, weight));
//		}
//	}
//}
//
//int main() {
//	graph.push_back(Edge(1, 2, 1));
//	graph.push_back(Edge(1, 3, 3));
//	graph.push_back(Edge(2, 3, 3));
//	graph.push_back(Edge(2, 4, 6));
//	graph.push_back(Edge(3, 4, 4));
//	graph.push_back(Edge(3, 5, 2));
//	graph.push_back(Edge(4, 5, 5));
//
//	kruskal();
//
//	for (int i = 0; i < MST.size(); i++) {
//		cout << MST[i].vertex1 << "<->" << MST[i].vertex2 << "  weight : " << MST[i].weight << endl;
//	}
//}
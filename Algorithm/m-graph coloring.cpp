//#include<iostream>
//#define m 3
//#define n 4
//using namespace std;
//
//bool W[n+1][n + 1] = {
//	{false,false,false,false,false},
//	{false,true,true,true,true},
//	{false,true,false,true,false},
//	{false,true,true,false,true},
//	{false,true,false,true,false},
//};
//int vcolor[m+1];
//int coUnt = 1;
//
//bool promising(int i) {
//	int j = 1;
//	bool sWitch = true;
//
//	while (j < i && sWitch) {
//		if (W[i][j] && vcolor[i] == vcolor[j])
//			sWitch = false;
//		j++;
//	}
//	return sWitch;
//}
//
//void m_coloring(int i) {
//	if (promising(i)) {
//		if (i == n) {
//			cout << "----------Solution " << coUnt++ << "----------" << endl;
//			for (int k = 1; k <= n; k++) cout << k << "번 노드 :" << " 색" << vcolor[k] << endl;
//		}
//		else
//			for (int color = 1; color <= m; color++) {
//				vcolor[i + 1] = color;
//				m_coloring(i + 1);
//			}
//					
//	}
//}
//
//int main() {
//	m_coloring(0);
//}
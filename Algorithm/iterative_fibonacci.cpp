//#include<iostream>
//
//int recursivefib(int n) {
//
//	int fib1 = 1, fib2 = 1, fib3 = 1;
//
//	if (n < 2)
//		return 1;
//
//	for (int i = 2; i < n; i++) {
//		fib3 = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib3;
//	}
//
//	return fib3;
//}
//
//int main() {
//
//	int n;
//
//	for (int i = 0; i < 10; i++) {
//		n = recursivefib(i + 1);
//		printf_s("%d\n", n);
//	}
//}
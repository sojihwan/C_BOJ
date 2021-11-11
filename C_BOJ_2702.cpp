#include<stdio.h>

int uclid(int a, int b) {
	if (b == 0) return a;
	else return uclid(b,a%b);
}

int main() {
	int T,a,b,G;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		G = uclid(a, b);
		printf("%d %d\n", (a * b) / G, G);
	}
}

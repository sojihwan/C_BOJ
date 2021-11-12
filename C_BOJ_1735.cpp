#include <stdio.h>

int gcd(int a, int b) {
	if (a % b == 0)return b;
	return gcd(b, a % b);
}

int main(void) {
	int a, b, c, d;
	int e, f;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);

	e = a * d + c * b;
	f = d * b;
	int div = gcd(e, f);
	e /= div;
	f /= div;
	printf("%d %d", e, f);
}

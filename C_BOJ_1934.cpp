#include<stdio.h>

int GCD(int a, int b){
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

int LCM(int a, int b){
	return a * b / GCD(a, b);
}

int main(void){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0; i<=n-1; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(int i=0; i<=n-1; i++){
		printf("%d\n",LCM(a[i],b[i]));
	}
}

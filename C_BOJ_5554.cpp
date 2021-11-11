#include<stdio.h>

int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int num=a+b+c+d;
	int m;
	m= num/60;
	int s;
	s= num%60;
	printf("%d\n%d",m,s);
}

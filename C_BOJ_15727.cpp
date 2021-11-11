#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int t;
	t=a/5;
	if(a%5!=0){
		t++;
	}
	printf("%d",t);
}

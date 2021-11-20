#include<stdio.h>

int main(){
	int a,b;
	int c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int i;
	int j;
	i=a+d;
	j=b+c;
	if(i>j){
		printf("%d",j);
	}
	else{
		printf("%d",i);
	}
}

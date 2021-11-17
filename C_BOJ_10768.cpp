#include<stdio.h>

int main(){
	int m,d;
	scanf("%d %d",&m,&d);
	if(m==2){
		if(d<18){
			printf("Before");
		}
		if(d==18){
			printf("Special");
		}
		if(d>18){
			printf("After");
		}
		
	}
	if(m<2){
		printf("Before");
	}
	if(m>2){
		printf("After");
	}
}

#include<stdio.h>

int main(){
	int a;
	int car[4];
	scanf("%d",&a);
	for(int i=0; i<=4; i++){
		scanf("%d",&car[i]);
	}
	int count=0;
	for(int i=0; i<=4; i++){
		if(car[i]==a){
			count++;
		}
	}
	printf("%d",count);
}

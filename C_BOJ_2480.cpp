#include<stdio.h>
int main(){
	int a1;
	int a2;
	int a3;
	scanf("%d %d %d",&a1,&a2,&a3);
	
	if(a1==a2&&a1==a3){
		printf("%d",10000+(a2*1000));
	}
	else if(a1==a2){
		printf("%d",1000+(a1*100));
	}
	else if(a1==a3){
		printf("%d",1000+(a1*100));
	}
	else if(a3==a2){
		printf("%d",1000+(a2*100));
	}
	else{
		if(a1>a2){
			if(a1>a3){
				printf("%d",a1*100);
			}
			else{
				printf("%d",a3*100);
			}
		}
		else if(a2>a3){
			printf("%d",a2*100);
		}
		else{
			printf("%d",a3*100);
		}
	}
}

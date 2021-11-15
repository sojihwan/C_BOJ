#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==60&&b==a&&c==b){
		printf("Equilateral");
	}
	else if(a+b+c==180&&a==c||c==b||b==c){
		printf("Isosceles");
	}
	else if(a+b+c==180){
		printf("Scalene");
	}
	else{
		printf("Error");
	}
}

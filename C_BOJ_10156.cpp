#include<stdio.h>//∫Í∑–¡Ó4 

int main(){
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	
	d=a*b;
	d=d-c;
	if (d<=0){
		printf("0");
	}
	else{
		printf("%d",d);
	}
}

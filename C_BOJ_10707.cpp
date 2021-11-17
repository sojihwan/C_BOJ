#include<stdio.h>
//ºê·ÐÁî 4 
int main(){
	int a,b,c,d,p;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&p);
	int x;
	x=a*p;
	int y;
	y=b;
	if(p>c){
		y=y+((p-c)*d);
	}
	if(x>=y){
		printf("%d",y);
	}
	else if(x<y){
		printf("%d",x);
	}
}

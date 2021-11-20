#include<stdio.h>

int main(){

	int s1,s2,s3,s4;
	int t1,t2,t3,t4;
	scanf("%d",&s1);
	scanf("%d",&s2);
	scanf("%d",&s3);
	scanf("%d",&s4);
	scanf("%d",&t1);
	scanf("%d",&t2);
	scanf("%d",&t3);
	scanf("%d",&t4);
	int s,t;
	s=s1+s2+s3+s4;
	t=t1+t2+t3+t4;
	if(s<t){
		printf("%d",t);
	}
	if(t<s){
		printf("%d",s);
	}
	if(s==t){
		printf("%d",s);
	}
}

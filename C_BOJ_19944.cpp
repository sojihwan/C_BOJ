#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	if(m==1||m==2){
		printf("NEWBIE!");
		return 0;
	}
	else if(m<=n){
		printf("OLDBIE!");
		return 0;
	}
	else{
		printf("TLE1");
	}
}

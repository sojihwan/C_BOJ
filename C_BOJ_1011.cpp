#include<stdio.h>
#include<math.h>

int main(){
	int t,i;
	long long a,x,y;
	
	scanf("%d",&t);
	for( i=0; i<t; i++){
		scanf("%lld %lld",&x,&y);
		a=(int)sqrt(y-x);
		if((y-x)==a*a){
			printf("%lld\n",2*a-1);
		}
		else if(a*a<(y-x) &&(y-x)<=a*a+a){
			printf("%lld\n",2*a);
		}
		else if(a*a<(y-x) &&(y-x)<(a+1)*(a+1)){
			printf("%lld\n",2*a+1);
		}
	}
}

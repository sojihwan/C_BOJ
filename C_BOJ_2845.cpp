#include<stdio.h>

int main(){
	long long i1,i2;
	long long k1,k2,k3,k4,k5;
	scanf("%lld %lld %lld %lld %lld %lld %lld",&i1,&i2,&k1,&k2,&k3,&k4,&k5);
	int num;
	num=i1*i2;
	printf("%lld %lld %lld %lld %lld",k1-num,k2-num,k3-num,k4-num,k5-num); 
}

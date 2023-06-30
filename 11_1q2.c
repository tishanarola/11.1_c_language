#include<stdio.h>
void main(){
	int a,b,*p,*q,r;
	p=&a; q=&b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	printf("before swapping:%d%d\n",a,b);
	r=*p;
	*p=*q;
	*q=r;
	printf("after swapping: %d%d",*p,*q);
}

#include<stdio.h>
void main(){
	int a[6]={3,4,5,6,7,8};
	int i;
	int *p;
	p=&a;
	
	for(i=0;i<6;i++){
		printf("a[%d]=> %d\n",i,(*p+i)*(*p+i));
	}
	}

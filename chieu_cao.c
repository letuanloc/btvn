#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf(" nhap chieu cao cua ban:");
	scanf("%d",&n);
	printf("chieu cao cua ban theo cm la:%d cm\n",n);
	printf("chieu cao cua ban theo m la:%d.%d m", n/100,n%100);
	
} 

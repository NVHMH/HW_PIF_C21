#include <stdio.h>
#include <stdlib.h>

int sum (int a,int b){
	int n = a+b;
	return n;
}
int subtract (int a,int b){
	int n = a-b;
	return n;
}
int multiply (int a,int b){
	int n = a*b;
	return n;
}
int main() {
	int a,b,c,d;
	printf("nhap phan thuc: "); scanf("%d", &a);
	printf("nhap phan ao: "); scanf("%d", &b);
	printf("x1 = %d + %di\n", a,b);
	printf("nhap phan thuc: "); scanf("%d", &c);
	printf("nhap phan ao: "); scanf("%d", &d);
	printf("x2 = %d + %di\n", c,d);
	printf("\n");
	printf("x1 + x2 = %d + %di", sum(a,c), sum(b,d));
	printf("\nx1 - x2 = %d + %di",subtract(a,c),subtract(b,d));
	printf("\nx1 * x2 = %d + %di",multiply(a,c),multiply(b,d));
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double gt(int n){
	if (n == 0 || n == 1)
	 return 1;
	else return n*gt(n-1);
}

int main() {
    int n,i,j, x=2;
	printf("khai trien maclaurin den bac: "); scanf("%d",&n);
    double sum =0,a;
	for (i= 0; i<=n; i++ ){
		a = pow(x,i);	
		sum += a/gt(i);
	}
	printf("\ne^2 = %f",sum);
	return 0;
}

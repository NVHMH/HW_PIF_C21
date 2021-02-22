#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, a[100],i,j;
	printf("so phan tu mang "); scanf("%d", &n);
	for (i=0; i < n;i++){
	 printf("nhap a[%d] = ",i );
	 scanf("%d", &a[i]);	
    }
	for (j = 0; j < n - 1;j++){
		for (i = n - 1; i > j; i--){
			if (a[i] < a[i-1]){
				int t = a[i];
				a[i]= a[i-1];
				a[i-1]= t;
			}	
		}
	}
    printf("day tang dan la:");
    for (i=0; i < n;i++)
	 printf("\t%d ",a[i]);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, a[n],i,j=0;
	printf("so phan tu mang "); scanf("%d", &n);
	for (i=0; i < n;i++){
	 printf("nhap a[%d] = ",i );
	 scanf("%d", &a[i]);	
    }
	for (j = 0; j < n - 1; j++){
	    int m = j;
		for (i = j+1; i<n; i++){
			if (a[i]>a[m])
				m = i;
		
		}
			int t = a[j];
			a[j] = a [m];
			a[m] = t;
    }   	
    printf("day giam dan la:");
    for(i = 0; i <n; i++)
	printf("\t%d ", a[i]);

    

}


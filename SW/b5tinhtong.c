#include <stdio.h>
#include <stdlib.h>




int main()
{
	int i,n,a[n];
	float sum=0;
	printf("nhap n\n"); scanf("%d", &n);
	printf("nhap so\n");
	for (i=0; i < n;i++)
	 scanf("%d", &a[i]);
	for (i=0; i<n;i++)
	{
		sum= sum +a[i];
	
		
	}
        
    printf("\nsum = %.2f", sum);
   
    printf("\ntrung binh: %.2f/%d = %.2f", sum,n, sum/n);
        

	return 0;
}

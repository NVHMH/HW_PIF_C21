#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,j,n;
    printf("nhap n\n");
	scanf("%d", &n);
	printf("n = %d", n);
    for (j=0; j<n +1; j++)
    {
    	for (i =0; i<2*n; i++)
    	{
    		if ((i>n-j) && (i<n+j))
    		{
    			printf("#");
			}
			else printf(" ");
		}
		printf("\n");
	}

	return 0;
	
}

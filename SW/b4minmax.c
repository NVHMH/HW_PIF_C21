#include <stdio.h>
#include <stdlib.h>

void nhap(int a[], int n) 
{
	int i;
	for (i=0; i<n;i++)
		scanf("%d",&a[i]);
}

void max (int a[], int n  )
{
	int i;
	int max = a[0];
	for (i=1; i<n; i++)
	{
		if(a[i]> max)
		max = a[i];
	}
		printf("GTLN: %d", max);
    return max;
}
void min (int a[], int n  )
{
	int i,min = a[0];
	for (i=1; i<n; i++)
	{
		if(a[i]< min)
		min = a[i];
	}
		printf("\nGTNN: %d", min);
    return min;
}
void main()
{
	int a[1000],n;
	printf("nhap n\n");
	scanf("%d",&n);
	printf("nhap so\n");
	nhap(a, n);
	max(a,n);
    min(a,n);
return 0;
}


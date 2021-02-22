#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1 = 10;
	int x2 = 5;
	int x3 = 2;
	int x4 = 1;
	int t, n = 0;
	printf("nhap gia tri "); scanf("%d", &t);

	while ( t > 0) 
	{
	
	if (t >= x1)
	{
		n= n +1;
		t = t - x1;
	}
	else 
	{
		if (t >= x2)
	    {
		n= n +1;
		t = t - x2;
	    }
	    else 
	    {
	    	if (t >= x3)
	        {
		    n= n +1;
		    t = t - x3;
	        } 
	        else 
			{
		        if (t >= x4)
	           {
		       n= n +1;
		       t = t - x4;
	           }
	        }
		}
	}
	

		
    }
    	printf("can it nhat %d xu", n);

	return 0;
}


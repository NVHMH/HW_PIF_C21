#include <stdio.h>
#include <stdlib.h>


int main()
{
		float a,b,c,d,cd;
		
	printf("phuong trinh bat hai co dang : ax*2 + bx + c \n");
    printf ("nhap a\n "); scanf ("%f", &a);printf (" a = %.2f\n", a);
    printf ("nhap b\n "); scanf ("%f", &b);printf (" b = %.2f\n", b);
    printf ("nhap c\n "); scanf ("%f", &c);printf (" c = %.2f\n", c);
	printf("ta co %.2fx*2 + %.2fx + %.2f", a,b,c);
	d = b*b-4*a*c;
	printf("\ndenta = %.2f", d);
	if (d<0 ) 
    {
    	printf ("\npt vo nghiem");
	} else
	{
		cd = sqrt(d);
	    printf("\ncan denta = %.2f",cd);
	    if (d==0)
	    {
	    	printf("\npt co nghiem kep x = %.2f", -b/(2*a));
		} else{
		
		    printf ("\npt co hai nghiem phan biet:");
		    printf("\n x1 la: %.2f", (-b+ cd)/(2*a));
		    printf("\n x2 la: %.2f", (-b- cd)/(2*a));}
		    
	}
	
	
	return 0;
}

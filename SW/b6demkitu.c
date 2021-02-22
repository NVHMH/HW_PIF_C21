#include <stdio.h>
#include <stdlib.h>





int main() 

{
   char s[100];
   puts("nhap chuoi: ");
   gets(s);
   char a[2];
   puts("nhap ki tu: ");
   gets(a);
   int n = 0,i, m = 0;
   for ( i = 0; i < strlen(s); i++){
   	if (s[i] == a[0])
   	 n++;
   }
   printf("so ki tu %s trong chuoi %s la: %d",a,s, n);
   if (s[0]!=' ')
   m++;
   for ( i = 0; i < strlen(s); i++){
   	if (s[i]==' ' && s[i+1]!=' ')
   	m++;
   }
   printf("\nso tu trong chuoi %s la: %d",s,m);

   return 0;
   
    
}


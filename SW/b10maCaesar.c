#include <stdio.h>
#include <stdlib.h>
void show (char s[]){
	int i;
	for (i=0; i < strlen (s); i++)
	 if (s[i]>='a'&&s[i]<='z')
	   s[i]-=32;
	printf("%s ",s);
}
void  encode (char s[], int n){
	int i;
	for (i=0; i < strlen (s); i++)
	  if ( s[i] >= 'A'&& s[i] <= 'Z'){
	  	 s[i]+=n;
	  	 if (s[i] > 'Z')
	  	   s[i]-= 26;
	  }
	printf("\n%s",s)  ; 
	    
}


int main() {
	char s[1000];	int n;
	printf("nhap chuoi goc: ");scanf("%s", &s);
	printf("nhap n:");scanf("%d", &n);


	 
    show(s);
    encode(s,n);
	
	return 0;
}

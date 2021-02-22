#include <stdio.h>
#include <stdlib.h>
void nhap ( int a[50][50],int m, int n){
	int i,j ;
	for ( i=0; i < m; i++)
	   for (j= 0; j <n;j++){
	   	printf("nhap a[%d][%d]: ", i,j);
	   	scanf("%d",&a[i][j]);
	   }  
}
void xuat (int a[50][50],int m, int n){
	int i,j ;
	for ( i=0; i < m; i++){
	   for (j= 0; j <n;j++){
	   	printf("%d   ", a[i][j]);
	   }
	   printf("\n");
	}   
}
void sum (int a[50][50], int b[50][50],int c[50][50], int m, int n){
	int i,j;
	for ( i=0; i < m; i++)
	   for (j= 0; j <n;j++)
	   	c[i][j]  = 	a[i][j]   +	b[i][j];
}
void subtract (int a[50][50], int b[50][50],int c[50][50], int m, int n){
	int i,j;
	for ( i=0; i < m; i++)
	   for (j= 0; j <n;j++)
	   	c[i][j]  = 	a[i][j]   -	b[i][j];
}
void multiply (int a[50][50], int b[50][50],int c[50][50], int m, int n){
	int i,j;
	for ( i=0; i < m; i++)
	   for (j= 0; j <n;j++)
	   	c[i][j]  = 	a[i][j]   *	b[i][j];
}


int main() {
	int m,n,a[50][50], b[50][50], c[50][50];
	printf("nhap so hang: "); scanf("%d", &m);
	printf("nhap so cot: "); scanf("%d", &n);
	printf("ma tran co %dx%d\n",m,n);
     
    printf("\nnhap ma tran A:\n"); 
    nhap (a,m,n);
    
    printf("ma tran A:\n");
    xuat (a,m,n);

    printf("\nnhap ma tran B:\n"); 
    nhap (b,m,n);
    
    printf("ma tran B:\n");
    xuat (b,m,n);
    
    sum(a,b,c,m,n);
    printf("\nma tran A + B\n");
    xuat (c,m,n);

    subtract(a,b,c,m,n);
    printf("\nma tran A - B\n");
    xuat (c,m,n);
    
    multiply(a,b,c,m,n);
    printf("\nma tran A x B\n");
    xuat (c,m,n);

	return 0;
}

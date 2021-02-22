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

void chuyenvi(int a[50][50],int b[50][50],int m, int n){
	int i,j;
	for ( i=0; i < n; i++)
	   for (j= 0; j <m;j++){
	   	b[i][j]= a[j][i];
	   
} 
}
int main() {
	int m,n,a[50][50],b[50][50];
	printf("nhap so hang: "); scanf("%d", &m);
	printf("nhap so cot: "); scanf("%d", &n);
	printf("ma tran co %dx%d\n",m,n);
	
	printf("\nnhap ma tran A:\n"); 
    nhap (a,m,n);
    
    printf("ma tran A:\n");
    xuat (a,m,n);
    
    chuyenvi (a,b,m,n);
    printf("\nma tran A sau khi chuyen vi\n");
    xuat (b,n,m);
	
	return 0;
}

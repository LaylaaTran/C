#include<stdio.h>

void InpArr(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=", i);
		scanf("%d", a+i);
	}
}

void OutpArr(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("a[%d]=%d \n",i, *(a+i));
		
	}
}
int
void 


int main(){
	int a[100];
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	InpArr(a,n);
	OutpArr(a,n);
}


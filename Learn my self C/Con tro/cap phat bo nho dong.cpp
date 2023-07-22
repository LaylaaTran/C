#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("Nhap so luong phan tu :");
	scanf("%d", &n);
	
//	int *ptr = (int*)malloc(n*sizeof(int));

int *ptr = (int*)calloc(n,sizeof(int));
	if( ptr == NULL){
		printf("\n Error: Khong cap phat duoc vung nho");
		return 0;
	}
	 int i;
	for(i=0;i<n;i++){
		printf("a[%d]=", i);
		scanf("%d", ptr+i);
	}
	
	for(i=0;i<n;i++){
		printf("%d", *(ptr+i));
	}
	
	int x;
	printf("\n Kich co mang muon thay doi");
	scanf("%d", &x);
	
	printf("\n");
	realloc(ptr,x);
	for(int i=0;i<x;i++){
		printf("%d", *(ptr+i));
	}
	
	free(ptr);
}
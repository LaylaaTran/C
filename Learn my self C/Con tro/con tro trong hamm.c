#include<stdio.h>

void nhapN(int *n){
	*n = 900;
}

void nhapM(int m){
	m =500;
}
 void Swap(int *m, int *n){
 	int temp= *m;
 	*m =*n;
 	*n =temp;
 }
 
void OutPut(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d", a[i]);
	}
}
 
int main(){
	int n=10;
	int m=20;
	int arr[]={1,2,4,3,5};
//	printf("m = %d \n n=%d" , m,n);

//	Swap(&m , &n);
//	printf(" Gai tri luc sau la m = %d \n n=%d" , m,n);
	
	OutPut(arr,n);
	
}
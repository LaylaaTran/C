#include<stdio.h>

void Swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}


int main(){
	int a=5, b=10;
	printf("Truoc khi swap a=%d , b=%d \n", a,b);
	Swap(&a,&b);
	printf("Sau khi swap a=%d , b=%d", a,b);
	
}
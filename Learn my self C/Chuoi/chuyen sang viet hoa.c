#include<stdio.h>
#include<string.h>

void Mystrupr(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]>=97 && a[i]<=122){
			a[i]= a[i]-32;
		}
	}
}

void Mysstrlwr(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]>=65 && a[i]<90){
			a[i]=a[i]+32;
		}
	}
}


int main(){
	char c[100];
	printf("Nhap c = ");
	fgets(c, sizeof(c), stdin);
	printf("\n c= %s", c);
	printf("Chuyen sang viet hoa : ");
	//strupr(c);
	Mystrupr(c);
	puts(c);
	printf("Chuyen sang viet thuong : ");
	Mysstrlwr(c);
	//strlwr(c);
	puts(c);
	//ham strupr() : uper
}
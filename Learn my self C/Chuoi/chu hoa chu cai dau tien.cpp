#include<stdio.h>
#include<string.h>

void ChuHoaDau(char a[]){
	//x[0] => viet hoa
	//x[i-1]= khoang trang thi x[i] chuyen sang viet hoa
	
	for(int i=0;i<strlen(a);i++){
		if(i==0 || a[i-1]==32)
			if(a[i]>97 && a[i]<122){
			a[i]= a[i]-32;
		}
	}
	}


int main(){
	char c[50];
	printf("Nhap c = ");
	fgets(c, sizeof(c), stdin);

	ChuHoaDau(c);
	puts(c);
}
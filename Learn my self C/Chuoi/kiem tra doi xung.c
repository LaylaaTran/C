#include<stdio.h>
#include<string.h>

void XoaXuongDong(char a[]){
	size_t len = strlen(a);
	if(a[len -1] =='\n'){
		a[len-1]='\0';
	}
}

int KiemTraDoXung(char a[]){
	// 1 -doi xung
	// 0- khong doi xung
	size_t len = strlen(a);
	int i;
	for( i=0;i<len/2;i++){
		if(a[i] != a[len-i-1]){
			return 0;
		}
	}
	return 1;
}

int main(){
	char c[50];
	printf("Nhap s : ");
	fgets(c, sizeof(c), stdin);
	XoaXuongDong(c);
	if( KiemTraDoXung(c) ){
		printf("\n Day la chuoi doi xung ");
	}else{
		printf("Day khong la chuoi doi xung");	}
	
}
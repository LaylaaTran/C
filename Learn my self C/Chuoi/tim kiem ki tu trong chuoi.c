#include<stdio.h>
#include<string.h>

char*  MyStrchr(char a[], char d){
	for(int i=0;i<strlen(a);i++){
		if (a[i] == d){
			return &a[i];
		}
	}
}


int main(){
	char c[50] = "Thuongyeu.anh";
	char *c1;
//	 c1=strchr(c , '.');
//	 printf("\n c = %s", c);
//	 printf(" \n c1 = %s", c1);
	
	char d;
	printf("Nhap ki tu muon tim kiem :");
	scanf("%c", &d);
	c1= MyStrchr(c,d));
	printf("%d", c1)
}
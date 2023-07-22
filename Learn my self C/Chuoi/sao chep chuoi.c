#include<stdio.h>
#include<string.h>

void MyStrcpy(char a[], char s[]){
	size_t lena= strlen(a);
	size_t lens= strlen(s);
	
		for(int i=0;i<lens;i++){
			a[i] = s[i];
		}
		a[lens] = '\0';
}


int main(){
	char a[100]="Dat heo";
	char s2[20]="yeu Thuong";
	//dung ham strcpy
	//strcpy(a, s2);
	printf("%s \n ", a);
	printf("%s \n ", s2);
	MyStrcpy(a,s2);
	printf("%s ", a);
}
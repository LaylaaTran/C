#include<stdio.h>
#include<string.h>

void MyStrcat(char a[], char s[]){
	size_t lena= strlen(a);
	size_t lens= strlen(s);
	
		for(int i=lena;i<lena+lens;i++){
			a[i] = s[i-lena];
		}
		a[lena+lens+1] = '\0';
}


int main(){
	char a[100]="Dat heo";
	char s2[20]="yeu Thuong";
	//dung ham strcat
	//strcat(a, s2);
	MyStrcat(a,s2);
	printf("%s", a);
}
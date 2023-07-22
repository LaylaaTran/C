#include<stdio.h>
#include<string.h>

int main(){
	char a[100]="Dat heo ";
	char s2[20]="yeu Thuong";
	
	strcat(a, s2);
	printf("%s", a);
}
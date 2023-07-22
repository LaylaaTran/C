#include<stdio.h>
#include<string.h>

void Upper(char a[]){
	int n = strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]>= 'A' && a[i] <= 'Z'){
			a[i] =a[i]+32;
		}
	}
}

void Lower(char a[]){
	int n= strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]>= 'a' && a[i] <= 'z'){
			a[i] =a[i]-32;
		}
	}
}


void UpTilte(char a[]){
	int n= strlen(a);
	for(int i=0;i<n;i++){
		if(a[i]>= 'A' && a[i]<='Z'){
			a[i]= a[i]=32;
		}
		if(a[i-1]==' ' || i==0){
			if(a[i]>='a' && a[i]<='z'){
				a[i]= a[i]-32;
			}
		}
	}
}



int main(){
	char a[100];
	fgets(a, sizeof(a), stdin);
	Lower(a);
	puts(a);
	Upper(a);
	puts(a);
	UpTilte(a);
	puts(a);
}
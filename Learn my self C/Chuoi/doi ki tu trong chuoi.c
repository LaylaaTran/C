#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	fgets(str,sizeof(str),stdin);
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]=='3'){
			str[i]='e';
		}
	}
	puts(str);
	
}
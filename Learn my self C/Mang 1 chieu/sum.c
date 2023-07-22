#include<stdio.h>
#include<string.h>

int main(){
	char Dat[100];
	fgets(Dat, sizeof(Dat), stdin);
	int pos;
	printf("Input pos : ");
	scanf("%d", &pos);
	
	int i;
	for(i=0;i<strlen(Dat);i++){
		if(i==pos-1){
		
			printf("%c", Dat[i]);
		}
	}
	

}



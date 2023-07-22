#include<Stdio.h>
#include<string.h>
#include<stdlib.h>

int DoiSo(char *s ){
	
	int count=0;
	while(*(s+count) != '\0'){
		count++;
	}
	return count;
}




int main(){
	char *s;
	s = (char*)malloc(50*sizeof(char));
	//hai dong tuòn duong voi char[50
	printf("Input string : ");
	gets(s);
	printf("Lenght of string : %d", DoiSo(s));
	

}

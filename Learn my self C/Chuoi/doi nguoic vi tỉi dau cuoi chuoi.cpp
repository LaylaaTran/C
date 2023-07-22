#include<stdio.h>
#include<string.h>



void DeleteLine(char a[]){
	size_t len = strlen(a);
	if(a[len-1]=='\n'){
		a[len-1]='0';
	}
}


int main(){
	//tim kiem chuoi tra ve con tro ,neu khogn tim thay tra ve NULL
	char string[50];
	char stringson[50];

	printf("Input string : ");
	fgets(string, sizeof(string), stdin);
	DeleteLine(string);
	
	printf("Inout stringson : ");
	fgets(stringson, sizeof(stringson), stdin);
	DeleteLine(stringson);
	
	char *kq;
	kq = strstr(string, stringson);
	printf("%s", kq);


	if(kq != NULL){
		printf(" Can find stringson !");
	}else{
	
		printf("Can not find stringson !");
	}
}
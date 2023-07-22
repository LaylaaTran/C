#include<stdio.h>
#include<string.h>

int Mystrcmp(char x1[], char x2[]){
	int ketqua=0;
	size_t len1=strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1<len2?len1:len2;
	
	for(int i=0;i<min;i++){
		ketqua = x1[i]- x2[i];
		if(ketqua > 0){
			ketqua=1;
		}else if(ketqua <0){
			ketqua =-1;
		}else{
			ketqua =0;
		}
		
		return ketqua;
	}
}


int main(){
	char s1[100];
	char s2[100];
	
	printf("Nhap vao s1 : ");
	fgets(s1, sizeof(s1), stdin);
	printf("Nhap vap s2 : ");
	fgets(s2, sizeof(s2), stdin);
	printf("Ket qua so sanh : %d \n ", strcmp(s1,s2));
	printf("Ket qua so sanh : %d \n ", Mystrcmp(s1,s2));

}
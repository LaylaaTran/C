#include<iostream>
#include<string.h>

using namespace std;

//tu tao ham dem

int Mylen(char x[]){
	int count =0;
	while(x[count] != '\0'){
		count++;
	}
	return count;
}


int main(){
	//char ten[50]= "THUONGYEUANH"; chuoi nay nhap san roi
	
	char ten[50];
	fgets(ten, sizeof ten, stdin);//khi nay so luong ki tu se tang them 1 do nhan enter chung ta can tru di 1 hoac tao mot ham xoa ki tu enter
	//cout<<"Do dai ten ="<< strlen(ten);
	//ham strlen() co san trong thu vien string.h
	cout<<Mylen(ten);
}

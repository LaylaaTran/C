#include<iostream>
#include<string>

using namespace std;

//tu tao ham dao nugoc

void mystrrev(char x[]){
	//TITV 
	// VITT DAO PHAN TU DAU VA CUOI
	//VTIT //DAO HAI PHAN TU GIUA
	
	size_t len = strlen(x);
	for(int i=0;i<len/2;i++){
			char temp=x[i];
			x[i]=x[len-i-1];
			x[len-i-1]=temp;
	}
}






int main(){
	char s[50];
	cout<<"Nhap chuoi s :";
	fgets(s,50,stdin);
	puts(s);
	
//	strrev(s);	//ham dao nguoc chuoi
	mystrrev(s);
	puts(s);
}

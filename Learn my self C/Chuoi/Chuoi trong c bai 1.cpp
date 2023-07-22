#include<iostream>

using namespace std;

int main(){
	//char str[100];
	//cin>>str;khong in ra nhung chu sau khoang trang

	//nen dung fgets khai bao khoang trang trong chuoi
//	fgets(str,sizeof str, stdin); //sizeof str=100 ,co the thay nhau
//cach 1 
//	puts(str);
//cach 2
//	cout<<str;

	int Tuoi;
	char name[100];
	cout<<"Nhap tuoi :";cin>>Tuoi;
	//fflush(stdin);
	
	getchar();
	fgets(name,sizeof name,stdin);
	cout<<Tuoi;	puts(name);
}

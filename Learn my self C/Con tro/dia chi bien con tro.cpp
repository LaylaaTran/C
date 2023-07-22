#include<iostream>

using namespace std;

int main(){
	int var;
	cin>>var;
	cout<<"Gia tri cua var la "<<var<<endl;
	cout<<"Dia chi cua bien var la"<<&var<<endl;;
	// %p,&var
	
	//con tro la bien dung de luu tru dia chi 
	int* t , d;// int *t , int* d;
	d=5;
	//gan dia chi
	
	t= &d; 
	//lay gia chi
	cout<<"Gia tri cua t la " <<*t<<endl; // printf("%d", *t);
	cout<<"Dia chi cua t la " <<t; //printf("%p", t)
	

}

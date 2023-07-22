#include<iostream>

using namespace std;

#define MAX_SIZE  100

void InpArr(int a[], int n){
	for(int i=0;i<n;i++){
	cout<<"a["<<i<<"]= ";
	cin>>a[i];
	}
}


void OutpArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}



int main(){
	int a[MAX_SIZE];
	int n;
	
	do{
		cout<<"Nhap n=";
		cin>>n;
	}while(n<0 || n>MAX_SIZE);

	InpArr(a,n);
	OutpArr(a,n);
}

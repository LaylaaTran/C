#include<iostream>

using namespace std;

int MAX_SIZE = 100;

void InpArr(int a[], int n){
	for(int i=0;i<n;i++){
	cout<<"a=["<<i<<"]= ";
	cin>>a[i];
	}
}


void OutpArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}

void DaoNguoc(int a[], int n){
	for(int i=0;i<=n/2;i++){
		int temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1]=temp;
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
	DaoNguoc(a,n);
	OutpArr(a,n);
}

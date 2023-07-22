#include<iostream>

using namespace std;

void InputArr(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]="<<endl;
		cin>>a[i];
	}
}

void OutputArr(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<*(a+i);
	}
}



void InsertArr(int *&a, int &n, int Pos, int Val){
	n++;
	a = (int *)realloc(a, n*sizeof(int));
	for(int i=n-1;i>Pos;i--){
		a[i]=a[i-1];
	}
	
	a[Pos]=Val;
}



int main(){
	int a[100];;
	int n;
	int Pos,Val;
	cout<<"Input n="; cin>>n;
	cout<<"Input Pos =";
	cin>>Pos;
	cout<<"Input Val=";
	cin>>Val;
	InputArr(a,n);
	InsertArr(a,n,Pos,Val);
	OutputArr(a,n);
}

#include<iostream>

using namespace std;

void InputArr(int a[], int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
}

void DeleteMember(int a[], int *n, int Pos){
	for(int i=Pos;i<*n;i++){
		a[i]=a[i+1];
	}
	(*n)--;
}

void Count(int a[], int *n){
	int Pos;
	for(int i=0;i<*n;i++){
		if(a[i]==a[i+1]){
			Pos=i;
			DeleteMember(a,n,Pos);
		}
	}
}

int Kill(int a[], int *n, int m){
	int Sum=0;
	for(int i=0;i<*n;i++){
		Sum +=a[i];	
		if(Sum >= m){
			return i;
		}
	}
}

int main(){
	int a[100];
	int n;
	cout<<"Input n=";
	cin>>n;
	int m;
	cout<<"Input m= ";
	cin>>m;
	InputArr(a,n);
	
	
	
	cout<<Kill(a,&n,m);
	
}

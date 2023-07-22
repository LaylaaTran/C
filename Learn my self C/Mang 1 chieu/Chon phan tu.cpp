#include<iostream>

using namespace std;

int MAX_SIZE =100;

void InpArr(int a[], int n){
	for(int i=0;i<n;i++){
	cout<<"a=["<<i<<"]= ";
	cin>>a[i];
	}
}


void OutpArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}


int FindMax2(int a[], int n){
	int fMax=a[0];
	int sMax = a[1];
	
	for(int i=2;i<n;i++){
		if(a[i]>=fMax){
			sMax=a[1];
			fMax=a[i];
		}else if(a[i]> sMax){
			sMax=a[i];
		}
	}
	
	return sMax;
	
}

//Chen phan tu val vao vi tri pos
void InsertArr(int a[], int &n, int Pos, int Val){
	if(n>=MAX_SIZE) {
	return ;
	}
	
	if(Pos<=0){
		Pos=0;	
	}
	
	 else if(Pos>n){
	 	Pos=n;
	 }
	 
	for(int i=n;i>Pos;i--){
	a[i]=a[i-1];	
	}
	
	a[Pos]= Val;
	
	++n;



}


void DelArr(int a[], int &n, int Pos){
	if(Pos<=0){
		Pos=0;	
	}
	
	 else if(Pos>n){
	 	Pos=n;
	 }
	 
	 for(int i=Pos;i<n;i++){
	 
	 	a[i+1]=a[i+2];
	 }
	 a[Pos]=a[Pos+1];
	 --n;
}



int main(){
	int a[MAX_SIZE];
	int n;
	int Pos,Val;
	
	do{
		cout<<"Nhap n=";
		cin>>n;
	}while(n<0 || n> 100);

	InpArr(a,n);
//	OutpArr(a,n);
	//cout<<FindMax2(a, n);
	
	cout<<"Nhap phan tu muon chen : ";
	cin>>Val;
	cout<<"Nhap vi tri can chen : ";
	cin>>Pos;
	
	InsertArr(a, n,Pos, Val);
	OutpArr(a,n);
	
//	cout<<"Nhap vi tri can xoa  : ";
//	cin>>Pos;
//	DelArr(a,n,Pos);
//	OutpArr(a,n);
}


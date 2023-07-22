#include<iostream>
#include<math.h>

using namespace std;

void InputArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}		
}

void OutputArr(int a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i];
	}
}

int FindNumber(int a[], int n, int x){
	int Hieu = abs(a[0]-x);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(abs(a[i]-x) <Hieu) ){
				Hieu = abs(a[i]-x);
			}
		}
		
	}
	return Hieu;
	
}

bool chuaXh(){
	
}


void HienQk(int a, int n, int x, int Hieu){
	int i;
	int b[100];
	for(int i=0;i<n;i++){
		if(abs(a[i]- x) == Hieu){
			cout<<a[i];
		}
	}
}

int main(){
	int arr[100];
	int n;
	cout<<"Input n";
	cin>>n;
	InputArr(arr,n);
	int x;
	cout<<"Input number want to find";
	cin>>x;
	 cout <<FindNumber(arr,n,x);

}

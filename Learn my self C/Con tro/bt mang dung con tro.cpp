#include<bits/stdc++.h>

using namespace std;

void InputArr(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		scanf("%d", a+i);
	}
	
}

void OutputArr(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}


void FindArr(int *a, int &n){
	int dem=0,Sum=0;
	for(int i=0;i<n;i++){
		if(a[i]<0 && abs(a[i])<8){
			dem++;
			Sum+=a[i];
		}
	}
	
	if(dem>0){
		cout<<endl;
		cout<<"Trung binh cong la"<<(float)Sum/dem;
	}else cout<<"0";
}

void Max2Arr(int *a, int n){
	//cach 1
//	for(int i=0;i<n-1;i++){
//		for(int j=i;j<n;j++){
//			if(a[i]<a[j]){
//				int temp =a[i];
//				a[i]=a[j];
//				a[j]= temp;
//			}
//		}
//	}
//	cout<<"Max2 la "<<a[1];
	
	//cach 2
	
	int max=a[0];
	for(int i=0;i<n;i++){
		
		if(a[i]>max){
			max=a[i];
		}
	}
	int min=a[0];
	for(int i=0;i<n;i++){
		
		if(a[i]<min){
			min=a[i];
		}
	}
	int max2= min;
	for(int i=0;i<n;i++){
		if(max2<a[i] && a[i]<max){
			max2=a[i];
		}
	}
	cout<<"Max2"<<max2;
}

void Insert(int *a, int &n, int Val, int Pos){
	n++;
	if(Pos>=n){
		Pos=n;
	}
	
	for(int i=n;i>=Pos;i--){
		a[i]=a[i-1];
	}
	a[Pos]=Val;
	
}

void InsertArr(int *a, int &n, int Val){
	for(int i=0;i<n;i++){
		if(Val>a[i]){
			Insert(a,n,Val,i+1);
		}
	}
}

int main(){
	int n, *a;
	cin>>n;
	a=(int *)malloc(n*sizeof(int));
	InputArr(a,n);
//	OutputArr(a,n);
//	FindArr(a,n);
//	Max2Arr(a,n);
	
	int Val;
	cin>>Val;
	a =(int*)realloc(a,n+1);
	InsertArr(a,n,Val);
	OutputArr(a,n);
	free(a);
}

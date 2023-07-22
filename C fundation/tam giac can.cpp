#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int h;
	cout<<"Nhap vao chieu cao cua tam giac can : ";
	cin>>h;
	
	for(int i=0;i<=h;i++){
		
		for(int j=0;j<h*2;j++){
			if(abs(h-j) <= (i-1)){
				cout<<" * ";
			}else cout<<"   ";
		}
	cout<<endl;
}

}
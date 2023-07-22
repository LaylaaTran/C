#include<iostream>

using namespace std;

int main(){
	int col;
	int row;
	cout<<"Input chieu dai chieu rong";
	cin>>col;
	cin>>row;
	int n=1;
	for(int i=0;i<row;i++){
		for(int j=0;j<n;j++){
			cout <<'*';
		}
		if(n++ <col){
		
			cout<<endl;
		}
	
		
	}
	
}


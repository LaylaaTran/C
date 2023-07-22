#include<iostream>

using namespace std;

int main(){
	int col;
	int row;
	cout<<"Input chieu dai chieu rong";
	cin>>row;
	cin>>col;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout <<'*';
		}
		col++;
		cout<<endl;
	}
	
}


#include<bits/stdc++.h>
using namespace std;
void inputArray(int *&a, int &n){
	do{
		cin>>n;
	} while(n<2 || n>30);
	a = new int[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
}

void outputArray(int *a, int n) {
	for(int i=0; i<n; i++) {
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void handleArray(int *a, int n) {
	bool haveSwapped = false;
	for(int i=0; i<n; i++) {
		if(i==n-1 && a[i]%2 != 0) {
			cout<<"False"<<endl;
			break;
		}
		if(a[i]%2 == 0) {
			for(int j=n-1; j>i; j--) {
				if(a[j]%2 == 0) {
					cout<<j-i<<endl;
					swap(a[i], a[j]);
					outputArray(a, n);
					haveSwapped = true;
					break;
				}
			}
			if(!haveSwapped)
				cout<<a[i]<<endl;
			break;
		}
	}
}

void deleteNum(int *&a, int &n, int pos) {
	for(int i=pos-1; i<n-1; i++) {
		a[i] = a[i+1];
	}
	--n;
	a = (int *)realloc(a, n * sizeof(int));
}

int min(int *a, int n) {
	int min=0;
	for(int i=1; i<n; i++) {
		if(a[i]<a[min])
			min = i;
	}
	return a[min];
}

int secondMin(int *a, int n) {
	int minNum = min(a, n);
	int secondMin = minNum;
	for(int i=0; i<n; i++) {
		if(a[i] != minNum) {
			secondMin = a[i];
			break;
		}
	}
	if( secondMin == minNum )
		return minNum;
	for(int i=0; i<n; i++) {
		if(a[i] != minNum && a[i] < secondMin) {
			secondMin = a[i];
		}
	}
	return secondMin;
}

void insertSecondMin(int *&a, int &n) {
	a = (int *)realloc(a, (n+1) * sizeof(int));
	for(int i=n; i>1; i--) {
		a[i] =a[i-1];
	}
	a[1] = secondMin(a, n);
	++n;
}

int main() {
	int n, *a, k;
	inputArray(a, n);

	// Cau a
	outputArray(a, n);

	// Cau b
	handleArray(a, n);

	// Cau c
	cin>>k;
	if(k>=1 && k<=n) {
		deleteNum(a, n, k);
		outputArray(a, n);
	} else {
		cout<<"No"<<endl;
	}

	// Cau d
	if(secondMin(a, n) == min(a, n)){
		cout<<"No second min element!"<<endl;
	} else {
		insertSecondMin(a, n);
		outputArray(a, n);
	}

	delete[] a;
	return 0;
}

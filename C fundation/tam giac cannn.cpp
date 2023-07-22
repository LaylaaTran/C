#include<stdio.h>;
int nhap(){
	int n;
	scanf("%d",&n);
	return n;
}
// hinh kim tu thap
void xuat1(int n,int k){
	for (int j=1; j<=k; j++){
		for(int i=j; i<k; i++){
			printf(" ");
		}

		for (int i=1; i<=(2*j-1); i++){
			printf("*");
		}
		printf("\n");
	}
}
// hinh kim tu thap nguoc
void xuat2(int n,int k){
	for (int j=1; j<=k; j++){
		for(int i=1; i<j; i++){
			printf(" ");
		}

		for (int  i=1;i<=((k*2)-(2*j-1)) ;i++){
			printf("*");
		}
		printf("\n");
	}
}
int main()
{

// kim tu  thap
	int n1, soDong1;
	printf("Nhap n:");
	n1=nhap();
	printf("So dong:");
	soDong1=nhap();
	xuat1(n1,soDong1);
// kim tu phap nguoc
	int n2, soDong2;
	printf("Nhap n:");
	n2=nhap();
	printf("So dong:");
	soDong2=nhap();
	xuat2(n2,soDong2);


return 0;
}
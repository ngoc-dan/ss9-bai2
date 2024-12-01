#include<stdio.h>
int main(){
	int j,a,n=100;
	int arr[n];
	printf(" nhap so pt : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu : ");
		scanf("%d",&arr[i]);
	}
	printf("nhap pt muon them vao : ");
	scanf("%d",&a);
	printf("nhap o muon thay the : ");
	scanf("%d",&j);
	for(int i=0;i<n;i++){
		if(i==j-1){
			arr[i]=a;
		}
		printf("%d ",arr[i]);
	}
	return 0;
}

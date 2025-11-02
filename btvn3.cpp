#include <stdio.h>
int main(){
	int arr[100];
	int n;

	do{
		printf("Nhap vao so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<1){
			printf("Loi!, so phan tu cua mang phai >0");
		}
	}while(n<1);

	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	printf("\nMang vua nhap: \n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	
	 
	return 0; 
}

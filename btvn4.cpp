#include <stdio.h>

int main(){
	int n;
	int array[n];
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	return 0;
}


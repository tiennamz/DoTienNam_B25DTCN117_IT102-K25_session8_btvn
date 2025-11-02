#include <stdio.h>
#include<math.h> 
int main(){
	int qua;
	printf("Nhap so phan tu:");
	scanf("%d",&qua);
	int arr[qua];
	for (int i=0; i<qua; i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("cac so nguyen to trong mang la:");
	for (int i=0; i<qua; i++){
		int check=1;
		for (int j=2; j<=sqrt(arr[i]); j++){
			if (arr[i]%j==0){
				check=0;
				break;
			}
		}
		if (check==1){
			printf("%d ",arr[i]);
		}
	}
    return 0;
}

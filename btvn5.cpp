#include <stdio.h>
int main(){
	int arr[5], min, max;
	printf("Nhap phan tu:\n");
	for (int i=0; i<5; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	; 
	} 
	min = arr[0];
    max = arr[0]; 
	for (int i=0; i<5; i++){
		if (arr[i]>max){
			max=arr[i];
		}
		if (arr[i]<min){
			min=arr[i];
		}
	} 
	printf("Gia tri lon nhat va nho nhat la: %d va %d",max,min);
    return 0;
}

#include <stdio.h>

int main(){
	int row, col;
	printf("Nhap so hang: ");
	scanf("%d", &row);
	printf("Nhap so cot: ");
	scanf("%d", &col);
	
	int arr[row][col];
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++){
			printf("Nhap phan tu hang %d cot %d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}

	printf("\nMang day du:\n");
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	

	printf("\nMang vien:\n");
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			if (i == 0 || i == row-1 || j == 0 || j == col-1)
				printf("%d ", arr[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	
	return 0;
}

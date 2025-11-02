#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Nhap so hang va so cot: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("\nNhap cac phan tu cua mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMang vua nhap la:\n\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);  
        }
        printf("\n");  
    }
    
    return 0;
}

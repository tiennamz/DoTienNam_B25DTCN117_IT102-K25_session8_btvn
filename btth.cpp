#include <stdio.h>

int main(){
	int arr[100], n = 0, choice, pos, value;
	
	while (1){
		printf("\n===== Quan ly danh sach so nguyen =====\n");
		printf("1. Them phan tu vao vi tri bat ky\n");
		printf("2. Xoa phan tu o vi tri bat ky\n");
		printf("3. Cap nhat gia tri tai vi tri bat ky\n");
		printf("4. Tim kiem phan tu trong mang\n");
		printf("5. Hien thi mang\n");
		printf("6. Thoat chuong trinh\n");
		printf("Chon: ");
		scanf("%d", &choice);
		
		if (choice == 1){
			printf("Nhap vi tri (0-%d): ", n);
			scanf("%d", &pos);
			printf("Nhap gia tri: ");
			scanf("%d", &value);
			for (int i = n; i > pos; i--)
				arr[i] = arr[i-1];
			arr[pos] = value;
			n++;
			printf("Them thanh cong!\n");
		}
		else if (choice == 2){
			printf("Nhap vi tri (0-%d): ", n-1);
			scanf("%d", &pos);
			for (int i = pos; i < n-1; i++)
				arr[i] = arr[i+1];
			n--;
			printf("Xoa thanh cong!\n");
		}
		else if (choice == 3){
			printf("Nhap vi tri (0-%d): ", n-1);
			scanf("%d", &pos);
			printf("Nhap gia tri moi: ");
			scanf("%d", &value);
			arr[pos] = value;
			printf("Cap nhat thanh cong!\n");
		}
		else if (choice == 4){
			printf("Nhap gia tri can tim: ");
			scanf("%d", &value);
			printf("Tim thay tai vi tri: ");
			int found = 0;
			for (int i = 0; i < n; i++){
				if (arr[i] == value){
					printf("%d ", i);
					found = 1;
				}
			}
			if (!found) printf("Khong tim thay");
			printf("\n");
		}
		else if (choice == 5){
			printf("Mang: ");
			for (int i = 0; i < n; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
		else if (choice == 6){
			printf("Thoat!\n");
			break;
		}
		else {
			printf("Lua chon khong hop le!\n");
		}
	}
	
	return 0;
}

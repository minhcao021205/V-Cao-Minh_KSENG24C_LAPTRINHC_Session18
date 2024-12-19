#include <stdio.h>
#include <string.h>

#define MAX_SINH_VIEN 50

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;

int main() {
    SinhVien sinhVienArray[MAX_SINH_VIEN];  
    int n = 5;  
    int i;
    for (i = 0; i < n; i++) {
        sinhVienArray[i].id = i + 1; 
        printf("Nhap thong tin sinh vien %d:\n", i + 1);
        printf("Ten: ");
        getchar(); 
        fgets(sinhVienArray[i].name, sizeof(sinhVienArray[i].name), stdin);
        sinhVienArray[i].name[strcspn(sinhVienArray[i].name, "\n")] = '\0';  
        printf("Tuoi: ");
        scanf("%d", &sinhVienArray[i].age);
        printf("So dien thoai: ");
        getchar(); 
        fgets(sinhVienArray[i].phoneNumber, sizeof(sinhVienArray[i].phoneNumber), stdin);
        sinhVienArray[i].phoneNumber[strcspn(sinhVienArray[i].phoneNumber, "\n")] = '\0';  

        printf("\n");
    }
    printf("Danh sach sinh vien:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d\n", sinhVienArray[i].id);
        printf("Ten: %s\n", sinhVienArray[i].name);
        printf("Tuoi: %d\n", sinhVienArray[i].age);
        printf("So dien thoai: %s\n", sinhVienArray[i].phoneNumber);
        printf("----------------------------\n");
    }

    return 0;
}

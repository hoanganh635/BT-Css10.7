#include <stdio.h>

int main() {
    int n, m;

    // Nhap so dong va so cot
    printf("Nhap so dong: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    int arr[n][m];

    // Nhap gia tri phan tu mang
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int searchValue, foundIndexes[n * m][2], foundCount = 0;

    // Nhap gia tri can tim
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &searchValue);

    // Tien hanh tim kiem tuyen tinh
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == searchValue) {
                foundIndexes[foundCount][0] = i;
                foundIndexes[foundCount][1] = j;
                foundCount++;
            }
        }
    }

    // In ket qua
    if (foundCount > 0) {
        printf("Gia tri %d duoc tim thay tai vi tri: ", searchValue);
        for (int i = 0; i < foundCount; i++) {
            printf("(%d, %d) ", foundIndexes[i][0], foundIndexes[i][1]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay gia tri %d trong mang.\n", searchValue);
    }

    return 0;
}

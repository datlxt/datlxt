#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#define MAX 100

void nhap(int a[], int *n)
{
    do
    {
        printf("\nNhap so phan tu (toi da %d phan tu): ", MAX);
        scanf("%d", n);
        if (*n <= 0 || *n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    } while (*n <= 0 || *n > MAX);

    printf("\nNhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    printf("Mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

bool trungNhau(int a[], int n, int i, int j)
{
    return (a[i] == a[j]);
}

void xoaPhanTuTrungNhau(int a[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (trungNhau(a, *n, i, j))
            {
                for (int k = j; k < *n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int main()
{
    int n, a[MAX];

    nhap(a, &n);
    xuat(a, n);

    xoaPhanTuTrungNhau(a, &n);
    printf("\nMang sau khi xoa cac gia tri trung nhau:\n");
    xuat(a, n);

    getch();
    return 0;
}

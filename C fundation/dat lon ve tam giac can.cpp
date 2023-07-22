#include <stdio.h>

int main()
{
    int h;
    printf("Nhap chieu cao cua tam giac : ");
    scanf("%d", &h);
    int q = h;
    for (int p = 1; p <= q+1; p++)
    {
        printf("%c", ' ');
    }
    printf("*\n");
    for (int i = 0; i < h; i++)
    {

        for (int p = 1; p <= q; p++)
        {
            printf("%c", ' ');
        }
        q--;
        printf("%c", '*');
        for (int count = 0; count <= i * 2; count++)
        {
            printf("%c", '*');
        }
        printf("*\n");
    }
}
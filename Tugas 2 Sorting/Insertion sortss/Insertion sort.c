#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int simpan[100];
    int i, j, a, n;

    printf("Masukkan jumlah data : ");
    scanf("%d", &n);
    printf("\n\n");
    for (i = 0; i < n; ++i)
    {
        printf("\nmasukan value data ke-%d = ", i+1);
        scanf("%d", &simpan[i]);
    }

    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (simpan[i] > simpan[j])
            {
                a = simpan[i];
                simpan[i] = simpan[j];
                simpan[j] = a;
            }
        }
    }

    printf("\nUrutannya adalah : \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d  ", simpan[i]);
    }
    getch();
    return 0;
}

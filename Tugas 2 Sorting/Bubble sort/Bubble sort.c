#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,t, simpan[100];
    printf("Masukkan banyak data yang akan diurutkan : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Data %d = ", i); scanf("%d", &simpan[i]);
    }

    for(i=1; i<=(n-1); i++)
    {
        for(j=n; j>=(i+1); j--)
        {
            if(simpan[j-1]>simpan[j])
            {
                t=simpan[j-1];
                simpan[j-1] = simpan[j];
                simpan[j] = t;
            }
        }
    }

    printf("\nUrutannya adalah : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ", simpan[i]);
    }
    printf("\n");
    return 0;
    getch();
}

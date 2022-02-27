#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp,final;
    int simpan[30];


    printf("Masukkan banyaknya data = ");
    scanf("%d",&final);
    for(a=0;a<final;a++)
    {
        printf("\n masukkan value data ke %d = ",a+1);
        scanf("%d",&simpan[a]);
    }

    for(a=0;a<final-1;a++)
    {
        for(b=a+1;b<final;b++)
        {
            if(simpan[a]>simpan[b])
            {
                temp=simpan[b];
                simpan[b]=simpan[a];
                simpan[a]=temp;
            }
        }
    }


    printf("\n Urutan simpan : \n\n");
    for(a=0;a<final;a++)
    {
        printf("%d  ",simpan[a]);
    }
    printf("\n");

    getch();
    return 0;

}

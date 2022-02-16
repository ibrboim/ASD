#include <stdio.h>

int main(){

    int n, i, data[50], cari, jumlah = 0;
    printf("masukkan berapa data yang disimpan? ");
    scanf("%d", &n);
    printf("masukkan %d integer(s)\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    printf("data yang dicari? ");
    scanf("%d", &cari);
    for (i = 0; i < n; i++){
        if (data[i] == cari){
            printf("angka %d ketemu, dan terseimpan di lokasi %d \n", cari, i+1);
            jumlah++;
            // break;
        }
    }
    if (jumlah == 0){
        printf("angka %d tidak ditemukan", cari);
    } else {
        printf("angka %d ketemu sebanyak %d kali", cari, jumlah);
    }

    return 0;
}

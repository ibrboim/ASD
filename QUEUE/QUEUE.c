// Online C compiler to run C program online
#include <stdio.h>
#define MAX 3
typedef struct{
    int data[MAX];
    int head;
    int tail;

}queue;

queue antri;

void awal(){

    antri.head = antri.tail= -1;

}
int kosong(){
    if(antri.tail == -1){
        return 1;
        }//artinya kosong,true
    else{
        return 0;//
    }
}

int penuh(){
    if(antri.tail == MAX-1){
    return 1;
    }//true
    else{
        return 0;
    }

}
void masukData(int data){//nampung data yg dilempar dr bawah
    if(kosong()==1){
        antri.head=antri.tail=0;
        antri.data[antri.tail]= data;
        printf("%d masuk \n", antri.data[antri.tail]);

    }else if(penuh()==0){//tidak penuh
        antri.tail++;
        antri.data[antri.tail]= data;
        printf("%d masuk", antri.data[antri.tail]);
        }

}

void tampil(){
   if(kosong()==0){//apakh tidak kosong?
            for(int i=antri.head; i <= antri.tail; i++){
                printf("%d ",antri.data[i]);
            }

        }else{
            printf("Antrian Kosong");
        }

}

int keluar(){
    int d=antri.data[antri.head];

    for(int i=antri.head;i<=antri.tail-1;i++){
        antri.data[i]=antri.data[i+1];

    }
    antri.tail--;
    return d;




}

void hapus(){
antri.head = antri.tail = -1;
printf("data dalam antrian telah dibersihkan");
}


int main() {
    int pilih;
    int data;

    awal();
    do{
    printf("\n\n");
    printf("1. Masuk satu data\n");
    printf("2. Keluar satu data\n");
    printf("3. Lihat isi antrian\n");
    printf("4. Hapus is antrian \n");
    printf("5. EXIT\n");
    printf("Pilihan : ");
    scanf(" %d", &pilih);
    switch(pilih){
        case 1 :
            printf("DATA = ");
            scanf(" %d", &data);
            masukData(data);
            break;
        case 2 :
            printf("Data yg keluar: %d",keluar());
            break;
        case 3 : tampil();break;
        case 4 : hapus();break;



    }

    }while (pilih!=5);
    return 0;
}

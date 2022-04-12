#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *head;

void awal(){
    //untuk isi node awal
    struct node *pointer;
    int item;
    pointer = (struct node *) malloc(sizeof(struct node *));
    if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        pointer->next = head;
        head = pointer;
        printf("\n Data berhasil disimpan di NODE awal!");
    }
}

void akhir(){
    //untuk isi node akhir
    struct node *pointer, *temp;
    int item;
    pointer = (struct node *) malloc(sizeof(struct node *));
     if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        if(head == NULL)
        {
            pointer->next = NULL;
            head = pointer;
            printf("Berhasil menyimpan dalam NODE!!!");
        }
        else
        {
            temp = head;
            while(temp -> next != NULL)
            {
                temp = temp->next;
            }
            temp->next = pointer;
            pointer->next = NULL;
            printf("Data berhasil disimpan di NODE akhir!!!");
        }
    }
}


void sembarang(){
    //untuk isi node sisipan
    int i, lokasi, item;
    struct node *pointer, *temp;
    pointer = (struct node *)malloc(sizeof(struct node*));
    if(pointer == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukkan Data: ");
        scanf("%d", &item);
        pointer->data = item;
        printf("Mau simpan di lokasi mana? ");
        scanf("%d", &lokasi);
        temp = head;
        for(i=0; i<lokasi; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\n Tidak dapat tersimpan!");
                return;
            }
        }
            pointer->next = temp->next;
            temp->next = pointer;
            printf("NODE berhasil disimpan!!");
    }

}

void hapusAwal(){
struct node *ptr;
 if(head == NULL)
    {
        printf("\nList kosong bro!\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE awal berhasil dihapus!\n");
    }


}
void hapusSembarang(){
 struct node *ptr,*temp,*temp2;
    char *data1;
    if(head == NULL){
        printf("List tidak ada\n");
    }else{
        if (head->next != NULL) {
            temp = head;
            while(temp->next->next != NULL) {
                temp = temp->next;
            }
            ptr = temp->next;
            data1 = ptr->data;
            temp->next = NULL;
            free(ptr);
        } else {
            data1 = head->data;
            head = NULL;
        }
        printf("NODE sembarang berhasil dihapus!");
    }
}
void hapusAkhir(){
 struct node *ptr, *temp;

    if (head==NULL)
        printf("Data tidak ada");
    else
    {
        if (head->next==NULL)
        {
            head=NULL;
        }
        else
        {
            ptr=head;
            while (ptr->next!=NULL)
            {
                temp=ptr;
                ptr=ptr->next;
            }
            temp->next=NULL;
            free(ptr);
        }
         printf("NODE akhir berhasil dihapus!");
    }

}
void cetak(){
    // melihat isi linked-list
    struct node *pointer;
    pointer = head;
    if(pointer == NULL)
    {
        printf("Tidak ada data!!");
    }
    else
    {
        printf("Cetak data :\n");
        while(pointer!=NULL)
        {
            printf("%d\n", pointer->data);
            pointer = pointer-> next;
        }
    }
}

int main()
{
    int pilihan = 0;
    do
    {   system("cls");
        printf("\n *********** Menu Latihan Linked List ***********\n");
        printf("\n=====================================================\n");
        printf("\n1. Input data awal \n2. Input data akhir\n3. Input data di sembarang \n4. Lihat data\n5. Hapus data awal\n6. Hapus data sembarang\n7. Hapus data akhir\n8. EXIT\n");
        printf("\nPilihan : ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1:
            system("cls");
            awal();
            break;

            case 2:
            system("cls");
            akhir();
            break;

            case 3:
                system("cls");
            sembarang();
            break;

            case 4:
            system("cls");
            cetak();
            break;

            case 5:
            system("cls");
            hapusAwal();
            break;

            case 6:
            hapusSembarang();
            break;

            case 7:
            hapusAkhir();
            break;

            case 8:
            exit(0);
            break;

            default:
            printf("Pilihan tidak tersedia. Masukkan kembali");
        }
        getch();
        }
        while(pilihan!=8);

       return 0;


}

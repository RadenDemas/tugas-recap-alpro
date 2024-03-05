#include <stdio.h>

int main(){
    int ukuran, nilai;
    int total = 0;
    printf("Berapa panjanga array: ");
    scanf("%d", &ukuran);
    int arr[ukuran];
    for(int i = 0; i<= ukuran;i++){
        printf("Masukkan nilai array");
        scanf("%d", &nilai);
        arr[i] = nilai;
    }
    for(int i = 0; i<=ukuran;i++){
        total += arr[i];
    }
    printf("Hasil jumlah seluruh elemen pada array %d", total);
}
#include <stdio.h>

int main(){
    int sisi;
    printf("Berapa panjang sisi: ");
    scanf("%d", &sisi);
    printf("Keliling persegi = %d\n", keliling_persegi(sisi));
    printf("Luas persegi = %d\n", luas_persegi(sisi));
    printf("Volume kubus = %d", volume_kubus(sisi));
}

int keliling_persegi(int sisi){
    int hasil;
    hasil = 4*sisi;
    return hasil;
}

int luas_persegi(int sisi){
    int hasil;
    hasil = sisi * sisi;
    return hasil;
}

int volume_kubus(int sisi){
    int hasil;
    hasil = sisi * sisi * sisi;
    return hasil;
}
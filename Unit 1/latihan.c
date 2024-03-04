#include <stdio.h>


int main(){
    int jarak1, waktu1;
    int kecepatan2, waktu2;
    int jarak3, kecepatan3;

    printf("Mencari Kecepatan\n");
    printf("Masukkan nilai jarak dan waktu: ");
    scanf("%d" "%d", &jarak1,&waktu1);

    printf("Mencari Jarak\n");
    printf("Masukkan nilai kecepatan dan waktu: ");
    scanf("d" "%d",&kecepatan2,&waktu2);

    printf("Mencari Waktu\n");
    printf("Masukkan nilai jarak dan kecepatan: ");
    scanf("%d" "%d",&jarak3,&kecepatan3);
    
    float hasil_kecepatan = jarak1/waktu1;
    float hasil_jarak = kecepatan2*waktu2;
    float hasil_waktu = jarak3/kecepatan3;
    printf("v = %d / %d = %f",jarak1,waktu1,hasil_kecepatan);
    printf("s = %d / %d = %f",kecepatan2,waktu2,hasil_jarak);
    printf("t = %d / %d = %f",jarak3,kecepatan3,hasil_waktu);
}
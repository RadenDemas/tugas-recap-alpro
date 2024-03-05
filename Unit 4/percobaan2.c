#include <stdio.h>

int kuadrat(int num);

void cetakKuadrat(int num);

int main() {
    int angka = 5;
    int terkuadrat;

    terkuadrat = kuadrat(angka);
    printf("Kuadrat dari %d adalah: %d\n", angka, terkuadrat);

    printf("Mencetak kuadrat dari %d: ", angka);
    cetakKuadrat(angka);

    return 0;
}

int kuadrat(int num) {
    return num * num;
}

void cetakKuadrat(int num) {
    int terkuadrat = num * num;
    printf("%d\n", terkuadrat);
}

//Perbedaan utama antara kedua function di atas adalah 
//function dengan tipe pengembalian (seperti int) harus mengembalikan nilai menggunakan statement return 
//sedangkan function dengan tipe pengembalian void tidak mengembalikan nilai apa pun.
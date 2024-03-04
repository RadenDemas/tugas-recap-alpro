#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

//sebelum perulangan dimulai, code pada baris 7 dan 6 akan dijalankan terlebih dahulu
//lalu pengecekan while loop i akan dijalankan
//setelah pengecekan while loop i telah dijalankan
//code pada baris 11, 12, dan 13 akan dijalankan terlebih dahulu
//lalu pengecekan while loop j akan dijalankan
//ketika while loop j melebihi 3, maka while loop j akan berhenti
//kemudian akan dilanjutkan pada while loop i
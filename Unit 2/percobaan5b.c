#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

//jadi pada perulangan pertama (i) akan menjalankan looping yang dimulai dari 2  dan berakhir pada 3
//kemudian menjalankan looping yang kedua (j) yang merupakan pengali dimulai dari 1 dan berakhir pada 2
//nanti i dan j akan dikalikan
//setelah dikalikan, looping yang kedua (j) akan berulang kembali
//setelah looping yang kedua (j) mencapai lebih dari 3, perulangan kedua akan berhenti
//setelah perulangan kedua berhenti, nilai i akan bertambah satu dan j kembali ke 1
//kemudian perulangan yang pertama akan dijalankan kembali hingga mencapai lebih dari 3
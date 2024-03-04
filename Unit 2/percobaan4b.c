#include <stdio.h>

int i, j;

int main(){
    
    for (i = 2; i <= 3; ++i) {
        printf("Bilangan utama: %d\n", i);
        
        for (j = 1; j <= 2; ++j) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            }
        
    }

    return 0;
}

//jadi pada perulangan pertama (i) akan menjalankan looping yang dimulai dari 2  dan berakhir pada 3
//kemudian menjalankan looping yang kedua (j) yang merupakan pengali dimulai dari 1 dan berakhir pada 2
//nanti i dan j akan dikalikan
//setelah dikalikan, looping yang kedua (j) akan berulang kembali
//setelah looping yang kedua (j) mencapai lebih dari 3, perulangan kedua akan berhenti
//lalu setelah perulangan kedua selesai, perulangan yang pertama akan dijalankan kembali 
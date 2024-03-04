#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

//scanf berarti user harus memberikan input pada program
//dan value dari input scanf itu hanya bernilai satu kata
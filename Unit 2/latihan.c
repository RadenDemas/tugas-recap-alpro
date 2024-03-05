#include <stdio.h>

int main(){
    int jumlah_transaksi,nominal;
    int total = 0;
    printf("Berapa banyak total transaksi har ini: ");
    scanf("%d", &jumlah_transaksi);
    if(jumlah_transaksi<=0){
        printf("Tidak ada transaksi hari ini");
    }
    else{
        for(int i = 0; i<=jumlah_transaksi;i++){
            printf("Berapa nominal pengeluaran %d", i);
            scanf("%d", &nominal);
            total += nominal;
        }   
        printf("Total pengeluaran hari ini %d", total);
    }
    
}
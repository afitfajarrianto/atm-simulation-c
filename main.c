#include "atm.h"

int main(){
    int pin = 231206;
    int percobaan = 0;
    int inputPIN;
    int login = 0;
    int pilihan;

    banner();
    while (percobaan < 3 && login == 0){
        printf(" Masukkan PIN Anda: ");
        scanf("%d", &inputPIN);
        
        if (inputPIN == pin){
            printf(GREEN" lalala yeyeye" RESET "\n");
            printf(GREEN " PIN Benar."RESET"\n");
            printf("\n");
            login = 1;
        } else{
            percobaan++;
            printf(RED " PIN Salah!!!"RESET"\n");
        }
    }
    
    if (login == 0){
        printf(RED"Kartu di Blokir."RESET"\n");
        return 0;
    }
    menu();
    return 0;
}
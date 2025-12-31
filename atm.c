#include "atm.h"
int saldo = 1000000;



void banner(){
    printf("                                 \n");
    printf("      ██╗██╗  ██╗██████╗ ███████╗\n");
    printf("      ██║██║  ██║██╔══██╗╚══███╔╝\n");
    printf("      ██║███████║██████╔╝  ███╔╝ \n");
    printf(" ██   ██║╚════██║██╔══██╗ ███╔╝  \n");
    printf(" ╚█████╔╝     ██║██║  ██║███████╗\n");
    printf("  ╚════╝      ╚═╝╚═╝  ╚═╝╚══════╝\n");
    printf("                                 \n");
}

void menuAwal(){
    printf("\n");
    printf(" =====================================\n");
    printf(" Silahkan Memilih Transaksi\n");
    printf(" 1. Setoran Tunai\n");
    printf(" 2. Penarikan Tunai/Transaksi lainnya\n");
    printf(" 3. Cancel\n");
    printf("=====================================\n");
}

void menuPenarikan(){
    printf("\n");
    printf("=====================================\n");
    printf("1. Rp.100.000\n");
    printf("2. Rp.500.000\n");
    printf("3. Rp.1.000.000\n");
    printf("4. Rp.1.500.000\n");
    printf("5. Rp.2.000.000\n");
    printf("6. Rp.2.500.000\n");
    printf("7. Transaksi Lainnya\n");
    printf("=====================================\n");
}

void transaksiLainnya(){
    printf("\n");
    printf("=====================================\n");
    printf("1. Transfer Dana\n");
    printf("2. Penarikan Tunai\n");
    printf("3. Informasi Cek Saldo\n");
    printf("=====================================\n");
}

void menu(){
    // Variabel
    int pilihan = 0; // variabel untuk menampung pilihan user
    char validasi = 'y'; // variabel validasi
    printf("=====================================\n");
    printf("        SELAMAT DATANG di ATM        \n");
    printf("=====================================\n");

    // jika pilihan bukan 3 (exit) dan pilihan bukan 'y' / 'Y' maka looping terus berjalan
    while (pilihan != 3 && (validasi == 'y' || validasi == 'Y')){
        menuAwal();
        printf("Masukkan Pilihan Anda: ");
        scanf("%d", &pilihan); // meminta user menginput pilihan 1-3
    
        switch (pilihan){
        case 1:
            int nominalSetor; // variabel nominal uang yang akan di setorkan
            printf("Masukkan Nominal yang ingin disetor: ");
            scanf("%d", &nominalSetor);

            printf("Jumlah Nominal : %d\n", nominalSetor);
            saldo = saldo + nominalSetor; // penjumlahan saldo dan nominal yang di setor
            printf("Saldo Anda: Rp.%d\n", saldo);

            printf(RED"Apakah ingin lanjut transaksi (y/n): " RESET);
            scanf(" %c", &validasi);
            break;
        case 2:
            int nominal; // variabel untuk menampung nominal penarikan
            menuPenarikan(); // menu penarikan
            // input pilihan User
            printf("Pilihan anda: ");
            scanf("%d", &nominal);
            
            switch (nominal){
            case 1:
                if (saldo >= 100000){
                    saldo = saldo - 100000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                
                break;
            case 2:
                if (saldo >= 500000){
                    saldo = saldo - 500000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                break;
            case 3:
                if (saldo >= 1000000){
                    saldo = saldo - 1000000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                break;
            case 4: 
                if (saldo >= 1500000){
                    saldo = saldo - 1500000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                break;
            case 5:
                if (saldo >= 2000000){
                    saldo = saldo - 2000000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                break;
            case 6:
                if (saldo >= 2500000){
                    saldo = saldo - 2500000;
                    printf("Saldo anda: Rp.%d\n", saldo);
                } else{
                    printf(RED"Saldo tidak mencukupi!\n"RESET);
                }
                break;
            case 7:
                transaksiLainnya();
                int pilihMenu;
                int nominal;
                printf("Masukkan Pilihan Anda: ");
                scanf("%d", &pilihMenu);

                switch (pilihMenu){
                case 1:
                    int rekening;
                    char konfirmasi;
                    printf("Masukkan Nomor Rekening: ");
                    scanf("%d", &rekening);
                    printf("Masukkan Nominal Tanpa Titik (contoh: 100000)\n");
                    printf("Masukkan Nominal: ");
                    scanf("%d", &nominal);
                    
                    nominal = nominal + 2500;
                    printf("Konfirmasi Transfer Dana\n");
                    printf("Nomor Rekening : %d\n", rekening);
                    printf("Nominal Transfer : %d\n", nominal);
                    if (saldo >= nominal){
                        printf(RED"Apakah anda yakin (y/n)? "RESET);
                        scanf(" %c", &konfirmasi);
    
                        if (konfirmasi == 'y'){
                            saldo = saldo - nominal;
                            printf("Transfer Berhasill\n");
                        } else{
                            return;
                        }
                    } else{
                        printf(RED"Saldo tidak mencukupi!\n"RESET);
                    }
                    
                    break;
                case 2:
                    printf("Masukkan Nominal Tanpa Titik (contoh: 100000)\n");
                    printf("Masukkan Nominal: ");
                    scanf("%d", &nominal);
                    if (saldo >= nominal){
                        saldo = saldo - nominal;
                    } else{
                        printf(RED"Saldo tidak mencukupi!\n"RESET);
                    }
                    
                    break;
                case 3:
                    printf("Saldo Anda:\n");
                    printf("Rp.%d\n", saldo);
                    break;
                default:
                    printf(RED"Pilihan tidak Valid!!!"RESET"\n");
                    break;
                }
                break;
            default:
                printf(RED"Pilihan tidak Valid!!!"RESET"\n");
                break;
            }

            // validasi apakah ingin lanjut transaksi atau tidak
            printf(RED"Apakah ingin lanjut transaksi (y/n): " RESET);
            scanf(" %c", &validasi);
            break;
        case 3:
            printf("Terimakasih sudah menggunakan ATM.\n");
            return;
            break;
        default:
            printf(RED"Pilihan Tidak Valid!!!"RESET"\n");
            break;
        }
    }
    printf("Terimakasih sudah menggunakan ATM.\n");
}
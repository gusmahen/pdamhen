#include <stdio.h>
#include <stdlib.h>

int main (){

	char i;
	char nama[15], pegawai[15];
	char id[20], password[20];
	int tarif_meter=7000;
	int admin = 10000;
	int debit_air;
	int tagihan;
	int pdam;
	int tgl;
	int gol;

	do{
		// INPUT USERNAME DAN PASSWORD
		system ("cls");
		printf ("\n \n");
		printf ("\t \t \t \t Nama Pegawai  : "); scanf("%s", &pegawai);
		printf ("\n");
		printf ("\t \t \t \t Username      : "); scanf("%s", &id);
		printf ("\t \t \t \t Password      : "); scanf("%s", &password);
		printf ("\t \t \t  ____________________________\n");

		if(strcmp(id,"admin")==0 && strcmp(password,"admin")==0){

		do {
			// MENU UTAMA
		system ("cls");
		printf ("\n \n");
		printf ("\t \t \t ---------------------------------------------\n");
		printf ("\t \t \t --       PROGRAM HITUNG TAGIHAN PDAM       --\n");
		printf ("\t \t \t ---------------------------------------------\n \n");
		printf ("\t \t \t ===   DAFTAR GOLONGAN PDAM RUMAH TANGGA   ===\n");
		printf ("\t \t \t ===                                       ===\n");
		printf ("\t \t \t ===         > 1. Golongan 2A1 <           ===\n");
		printf ("\t \t \t ===         > 2. Golongan 2A2 <           ===\n");
		printf ("\t \t \t ===         > 3. Golongan 2A3 <           ===\n");
		printf ("\t \t \t ===         > 4. Golongan 2A4 <           ===\n");
		printf ("\t \t \t ===         > 5. Golongan 2B  <           ===\n");
		printf ("\t \t \t _____________________________________________\n \n");
		printf ("\t \t \t >> Masukkan golongan (1-5)   : "); scanf ("%d", &gol);


		if (gol==1){

			system ("cls");
			printf ("\n \n \t \t \t        ====== GOLONGAN 2A1 =====  \n \n");							// Golongan 2A1
			printf ("\t \t \t >> Nama Pelanggan      : "); scanf ("%s", &nama);
			printf ("\t \t \t >> Nomor PDAM          : "); scanf ("%d", &pdam);
			printf ("\t \t \t >> Pemakaian Air (m3)  : "); scanf ("%d", &debit_air);
			printf ("\t \t \t >> Tanggal Pembayaran  : "); scanf ("%d", &tgl);

			if (debit_air >=1 && debit_air <=10){

				if (tgl >=1 && tgl<=14){
					tagihan = (1000*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.1000,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (1000*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.1000,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			if (debit_air >=11 && debit_air <=20){

				if (tgl >=1 && tgl<=14){
					tagihan = (1600*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.1600,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (1600*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.1600,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			else if (debit_air >20){

				if (tgl >=1 && tgl<=14){
					tagihan = (2300*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.2300,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else if (tgl>=15 && tgl <=32){
					tagihan = (2300*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.2300,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan   : Rp.2500,- \n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}
		}


		else if (gol==2){
			system ("cls");
			printf ("\n \n \t \t \t        ====== GOLONGAN 2A2 =====  \n \n");							// Golongan 2A2
			printf ("\t \t \t >> Nama Pelanggan      : "); scanf ("%s", &nama);
			printf ("\t \t \t >> Nomor PDAM          : "); scanf ("%d", &pdam);
			printf ("\t \t \t >> Pemakaian Air (m3)  : "); scanf ("%d", &debit_air);
			printf ("\t \t \t >> Tanggal Pembayaran  : "); scanf ("%d", &tgl);

			if (debit_air >=1 && debit_air <=10){

				if (tgl >=1 && tgl<=14){
					tagihan = (2000*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.2000,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (2000*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.2000,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			if (debit_air >=11 && debit_air <=20){

				if (tgl >=1 && tgl<=14){
					tagihan = (3600*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.3600,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (3600*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.3600,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			else if (debit_air >20){

				if (tgl >=1 && tgl<=14){
					tagihan = (5700*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.5700,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else if (tgl>=15 && tgl <=32){
					tagihan = (5700*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.5700,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan   : Rp.2500,- \n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}
		}


		else if (gol==3){
			system ("cls");
			printf ("\n \n \t \t \t        ====== GOLONGAN 2A3 =====  \n \n");							// Golongan 2A3
			printf ("\t \t \t >> Nama Pelanggan      : "); scanf ("%s", &nama);
			printf ("\t \t \t >> Nomor PDAM          : "); scanf ("%d", &pdam);
			printf ("\t \t \t >> Pemakaian Air (m3)  : "); scanf ("%d", &debit_air);
			printf ("\t \t \t >> Tanggal Pembayaran  : "); scanf ("%d", &tgl);

			if (debit_air >=1 && debit_air <=10){

				if (tgl >=1 && tgl<=14){
					tagihan = (2600*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.2600,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (2600*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.2600,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			if (debit_air >=11 && debit_air <=20){

				if (tgl >=1 && tgl<=14){
					tagihan = (4600*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.4600,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (4600*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.4600,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			else if (debit_air >20){

				if (tgl >=1 && tgl<=14){
					tagihan = (7400*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.7400,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else if (tgl>=15 && tgl <=32){
					tagihan = (7400*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.7400,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan   : Rp.2500,- \n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}
		}


		else if (gol==4){
			system ("cls");
			printf ("\n \n \t \t \t        ====== GOLONGAN 2A4 =====  \n \n");							// Golongan 2A4
			printf ("\t \t \t >> Nama Pelanggan      : "); scanf ("%s", &nama);
			printf ("\t \t \t >> Nomor PDAM          : "); scanf ("%d", &pdam);
			printf ("\t \t \t >> Pemakaian Air (m3)  : "); scanf ("%d", &debit_air);
			printf ("\t \t \t >> Tanggal Pembayaran  : "); scanf ("%d", &tgl);

			if (debit_air >=1 && debit_air <=10){

				if (tgl >=1 && tgl<=14){
					tagihan = (3300*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.3300,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (3300*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.3300,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			if (debit_air >=11 && debit_air <=20){

				if (tgl >=1 && tgl<=14){
					tagihan = (6000*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.6000,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (6000*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.6000,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			else if (debit_air >20){

				if (tgl >=1 && tgl<=14){
					tagihan = (9400*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.9400,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else if (tgl>=15 && tgl <=32){
					tagihan = (9400*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.7400,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan   : Rp.2500,- \n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}
		}


		else if (gol==5){
			system ("cls");
			printf ("\n \n \t \t \t        ====== GOLONGAN 2B =====  \n \n");							// Golongan 2B
			printf ("\t \t \t >> Nama Pelanggan      : "); scanf ("%s", &nama);
			printf ("\t \t \t >> Nomor PDAM          : "); scanf ("%d", &pdam);
			printf ("\t \t \t >> Pemakaian Air (m3)  : "); scanf ("%d", &debit_air);
			printf ("\t \t \t >> Tanggal Pembayaran  : "); scanf ("%d", &tgl);

			if (debit_air >=1 && debit_air <=10){

				if (tgl >=1 && tgl<=14){
					tagihan = (2100*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.2100,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (2100*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.2100,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			if (debit_air >=11 && debit_air <=20){

				if (tgl >=1 && tgl<=14){
					tagihan = (3800*debit_air) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.3800,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total Tagihan PDAM anda adalah sebesar Rp.%d,- \n", tagihan);
				}

				else if (tgl>=15 && tgl<32){
					tagihan = (3800*debit_air) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai           : %s \n \n", id);
					printf ("\t \t \t >> Nama Pelanggan         : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM             : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)    : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1 m3) : Rp.3800,- \n");
					printf ("\t \t \t >> Tarif Meter            : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin            : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan    : Rp.2500,- \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}

			else if (debit_air >20){

				if (tgl >=1 && tgl<=14){
					tagihan = (6000*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.6000,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan\n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else if (tgl>=15 && tgl <=32){
					tagihan = (6000*debit_air) + ((debit_air-20)*1000) + tarif_meter + admin + 2500;
					system ("cls");
					printf ("\n \n \n");
					printf ("\t \t \t >> Nama Pegawai          : %s \n \n", pegawai);
					printf ("\t \t \t >> Nama Pelanggan        : %s \n", nama);
					printf ("\t \t \t >> Nomor PDAM            : %d \n", pdam);
					printf ("\t \t \t >> Penggunaan Air (m3)   : %d \n", debit_air);
					printf ("\t \t \t >> Tarif Dasar (per 1m3) : Rp.6000,- \n");
					printf ("\t \t \t >> Tarif Meter           : Rp.7000,- \n");
					printf ("\t \t \t >> Biaya Admin           : Rp.10000,-\n");
					printf ("\t \t \t >> Denda Keterlambatan   : Rp.2500,- \n");
					printf ("\t \t \t >> Denda Kelebihan       : Rp.1000,- per m3 kelebihan \n");
					printf ("\t \t \t _______________________________________");
					printf ("\n \n \t \t \t Total tagihan PDAM anda adalah sebesar Rp.%d,- \n",tagihan);
				}

				else{
					printf ("\t \t \t _______________________________________\n \n");
					printf ("\t \t \t Input tanggal yang anda masukkan salah!\n");
				}
			}
		}

		else{
			printf ("\n \t \t \t Maaf, Input anda salah! \n");
		}
			printf ("\n \t \t \t >> Coba input lagi? (y/t) : "); scanf (" %s", &i);
   		}
			while (i=='Y' || i=='y');
			printf ("\n \t \t Terimakasih, tekan enter untuk keluar. \n");
		}
		else if(strcmp (id,"admin)!=0 && strcmp(password,"admin")==0){
	   		printf ("\n \t \t \t \t Username Salah !");
	   		printf ("\n \n \t \t \t  ---------------------------- \n");
   			printf ("\n \t \t \t >> Coba input lagi? (y/t) : "); scanf (" %s", &i);
   			printf ("\n \t \t \t Terimakasih, tekan enter untuk keluar. \n");
  			}

   		else if(strcmp (id,"admin")==0 && strcmp(password,"admin")!=0){
   			printf ("\n \t \t \t \t Password Salah !");
	   		printf ("\n \n \t \t \t  ---------------------------- \n");
   			printf ("\n \t \t \t >> Coba input lagi? (y/t) : "); scanf (" %s", &i);
   			printf ("\n \t \t \t Terimakasih, tekan enter untuk keluar. \n");
   			}

   		else if(strcmp (id,"admin")!=0 && strcmp(password,"admin")!=0){
   			printf ("\n \t \t \t  Username dan Password Salah !");
	   		printf ("\n \n \t \t \t  ---------------------------- \n");
   			printf ("\n \t \t \t >> Coba input lagi? (y/t) : "); scanf (" %s", &i);
   			printf ("\n \t \t \t Terimakasih, tekan enter untuk keluar. \n");
   			}
   }
   while (i=='Y' || i=='y');
}

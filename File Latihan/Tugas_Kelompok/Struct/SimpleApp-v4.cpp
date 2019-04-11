/*
	TUGAS :

	- LOGIN 3X Salah
	- MASUK KE FORM MENU
		> INVENTORY (TOKO BUKU)
			> BANYAK DATA : (Bebas)
		> TAMPIL DATA
		> EXIT

	- DATA BUKU
	===============================================================================
	  NO  | KODE |			JUDUL BUKU			     |   JENIS   | HARGA SATUAN | JUMLAH
	===============================================================================
	  1   |  001 |    Jalan-jalan di Kota Tua   |  Komik	  |   15.000     | 30
	  2   |  002 |    		Sindo News    		  |  Majalah  |   25.000     | 50
	  3   |  004 |    Kan ku kejar sampai dapat |  Novel	  |   55.000     | 150
	===============================================================================
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char kode[5], judul[100], jenis[100];
	int harga, jumlah;
} Buku;

//TO SHOW LINE
void line()
{
	printf("============================================== \n");
}

//TO MOVE INTO THE NEXT LINE
void move()
{
	printf("\n");
}

//TO SHOWS THE MENU
void ShowListMenu()
{
	clrscr();
	line();
	printf("         TOKO BUKU SUMBER ILMU \n");
	line();
	move();
	printf("MENU APLIKASI : \n");
	line();
	printf("A > [ INPUT DATA BUKU  ] \n");
	printf("B > [ TAMPIL DATA BUKU ] \n");
	printf("L > [ LOGOUT APLIKASI  ] \n");
	printf("X > [ EXIT PROGRAM     ] \n");
	move();
}

//AUTHENTICATION USER
LoginUser()
{
	char user[10], pass[10];
	bool isValid = false;
	int counter = 0;

	//for hidden input password
	char tempChar = ' ';
	int x = 0;

   	line();
	printf("          AUTHENTICATION USER \n");
   	line();

	move();

	//HANDLE LOGIN ATTEMPS UNTIL 3X
	while((isValid == false) && (counter < 3)) {

  		printf("Masukkan Username : ");
		scanf("%s", &user);

		printf("Masukkan password : ");
		
		//TO HIDE THE INPUT PASSWORD
		while(x <= 9) {
			pass[x] = getch();
			tempChar = pass[x];

			if(tempChar == 13) {
				break;
			} else {
				printf("*");
			}
			x++;
		}

		pass[x] = '\0';
		x = 0;

		//scanf("%s", &pass);

		if( (strcmp(user, "admin") == 0) && (strcmp(pass, "admin") == 0) ) {
			ShowListMenu();
			isValid = true;
		} else {
			move();
			move();
			printf("\a\a\a\a");
			printf("[ USERNAME ATAU PASSWORD ANDA SALAH! ]\n");
			move();
			counter+=1;
		}

		if(counter == 3){
			clrscr();
			printf("[ ANDA TELAH 3X GAGAL ]\n");
			printf("Silahkan tekan [ENTER] untuk keluar \n");
		}
	}

	return isValid;
}

void LogoutMessage()
{
	printf("[ ANDA TELAH KELUAR! ] \n");
	printf("Silahkan tekan [ENTER] untuk keluar Program! \n");
}

void Terminate()
{
	clrscr();
	exit(0);
}

//CORE FUNCTION
main()
{
	char kodeMenu[2], backMenu[2];
	bool validKodeMenu = false;
	int nBuku = 0;
	Buku buku[100];
	bool isLogin = LoginUser();
	int n, TempData;

	if(isLogin == true) {
		rootMenu:
			clrscr();
			ShowListMenu();
			do{
				printf("Masukkan kode menu [A/B/L/X] : ");
				scanf("%s", &kodeMenu);

				if( (strcmp(kodeMenu, "A") == 0) || (strcmp(kodeMenu, "B") == 0) || (strcmp(kodeMenu, "X") == 0) || (strcmp(kodeMenu, "L") == 0)) {
		  			validKodeMenu = true;
		  		} else {
					printf("\a\a");
					printf("[ KODE MENU YANG ANDA MASUKKAN SALAH! ]");
					move();
					move();
					validKodeMenu = false;
				}
			}while(validKodeMenu == false);

			if (strcmp(kodeMenu, "A") == 0) {
				clrscr();
				if (nBuku > 0){
					TempData = n;
				} else {
					TempData = 0;
				}

				/*				
					printf("Tempdata => [ %d ] \n", TempData);	//3 => 2
					printf("N        => [ %d ] \n", n);			//3	=> 5
					printf("N-Buku   => [ %d ] \n", nBuku); 	//3	=> 2
				*/

				do{
					printf("Masukkan banyak buku : ");			//2
					scanf("%d", &nBuku);

					if(nBuku <= 0) {
						move();
						printf("\a\a");
						printf("Jumlah buku yang diinput tidak boleh kurang/sama dengan [NOL]!\n");
						move();
						line();
					}
				}while(nBuku <= 0);
				
				n = nBuku + n;						//5 + 2 = 7

				clrscr();
				printf("[ INPUT DATA BUKU ] \n");
				move();
				for(int i=TempData; i<n; i++) {				//i=5; i<7;
					line();
					printf("INPUT DATA BUKU KE-%d \n", i+1);
					line();
					move();

					printf("Masukkan kode buku   : ");
					scanf("%s", &buku[i].kode);

					printf("Masukkan judul buku  : ");
					scanf("%s", &buku[i].judul);

					printf("Masukkan jenis buku  : ");
					scanf("%s", &buku[i].jenis);

					printf("Masukkan harga buku  : ");
					scanf("%s", &buku[i].harga);

					printf("Masukkan jumlah buku : ");
					scanf("%s", &buku[i].jumlah);
					move();
				}

				printf("Apakah Anda ingin kembali ke [MENU AWAL] ? [Y/T] : ");
				scanf("%s", &backMenu);

				if ((strcmp(backMenu, "Y") == 0) || (strcmp(backMenu, "y") == 0)){
					goto rootMenu;
				} else {
					Terminate();
				}


			} else if(strcmp(kodeMenu, "B") == 0) {
				clrscr();
				if (nBuku > 0){
	      		n = nBuku + TempData;

					printf("[ OUTPUT DATA BUKU ] \n");
					move();
					for (int j=0; j<n; j++) {
						line();
						printf("OUTPUT DATA BUKU KE-%d \n", j+1);
						line();
						move();
						printf("Kode buku   : %s \n", buku[j].kode);
						printf("Judul buku  : %s \n", buku[j].judul);
						printf("Jenis buku  : %s \n", buku[j].jenis);
						printf("Harga buku  : %d \n", buku[j].harga);
						printf("Jumlah buku : %d \n", buku[j].jumlah);
						move();
					}
				} else {
					printf("[ DATA BUKU KOSONG! ] \n");
					printf("Silahkan input data buku terlebih dahulu untuk menampilkan data buku!\n");
					move();
					line();
					move();
				}

				printf("Apakah Anda ingin kembali ke [MENU AWAL] ? [Y/T] : ");
				scanf("%s", &backMenu);

				if ((strcmp(backMenu, "Y") == 0) || (strcmp(backMenu, "y") == 0)){
					goto rootMenu;
				} else {
					Terminate();
				}
			} else if(strcmp(kodeMenu, "X") == 0) {
				clrscr();
				LogoutMessage();
			} else if(strcmp(kodeMenu, "L") == 0) {
				clrscr();
				printf("[ ANDA TELAH KELUAR! ] \n");
				printf("Silahkan tekan [ENTER] untuk login kembali \n");
				printf("Atau tekan [ESC] untk keluar Program! \n");

            char response = getch();
				if (response == 13){
					clrscr();
					if(LoginUser() == true) {
						goto rootMenu;
					}
				} else if(response == 27) {
					Terminate();
				}
			}
	}
	getch();
}
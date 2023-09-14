#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

struct Mahasiswa{
	string nama = "None";
	string nrp = "None";
	int umur = 0;
	bool gender = 0;
	bool status = false;
}sangmaha[5];

int main() {
	int empty;
	int input=0;
	
	while(input!=5){
		system("cls");
		cout << "---= [MAIN MENU] =---\n\n";
		cout << "[1]. Menambah Data\n";
		cout << "[2]. Menghapus Data\n";
		cout << "[3]. Mengubah Data\n";
		cout << "[4]. Menampilkan Data\n";
		cout << "[5]. Exit\n";
		cout << ">> "; cin >> input;
		
		switch(input){
			case 1:
				int noUrut;
				char genderChoice;
				system("cls");
				cout << "--= [Menambah Data] =--\n\n";
				cout << "Masukkan No. Urut Mahasiswa (1-5): "; cin >> noUrut;
				noUrut-1;
				cout << "Masukkan Nama: "; cin >> sangmaha[noUrut].nama;
				cout << "Masukkan NRP: "; cin >> sangmaha[noUrut].nrp;
				cout << "Masukkan Umur: "; cin >> sangmaha[noUrut].umur;
				cout << "Pilih Gender: \nLaki (0)  \nPerempuan (1)\n>> "; cin >> sangmaha[noUrut].gender;
				cout << "\n[!] Penambahan Data Berhasil [!]";
				sangmaha[noUrut].status = true;
				getch();
				break;
				
			case 2:
				system("cls");
				cout << "--=[Menghapus Data]=--\n\n";
				cout << "No. urut mahasiswa yang ingin dihapus: "; cin >> noUrut;
				noUrut-1;
				sangmaha[noUrut].status = false;
				cout << "[!] Data Berhasil Dihapus [!]";
				getch();
				break;
				
			case 3:
				system("cls");
				cout << "--=[Mengubah Data]=--\n\n";
				cout << "No. urut mahasiswa yang ingin diubah: "; cin >> noUrut;
				noUrut-1;
				while(sangmaha[noUrut].status==false){
					cout << "\n\n[!] Data Belum di-Input [!]";
					getch();
					system("cls");
					
					cout << "--=[Mengubah Data]=--\n\n";
					cout << "No. urut mahasiswa yang ingin diubah: "; cin >> noUrut;
					noUrut-1;
				}
				cout << "Masukkan Nama: "; cin >> sangmaha[noUrut].nama;
				cout << "Masukkan NRP: "; cin >> sangmaha[noUrut].nrp;
				cout << "Masukkan Umur: "; cin >> sangmaha[noUrut].umur;
				cout << "Pilih Gender: \nLaki (0)  \nPerempuan (1)\n>> "; cin >> sangmaha[noUrut].gender;
				cout << "\n\n[!] Data Berhasil Diubah [!]";
				getch();
				break;
				
			case 4:
				int showUrut;
				system ("cls");
				cout << "--= [Menampilkan Data] =--\n\n";
				cout << "No. Urut mahasiswa yang ingin ditampilkan: "; cin >> showUrut;
				showUrut-1;
				
				if(sangmaha[showUrut].status==false){
					cout << "\n[!] Data Tidak Ditemukan/Terhapus [!]";
				}else{
					cout << "\nNama Mahasiswa: " << sangmaha[showUrut].nama;
					cout << "\nNRP Mahasiswa: " << sangmaha[showUrut].nrp;
					cout << "\nUmur Mahasiswa: " << sangmaha[showUrut].umur;
					if(sangmaha[showUrut].gender==0){
						cout << "\nGender Mahasiswa: Laki-Laki";
					}else{
						cout << "\nGender Mahasiswa: Perempuan";
					}
				}
				getch();
				break;
				
			case 5:	
				cout << "\n\n[!] Goodbye [!]\n\n";
				break;
				
			default:
				cout << "\n\n[!] Pilihan Tidak Tersedia [!]";
				getch();
		};
	};

		
	
	return 0;
}

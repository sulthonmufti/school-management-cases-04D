#include <fstream>
#include <iomanip>
#include <iostream>
//#include "191.h"
//#include "211.h"
//#include "213.h"
//#include "ktp.h"
//#include "array1d.h"
using namespace std;

class Manajemen{

public:
  void menusiswa_prestasi();
  void tambahsiswa_depan();
  void buatsiswa_baru();
  void tampilsiswa();
  void tambahsiswa_belakang();
  void hapussiswa_depan();
  void hapussiswa_belakang();
  void tulisdatasiswa();
  void pidahsiswa_sebelum();
  void pidahsiswa_sesudah();
  void tambahsiswa_tengah();
  void Hapussiswa_tengah();

private:
int pilsiswa, i, jsiswa, siswakode[8],siswaprestasi[8];
string siswanama[8];
ofstream siswaku;
};

struct siswa
{
  char kodesiswa[8], namasiswa[80];
  int prestasisiswa;
  struct siswa *next;
} mhs, *barusiswa, *awalsiswa = NULL, *akhirsiswa = NULL, *hapussiswa, *bantusiswa;

void Manajemen::menusiswa_prestasi(){
  siswa:
  cout << "=============================================" << endl;
  cout << "==         MENU SISWA BERPRESTASI          ==" << endl;
  cout << "== 1) Tambah data siswa ke daftar Depan    ==" << endl;
  cout << "== 2) Tambah data siswa ke daftar Belakang ==" << endl;
  cout << "== 3) Hapus data siswa di daftar Depan     ==" << endl;
  cout << "== 4) Hapus data siswa di daftar Belakang  ==" << endl;
  cout << "== 5) Tampilan daftar siswa dan karyawan   ==" << endl;
  cout << "== 6) Tulis data untuk user               ==" << endl;
  cout << "== 7) kembali ke menu                     ==" << endl;
  cout << "============================================" << endl;
  cout << "Pilihan anda: ";
  cin >> pilsiswa;
  cout << "=======================================" << endl;
  
  switch (pilsiswa)
  {
  case 1:
    tambahsiswa_depan();
    break;
    
  case 2:
    tambahsiswa_belakang();
    break;
    
  case 3:
    hapussiswa_depan();
    break;
    
  case 4:
    hapussiswa_belakang();
    break;
    
  case 5:
    tampilsiswa();
    menusiswa_prestasi();
    break;
    
  case 6:
    tulisdatasiswa();
    break;
    
  case 7:
    //menu();
    break;
    
  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    cout << endl;
    break;
  }
}

void Manajemen::tambahsiswa_depan()
{
  buatsiswa_baru();
  if (awalsiswa == NULL)
  {
    awalsiswa = barusiswa;
    akhirsiswa = barusiswa;
    akhirsiswa->next = NULL;
  } else
  {
    barusiswa->next = awalsiswa;
    awalsiswa = barusiswa;
  }
  cout << endl << endl;
  tampilsiswa();
  menusiswa_prestasi();
}

void Manajemen::buatsiswa_baru()
{
  barusiswa = (siswa *)malloc(sizeof(struct siswa));
  cout << "Input Kode siswa : ";
  cin >> barusiswa->kodesiswa;
  cout << "Input Nama siswa : ";
  cin >> barusiswa->namasiswa;
  cout << "Input jumlah prestasi siswa : ";
  cin >> barusiswa->prestasisiswa;
  barusiswa->next = NULL;
}

void Manajemen::tampilsiswa()
{
  ofstream siswaku;
  siswaku.open("daftarSiswaBerprestasi.txt");
  
  if (awalsiswa == NULL)
  {
    cout << "Kosong" << endl;
    menusiswa_prestasi();
    cout << endl;
  } else
  {
    bantusiswa = awalsiswa;
    siswaku << "+-----------------------------------------------+" << endl;
    siswaku << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4) << " Nama  " << setw(4) << " | " << setw(4) << " jumlah prestasi " << setw(4) << " |" << endl;
    siswaku << "+-----------------------------------------------+" << endl;
     cout << "+-----------------------------------------------+" << endl;
    cout << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4) << " Nama  " << setw(4) << " | " << setw(4) << " jumlah prestasi " << setw(4) << " |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    
    while (bantusiswa != NULL)
    {
      cout << "| " << setw(4) << bantusiswa->kodesiswa << setw(4) << " | " << setw(4) << bantusiswa->namasiswa << setw(4) << " | " << setw(4) << bantusiswa->prestasisiswa << setw(4) << " |" << endl;
      cout << "+-----------------------------------------------+" << endl;
      siswaku << "| " << setw(4) << bantusiswa->kodesiswa << setw(4) << " | " << setw(4) << bantusiswa->namasiswa << setw(4) << " | " << setw(4) << bantusiswa->prestasisiswa << setw(4) << " |" << endl;
      siswaku << "+-----------------------------------------------+" << endl;
      // cout << "----------------------------------------" << endl;

      cout << endl;
      bantusiswa = bantusiswa->next;
    }
  }
 
  siswaku.close();
}

//Deklarasi void tulisdata pada class manajemen
//untuk menulid data guru untuk sebagai tampilan user dan pencarian data guru
void Manajemen::tulisdatasiswa()
{
  cout << "Masukkann jumlah guru dan karyawan : ";
  cin >> jsiswa;
  for (i = 0; i < jsiswa; i++)
  {
    cout << "Kode siswa : ";
    cin >> siswakode[i];
    cout << "Nama Guru / Karyawan : ";
    cin >> siswanama[i];
    cout << "Umur Guru / Karyawan : ";
    cin >> siswaprestasi[i];
    cout << "---------------------------------------------" << endl;
  }
  menusiswa_prestasi();
}

void Manajemen::tambahsiswa_belakang()
{
  buatsiswa_baru();
  if (awalsiswa == NULL)
  {
    awalsiswa = barusiswa;
  } else
  {
    akhirsiswa->next = barusiswa;
  }
  akhirsiswa = barusiswa;
  akhirsiswa->next = NULL;
  cout << endl << endl;
  
  tampilsiswa();
  menusiswa_prestasi();
}

void Manajemen::hapussiswa_depan()
{
  if (awalsiswa == NULL)
  {
    cout << "kosong";
  } else
  {
    hapussiswa = awalsiswa;
    awalsiswa = awalsiswa->next;
    free(hapussiswa);
  }
  cout << endl << endl;
  tampilsiswa();
  menusiswa_prestasi();
}

void Manajemen::hapussiswa_belakang()
{
  if (awalsiswa == NULL)
  {
    cout << "Kosong";
  } else if (awalsiswa == akhirsiswa)
  {
    hapussiswa = awalsiswa;
    awalsiswa = awalsiswa->next;
    free(hapussiswa);
  } else
  {
    hapussiswa = awalsiswa;
    while (hapussiswa->next != akhirsiswa)
    {
      hapussiswa = hapussiswa->next;
      akhirsiswa = hapussiswa;
      hapussiswa = akhirsiswa->next;
      akhirsiswa->next = NULL;
      free(hapussiswa);
    }
  }
  cout << endl << endl;
  
  tampilsiswa();
  menusiswa_prestasi();
}

//Deklarasi pindaguru_sebelum pada class manajemen
//untuk memindahkan urutan data guru ke posisi sebelumya========================={
void Manajemen::pidahsiswa_sebelum()
{
  if (bantusiswa->next == NULL)
  {
 		cout << "Kamu berada pada akhir list." << endl;
    }else
  {
 		bantusiswa =bantusiswa->next;
  }
}

//Deklarasi pindahguru_sesudah pada class manajemen
//untuk memindahkan urutan data guru ke posisiberikutnya
void Manajemen::pidahsiswa_sesudah()
{
  if (bantusiswa == awalsiswa)
 		cout << "Kamu berada pada awal list" << endl;
 	else
 	{
 		siswa *previous; // deklarasi pointer
 		previous = awalsiswa;
 		while (previous->next != awalsiswa->next)
 		{
 			previous = previous->next;  
 		}
 		bantusiswa = previous;
 	}
}

//Deklarasi tambahguru_tengah pada class manajemen
//untuk menambahkan data di tengah daftar
void Manajemen::tambahsiswa_tengah()
{
  siswa *barusiswa, *bantusiswa;
 	int posisi_sisip;
 	if(awalsiswa != NULL)
 	{
 		cout<<"Akan disisip setelah Data Ke ? : ";
 		cin>>posisi_sisip;
 		bantusiswa = awalsiswa;
 		barusiswa =new siswa;
 		for(int i=1; i<posisi_sisip-1; i++)
 		{
 			if(bantusiswa->next != NULL)
      {
 			bantusiswa = bantusiswa->next;
      }else
 			break;
 		}
 		cout << "Masukkan Nama : "; cin >> barusiswa->namasiswa;
 		cout << "Masukkan kode : "; cin >> barusiswa->kodesiswa;
 		cout << "Masukkan Jumlah prestasi : "; cin >> barusiswa->prestasisiswa;
 		barusiswa->next=bantusiswa->next;
 		bantusiswa->next=barusiswa;
 	}
 	else
 	{
 		cout<<"Belum ada data !! silahkan isi data dulu....";
 	}
}

////Deklarasi hapusguru_tengah pada class manajemen
//untuk menghapus data di tengah daftar=========================================}
void Manajemen::Hapussiswa_tengah()
{
  int banyakdata,posisi_hapus,poshapus;
 	siswa *hapussiswa, *bantusiswa;
 	if(awalsiswa != NULL)
 	{
 		cout<<" Akan dihapus pada data ke : ";
 		cin>>posisi_hapus;
 		banyakdata=1;
 		bantusiswa=awalsiswa;
 		while(bantusiswa->next != NULL)
 		{
 			bantusiswa=bantusiswa->next;
 			banyakdata++;
 		}
 	if((posisi_hapus<1)||(posisi_hapus>banyakdata))
 	{
 		cout<<"Belum ada data !! masukkan Data dula aja...\n";
 	}
 	else
 	{
 		bantusiswa=awalsiswa;
 		poshapus=1;
 		while(poshapus<(posisi_hapus-1))
 		{
 			bantusiswa=bantusiswa->next;
 			poshapus++;
 		}
 		hapussiswa=bantusiswa->next;
 		bantusiswa->next=hapussiswa->next;
 		delete hapussiswa;
 	}
 	}
 	else
 	cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
}


int main() {
  Manajemen a;
  a.menusiswa_prestasi();

  return 0;
}
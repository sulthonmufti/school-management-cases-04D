#include <fstream>
#include <iomanip>
#include <iostream>
#include "ktp.h"
#include "211.h"
#define MAX 20
#define FULL 5
#define FULLSELEKSI 5
//#include "manajemen.h"

using namespace std;

//Deklarasi void input pada class KTP
//untuk menginputkan data KTP guna dijadikan sebagai data login serta mencetak pada file txt.
void ktp::input(int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << "===========================================================" << endl;
    cout << "         ISIKAN DATA DIRI ANDA UNTUK MEMBUAT KTP" << endl;
    cout << "===========================================================" << endl;
    while (KTP.nik[i].length() != 16)
    {
      cout << "\nNIK                        : ";
      cin >> KTP.nik[i];

      if (KTP.nik[i].length() != 16)
      {
        cout << "Panjang NIK adalah 16" << endl << endl;
      }
    }
    cin.ignore();
    cout << "Nama                       : ";
    getline(cin, KTP.nama[i]);

    cout << "Tempat lahir               : ";
    cin >> KTP.tempat[i];
    cout << "Tanggal lahir              : ";
    cin >> KTP.tgl[i];
    cout << "Bulan lahir                : ";
    cin >> KTP.bln[i];
    cout << "Tahun lahir                : ";
    cin >> KTP.thn[i];
    cout << "Jenis Kelamin              : ";
    cin >> KTP.jenis[i];
    cout << "Golongan Darah             : " << endl;
    cout << "1. A\t\t 3. O\n2. B\t\t 4. AB\n";
    cout << "Masukkan Gol.Darah(1-4) : ";
    cin >> pilgoldar[i];
    cin.ignore();
    
    cout << "Masukkan Alamat            : ";
    getline(cin, KTP.jalan[i]);
    cout << "Masukkan RT                : ";
    getline(cin, KTP.rt[i]);
    cout << "Masukkan RW                : ";
    getline(cin, KTP.rw[i]);
    cout << "Masukkan Kel/Desa          : ";
    cin >> KTP.kelurahan[i];
    cout << "Masukkan Kecamatan         : ";
    cin >> KTP.kec[i];
    cout << "Agama                      : " << endl;
    cout << " 1. ISLAM\t\t 4. BUDHA\n 2. KRISTEN\t\t 5. HINDU\n 3. KATOLIK\t\t 6. KONGHUCU\n";
    cout << "Masukkan Agama (1-6) : ";
    cin >> pilagama[i];
    cin.ignore();
    
    cout << "Status Perkawinan          : ";
    getline(cin, KTP.status[i]);
    cout << "Pekerjaan                  : ";
    cin >> KTP.pekerjaan[i];
    cout << "Kewarganegaraan            : " << endl;
    cout << " 1. WNI\t\t 2. WNA\n";
    cout << "Masukkan kewarganegaraan(1-2) : ";
    cin >> pilkewarganegaraan[i];
   }
  
  ofstream dataktp;
  dataktp.open("logindata.txt");
  for (int i = 0; i < n; i++)
  {
    dataktp << KTP.nama[i] << endl;
    dataktp << KTP.nik[i] << endl;
  }
  
  dataktp.close();
}

//Deklarasi void output pada class KTP
//untuk mengoutputkan data KTP
void ktp::output(int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "              PROVINSI DAERAH ISTIMEWA YOGYAKARTA" << endl;
    cout << "                        KABUPATEN BANTUL" << endl;
    cout << "===========================================================" << endl;
    cout << "NIK\t\t\t : " << KTP.nik[i] << endl;
    cout << "Nama\t\t\t : " << KTP.nama[i] << endl;
    cout << "Tempat/Tgl Lahir\t : " << KTP.tempat[i] << ", " << KTP.tgl[i] << "-" << KTP.bln[i] << "-" << KTP.thn[i] << endl;
    cout << "Jenis Kelamin\t\t : " << KTP.jenis[i] << setw(27)
         << "Gol. Darah : ";
    switch (pilgoldar[i])
    {
    case 1:
      cout << "A";
      break;
      
    case 2:
      cout << "B";
      break;
      
    case 3:
      cout << "O";
      break;
      
    case 4:
      cout << "AB";
      break;
    }
    
    cout << "\nAlamat\t\t\t : " << KTP.jalan[i] << endl;
    cout << "\tRT\t\t : " << KTP.rt[i] << endl;
    cout << "\tRW\t\t : " << KTP.rw[i] << endl;
    cout << "\tKel/Desa\t : " << KTP.kelurahan[i] << endl;
    cout << "\tKecamatan\t : " << KTP.kec[i] << endl;
    cout << "Agama\t\t\t : ";
    
    switch (pilagama[i])
    {
    case 1:
      cout << "ISLAM";
      break;
      
    case 2:
      cout << "KRISTEN";
      break;
      
    case 3:
      cout << "KATOLIK";
      break;
      
    case 4:
      cout << "BUDHA";
      break;
      
    case 5:
      cout << "HINDU";
      break;
      
    case 6:
      cout << "KONGHUCU";
      break;
    }
    
    cout << "\nStatus Perkawinan\t : ";
    cout << KTP.status[i];
    cout << "\nPekerjaan\t\t : " << KTP.pekerjaan[i] << endl;
    
    cout << "Kewarganegaraan\t\t : ";
    switch (pilkewarganegaraan[i])
    {
    case 1:
      cout << "WNI";
      break;
    case 2:
      cout << "WNA";
      break;
    }
    cout << "\nBerlaku Hingga\t\t : SEUMUR HIDUP" << endl;
    cout << "==========================================================="<< endl;
  }

  //masukkan ke dalam .txt
   ofstream ktptxt;
  ktptxt.open("tampungKTP.txt");
  for (int i = 0; i < n; i++)
  {
    ktptxt << "===========================================================" << endl;
    ktptxt << "              PROVINSI DAERAH ISTIMEWA YOGYAKARTA" << endl;
    ktptxt << "                        KABUPATEN BANTUL" << endl;
    ktptxt << "===========================================================" << endl;
    ktptxt << "NIK\t\t\t : " << KTP.nik[i] << endl;
    ktptxt << "Nama\t\t\t : " << KTP.nama[i] << endl;
    ktptxt << "Tempat/Tgl Lahir\t : " << KTP.tempat[i] << ", " << KTP.tgl[i] << "-" << KTP.bln[i] << "-" << KTP.thn[i] << endl;
    ktptxt << "Jenis Kelamin\t\t : " << KTP.jenis[i] << setw(27) << "Gol. Darah : ";
    switch (pilgoldar[i])
    {
    case 1:
     ktptxt << "A";
      break;
      
    case 2:
      ktptxt << "B";
      break;
      
    case 3:
      ktptxt << "O";
      break;
      
    case 4:
      ktptxt << "AB";
      break;
    }
    
    ktptxt << "\nAlamat\t\t\t : " << KTP.jalan[i] << endl;
    ktptxt << "\tRT\t\t : " << KTP.rt[i] << endl;
    ktptxt << "\tRW\t\t : " << KTP.rw[i] << endl;
    ktptxt << "\tKel/Desa\t : " << KTP.kelurahan[i] << endl;
    ktptxt << "\tKecamatan\t : " << KTP.kec[i] << endl;
    ktptxt << "Agama\t\t\t : ";
    
    switch (pilagama[i])
    {
    case 1:
      ktptxt << "ISLAM";
      break;
      
    case 2:
      ktptxt << "KRISTEN";
      break;
      
    case 3:
      ktptxt << "KATOLIK";
      break;
      
    case 4:
      ktptxt << "BUDHA";
      break;
      
    case 5:
      ktptxt << "HINDU";
      break;
      
    case 6:
      ktptxt << "KONGHUCU";
      break;
    }
    
    ktptxt << "\nStatus Perkawinan\t : ";
    ktptxt << KTP.status[i];
    ktptxt << "\nPekerjaan\t\t : " << KTP.pekerjaan[i] << endl;
    
    ktptxt << "Kewarganegaraan\t\t : ";
    switch (pilkewarganegaraan[i])
    {
    case 1:
      ktptxt << "WNI";
      break;
    case 2:
      ktptxt << "WNA";
      break;
    }
    ktptxt << "\nBerlaku Hingga\t\t : SEUMUR HIDUP" << endl;
    ktptxt << "==========================================================="<< endl;
  }
  
  ktptxt.close();
}

//Deklarasi void menu_seragam pada class manajemen
//untuk menampilkan menu seragam
void Manajemen::menu_seragam()
{
seragam:
  do
  {
    cout << "================================================" << endl;
    cout << "==             MENU PEMBELIAN seragam         ==" << endl;
    cout << "== Menu :                                     ==" << endl;
    cout << "== 1) Tambah data seragam ke daftar depan     ==" << endl;
    cout << "== 2) Tambah data seragam ke daftar belakang  ==" << endl;
    cout << "== 3) Hapus data seragam di daftar depan      ==" << endl;
    cout << "== 4) Tampilan daftar pembelian seragam       ==" << endl;
    cout << "== 5) Penghitungan biaya pembelian seragam    ==" << endl;
    cout << "== 6) Kembali ke menu                         ==" << endl;
    cout << "================================================" << endl;
    cout << "[Catatan : Seragam satu paket (putih biru, putih abu-abu, putih "
            "merah, batik, pramuka,olahraga)]"
         << endl;
    cout << "pilihan menu : ";
    cin >> pilihmenuseragam;
    cout << endl;
    
    switch (pilihmenuseragam)
    {
    case 1:
      tambah_depan_seragam();
      break;
      
    case 2:
      tambah_belakang_seragam();
      break;
      
    case 3:
      hapus_depan_seragam();
      break;
      
    case 4:
      tampil_seragam();
      break;
      
    case 5:
      hitung_seragam();
      break;
      
    case 6:
      menu();
      break;
      
    default:
      cout << "Pilihan anda tidak ada pada daftar ! silahkan pilih lagi.."
           << endl;
      goto seragam;
      break;
    }
  } while (pilihmenuseragam <= 6);
}

//Deklarasi void tambah_depan_seragam pada class manajemen
//untuk menambahkan data lks di depan daftar
void Manajemen::tambah_depan_seragam()
{
  baruseragam = new seragam;
  baruseragam->next = NULL;
  baruseragam->prev = NULL;
  
  cout << "Nama seragam     : ";
  cin >> baruseragam->namaseragam;
  cout << "Jumlah beli  : ";
  cin >> baruseragam->jumlahseragam;

  if (awalseragam == NULL)
  {
    awalseragam = akhirseragam = baruseragam;

  } else
  {
    baruseragam->next = awalseragam;
    awalseragam->prev = baruseragam;
    awalseragam = baruseragam;
  }
  
  tampil_seragam();
  menu_seragam();
}

//Deklarasi void tambah_belakang_lks pada class manajemen
//untuk menambahkan data lks di belakang daftar
void Manajemen::tambah_belakang_seragam()
{
  baruseragam = new seragam;
  baruseragam->next = NULL;
  baruseragam->prev = NULL;
  
  cout << "Nama seragam     : ";
  cin >> baruseragam->namaseragam;
  cout << "Jumlah beli  : ";
  cin >> baruseragam->jumlahseragam;

  if (awalseragam == NULL)
  {
    awalseragam = akhirseragam = baruseragam;

  } else
  {
    akhirseragam->next = baruseragam;
    baruseragam->prev = akhirseragam;
    akhirseragam = baruseragam;
  }
  
  tampil_seragam();
  menu_seragam();
}

//Deklarasi void hapus_depan_lks pada class manajemen
//untuk menghapus data lks di depan daftar
void Manajemen::hapus_depan_seragam()
{
  if (awalseragam->next == NULL)
  {
    awalseragam = akhirseragam = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else
  {
    hapusseragam = awalseragam;
    awalseragam = awalseragam->next;
    awalseragam->prev = NULL;
    delete hapusseragam;
  }
  
  tampil_seragam();
  menu_seragam();
}

//Deklarasi void tampil_seragam pada class manajemen
//untuk menampilkan daftar seragam yang akan dibeli
void Manajemen::tampil_seragam()
{
  ofstream dataseragam;
  dataseragam.open("daftarSeragam.txt");
  bantuseragam = awalseragam;
  dataseragam << "+-----------------------------------------------------+"
              << endl;
  
  dataseragam << " | " << setw(4) << " Nama seragam " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  dataseragam << "+-----------------------------------------------------+"
              << endl;
  
  cout << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Nama seragam " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;

  while (bantuseragam != NULL)
  {
    cout << " | " << setw(4) << bantuseragam->namaseragam << setw(4) << " | " << bantuseragam->jumlahseragam << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;
    dataseragam << " | " << setw(4) << bantuseragam->namaseragam << setw(4) << " | " << bantuseragam->jumlahseragam << setw(4) << " | " << endl;
    dataseragam << "+-----------------------------------------------------+"
                << endl;
    
    bantuseragam = bantuseragam->next;
  }
  
  dataseragam.close();
  menu_seragam();
}

//Deklarasi void hitung_seragam pada class manajemen
//untuk menghitung pengeluaran dana sekolah dari pembelian seragam
void Manajemen::hitung_seragam()
{
  cout << "[Catatan : seragam wajib (putih biru,putih abu-abu,putih merah,batik,pramuka,olahraga)]"
       << endl;
  cout << "-----------------------------------------------------------" << endl;
  
  cout << "Berdasarkan data yang telah dimasukkan : " << endl;
  cout << "Harga seragam putih biru : ";
  cin >> hargapb;
  cout << "jumlah : ";
  cin >> jmlhpb;
  
  cout << "Harga seragam putih merah : ";
  cin >> hargapm;
  cout << "jumlah : ";
  cin >> jmlhpm;
  
  cout << "Harga seragam putih abu-abu : ";
  cin >> hargapa;
  cout << "jumlah : ";
  cin >> jmlhpa;
  
  cout << "Harga seragam batik : ";
  cin >> hargabatik;
  cout << "jumlah : ";
  cin >> jmlhbatik;
  
  cout << "Harga seragam pramuka : ";
  cin >> hargapramuka;
  cout << "jumlah : ";
  cin >> jmlhpramuka;
  
  cout << "Harga seragam olahraga : ";
  cin >> hargaolahraga;
  cout << "jumlah : ";
  cin >> jmlholahraga;
  
  cout << endl;
  cout << "-----------------------------------------------------------" << endl;
  total_harga_seragam = (hargapb * jmlhpb) + (hargapm * jmlhpm) + (hargapa * jmlhpa) + (hargabatik * jmlhbatik) + (hargapramuka * jmlhpramuka) + (hargaolahraga * jmlholahraga);
  
  cout << "Total biaya pembelian seragam : " << total_harga_seragam << endl;
  menu_seragam();
}

//Deklarasi menu_lomba pada class manajemen
//untuk membuat menu penambahan data Perlombaan
void Manajemen::menu_lomba()
{
  siswa:
  cout << "=============================================" << endl;
  cout << "==         MENU PERLOMBAAN SISWA           ==" << endl;
  cout << "== 1) Tambah data lomba ke daftar Depan    ==" << endl;
  cout << "== 2) Tambah data lomba ke daftar Belakang ==" << endl;
  cout << "== 3) Hapus data lomba di daftar Depan     ==" << endl;
  cout << "== 4) Hapus data lomba di daftar Belakang  ==" << endl;
  cout << "== 5) Tampilan daftar lomba dan karyawan   ==" << endl;
  cout << "== 6) Tulis data untuk user                ==" << endl;
  cout << "== 7) kembali ke menu                      ==" << endl;
  cout << "============================================" << endl;
  cout << "Pilihan anda: ";
  cin >> pillomba;
  cout << "=======================================" << endl;
  
  switch (pillomba)
  {
  case 1:
    tambahlomba_depan();
    break;
    
  case 2:
    tambahlomba_belakang();
    break;
    
  case 3:
    hapuslomba_depan();
    break;
    
  case 4:
    hapuslomba_belakang();
    break;
    
  case 5:
    tampillomba();
    menu_lomba();
    break;
    
  case 6:
    tulisdatalomba();
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

//Deklarasi tambahlomba_depan pada class manajemen
//untuk menambahkan data lomba bagian depan daftar
void Manajemen::tambahlomba_depan()
{
  buatlomba_baru();
  if (awallomba == NULL)
  {
    awallomba = barulomba;
    akhirlomba = barulomba;
    akhirlomba->next = NULL;
  } else
  {
    barulomba->next = awallomba;
    awallomba = barulomba;
  }
  cout << endl << endl;
  tampillomba();
  menu_lomba();
}

//Deklarasi void buatlomba_baru pada class manajemen
//untuk membuat daftar data lomba baru
void Manajemen::buatlomba_baru()
{
  barulomba = (lomba *)malloc(sizeof(struct lomba));
  cout << "Input Kode lomba : ";
  cin >> barulomba->kodelomba;
  cout << "Input Nama lomba : ";
  cin >> barulomba->namalomba;
  cout << "Input jumlah delegasi sekolah : ";
  cin >> barulomba->perwakilanlomba;
  barulomba->next = NULL;
}

//Deklarasi void tampillomba pada class manajemen
//untuk menampilkan daftar data lomba sekaligus mencetak pada file .txt
void Manajemen::tampillomba()
{
  ofstream lombaku;
  lombaku.open("daftarLomba.txt");
  
  if (awallomba == NULL)
  {
    cout << "Kosong" << endl;
    menu_lomba();
    cout << endl;
  } else
  {
    bantulomba = awallomba;
    lombaku << "+-----------------------------------------------+" << endl;
    lombaku << "| " << setw(4) << " Kode Perlombaan " << setw(4) << " | " << setw(4) << " Nama Perlombaan " << setw(4) << " | " << setw(4) << " Jumlah Delegasi Sekolah " << setw(4) << " |" << endl;
    lombaku << "+-----------------------------------------------+" << endl;
     cout << "+-----------------------------------------------+" << endl;
    cout << "| " << setw(4) << " Kode Perlombaan" << setw(4) << " | " << setw(4) << " Nama Perlombaan " << setw(4) << " | " << setw(4) << " Jumlah Delegasi Sekolah " << setw(4) << " |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    
    while (bantulomba != NULL)
    {
      cout << "| " << setw(4) << bantulomba->kodelomba << setw(4) << " | " << setw(4) << bantulomba->namalomba << setw(4) << " | " << setw(4) << bantulomba->perwakilanlomba << setw(4) << " |" << endl;
      cout << "+-----------------------------------------------+" << endl;
      lombaku << "| " << setw(4) << bantulomba->kodelomba << setw(4) << " | " << setw(4) << bantulomba->namalomba<< setw(4) << " | " << setw(4) << bantulomba->perwakilanlomba << setw(4) << " |" << endl;
      lombaku << "+-----------------------------------------------+" << endl;
      // cout << "----------------------------------------" << endl;

      cout << endl;
      bantulomba = bantulomba->next;
    }
  }
 
  lombaku.close();
}

//Deklarasi void tulislomba pada class manajemen
//untuk menulid data lomba untuk sebagai tampilan user dan pencarian data guru
void Manajemen::tulisdatalomba()
{
  cout << "Masukkann jumlah guru dan karyawan : ";
  cin >> jlomba;
  for (l = 0; l < jlomba; l++)
  {
    cout << "Kode Perlombaan : ";
    cin >> lombakode[l];
    cout << "Nama Perlombaan : ";
    cin >> lombanama[l];
    cout << "Jumlah Delegasi Sekolah : ";
    cin >> perwakilanlomba[l];
    cout << "---------------------------------------------" << endl;
  }
  menu_lomba();
}

//Deklarasi void tambahlomba_belakang pada class manajemen
//untuk menambah data lomba pada bagian belakang daftar
void Manajemen::tambahlomba_belakang()
{
  buatlomba_baru();
  if (awallomba == NULL)
  {
    awallomba = barulomba;
  } else
  {
    akhirlomba->next = barulomba;
  }
  akhirlomba = barulomba;
  akhirlomba->next = NULL;
  cout << endl << endl;
  
  tampillomba();
  menu_lomba();
}

//Deklarasi void hapuslomba_depan pada class manajemen
//untuk menghapus data lomba dari daftar bagian depan
void Manajemen::hapuslomba_depan()
{
  if (awallomba == NULL)
  {
    cout << "kosong";
  } else
  {
    hapuslomba = awallomba;
    awallomba = awallomba->next;
    free(hapuslomba);
  }
  cout << endl << endl;
  tampillomba();
  menu_lomba();
}

//Deklarasi void hapuslomba_belakang pada class manajemen
//untuk menghapus data lomba dari daftar bagian belakang
void Manajemen::hapuslomba_belakang()
{
  if (awallomba == NULL)
  {
    cout << "Kosong";
  } else if (awallomba == akhirlomba)
  {
    hapuslomba = awallomba;
    awallomba = awallomba->next;
    free(hapuslomba);
  } else
  {
    hapuslomba = awallomba;
    while (hapuslomba->next != akhirlomba)
    {
      hapuslomba = hapuslomba->next;
      akhirlomba = hapuslomba;
      hapuslomba = akhirlomba->next;
      akhirlomba->next = NULL;
      free(hapuslomba);
    }
  }
  cout << endl << endl;
  
  tampillomba();
  menu_lomba();
}

//Deklarasi void pidahlomba_sebelum pada class manajemen
//untuk memindahkan urutan data lomba ke posisi sebelumya========================={
void Manajemen::pidahlomba_sebelum()
{
  if (bantulomba->next == NULL)
  {
 		cout << "Kamu berada pada akhir list." << endl;
    }else
  {
 		bantulomba =bantulomba->next;
  }
}

//Deklarasi pidahlomba_sesudah pada class manajemen
//untuk memindahkan urutan data lomba ke posisi berikutnya
void Manajemen::pidahlomba_sesudah()
{
  if (bantulomba == awallomba)
 		cout << "Kamu berada pada awal list" << endl;
 	else
 	{
 		lomba *previous; // deklarasi pointer
 		previous = awallomba;
 		while (previous->next != awallomba->next)
 		{
 			previous = previous->next;  
 		}
 		bantulomba = previous;
 	}
}

//Deklarasi tambahlomba_tengah pada class manajemen
//untuk menambahkan data lomba di tengah daftar
void Manajemen::tambahlomba_tengah()
{
  lomba *barusiswa, *bantusiswa;
 	int posisi_sisip;
 	if(awallomba != NULL)
 	{
 		cout<<"Akan disisip setelah Data Ke ? : ";
 		cin>>posisi_sisip;
 		bantulomba = awallomba;
 		barulomba =new lomba;
 		for(int s=1; s<posisi_sisip-1; s++)
 		{
 			if(bantulomba->next != NULL)
      {
 			bantulomba = bantulomba->next;
      }else
 			break;
 		}
 		cout << "Masukkan Nama Perlombaan : "; cin >> barulomba->namalomba;
 		cout << "Masukkan kode Perlombaan : "; cin >> barulomba->kodelomba;
 		cout << "Masukkan Jumlah Delegasi : "; cin >> barulomba->perwakilanlomba;
 		barulomba->next=bantulomba->next;
 		bantulomba->next=barulomba;
 	}
 	else
 	{
 		cout<<"Belum ada data !! silahkan isi data dulu....";
 	}
}

////Deklarasi Hapuslomba_tengah pada class manajemen
//untuk menghapus data di tengah daftar=========================================}
void Manajemen::Hapuslomba_tengah()
{
  int banyakdata,posisi_hapus,poshapus;
 	lomba *hapuslomba, *bantulomba;
 	if(awallomba != NULL)
 	{
 		cout<<" Akan dihapus pada data ke : ";
 		cin>>posisi_hapus;
 		banyakdata=1;
 		bantulomba=awallomba;
 		while(bantulomba->next != NULL)
 		{
 			bantulomba=bantulomba->next;
 			banyakdata++;
 		}
 	if((posisi_hapus<1)||(posisi_hapus>banyakdata))
 	{
 		cout<<"Belum ada data !! masukkan Data dula aja...\n";
 	}
 	else
 	{
 		bantulomba=awallomba;
 		poshapus=1;
 		while(poshapus<(posisi_hapus-1))
 		{
 			bantulomba=bantulomba->next;
 			poshapus++;
 		}
 		hapuslomba=bantulomba->next;
 		bantulomba->next=hapuslomba->next;
 		delete hapuslomba;
 	}
 	}
 	else
 	cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
}

//CATATA: struct dan class ditulis ulang (agar dihitung) karena dibuat oleh 191 tapi tidak berada di "191.h"

// //struct seragam
// struct seragam
// {
//   char namaseragam[50];
//   char jumlahseragam[500];
//   seragam *next, *prev;
// } *awalseragam = NULL, *akhirseragam = NULL, *bantuseragam, *baruseragam,
//   *hapusseragam;

// //struct lomba
// struct lomba
// {
//   char kodelomba[8], namalomba[80];
//   int perwakilanlomba;
//   struct lomba *next;
// } lmba, *barulomba, *awallomba = NULL, *akhirlomba = NULL, *hapuslomba, *bantulomba;

// //Struct KTP
// struct data {
//   string nik[17];
//   string nama[30], jenis[20], status[20], pekerjaan[20], tempat[20];
//   string tgl[20], bln[20], thn[20];
//   string jalan[20], kec[20], kelurahan[20];
//   string rt[10], rw[10];
// };


// //Class KTP
// class ktp
// {
// private:
//   int pilgoldar[10], pilagama[10], pilkewarganegaraan[10];

// public:
//   data KTP;
//   void input(int);
//   void output(int);

//   ofstream dataktp;
// };
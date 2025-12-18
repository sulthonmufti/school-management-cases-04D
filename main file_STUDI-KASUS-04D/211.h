#include <fstream>
#include <iomanip>
#include <iostream>
#include "213.h"
#define MAX 20
#define FULL 5
#define FULLSELEKSI 5
//#include "manajemen.h"

using namespace std;

//Deklarasi void menu_perlengkapan pada class manajemen
//untuk menampilkan menu perlengkapan
void Manajemen::menu_perlengkapan()
{
perlengkapan:
  do
  {
    cout << "=====================================================" << endl;
    cout << "==     MENU PEMBELIAN PERLENGKAPAN SISWA           ==" << endl;
    cout << "== Menu :                                          ==" << endl;
    cout << "== 1) Tambah data perlengkapan ke daftar depan     ==" << endl;
    cout << "== 2) Tambah data perlengkapan ke daftar belakang  ==" << endl;
    cout << "== 3) Hapus data perlengkapan di daftar depan      ==" << endl;
    cout << "== 4) Tampilan daftar pembelian perlengkapan       ==" << endl;
    cout << "== 5) Penghitungan biaya pembelian perlengkapan    ==" << endl;
    cout << "== 6) Kembali ke menu                              ==" << endl;
    cout << "=====================================================" << endl;
    cout << "[ Catatan : perlengkapan wajib (topi, sabuk, kaos kaki) ]" << endl;
    cout << "pilihan menu : ";
    cin >> pilihmenuperlengkapan;
    cout << endl;
    
    switch (pilihmenuperlengkapan)
    {
    case 1:
      tambah_depan_perlengkapan();
      break;
      
    case 2:
      tambah_belakang_perlengkapan();
      break;
      
    case 3:
      hapus_depan_perlengkapan();
      break;
      
    case 4:
      tampil_perlengkapan();
      break;
      
    case 5:
      hitung_perlengkapan();
      break;
      
    case 6:
      menu();
      break;
      
    default:
      cout << "Pilihan anda tidak ada pada daftar ! silahkan pilih lagi.."
           << endl;
      goto perlengkapan;
      break;
    }
  } while (pilihmenuperlengkapan <= 6);
}

//Deklarasi void tambah_depan_perlengkapan pada class manajemen
//untuk menambah daftar perlengkapan ke daftar depan
void Manajemen::tambah_depan_perlengkapan()
{
  baruperlengkapan = new perlengkapan;
  baruperlengkapan->next = NULL;
  baruperlengkapan->prev = NULL;
  
  cout << "Nama lengkapan     : ";
  cin >> baruperlengkapan->namaperlengkapan;
  cout << "Jumlah beli  : ";
  cin >> baruperlengkapan->jumlahperlengkapan;

  if (awalperlengkapan == NULL)
  {
    awalperlengkapan = akhirperlengkapan = baruperlengkapan;

  } else
  {
    baruperlengkapan->next = awalperlengkapan;
    awalperlengkapan->prev = baruperlengkapan;
    awalperlengkapan = baruperlengkapan;
  }
  
  tampil_perlengkapan();
  menu_perlengkapan();
}

//Deklarasi void tambah_belakang_perlengkapan pada class manajemen
//untuk menambah daftar perlengkapan ke daftar belakang
void Manajemen::tambah_belakang_perlengkapan()
{
  baruperlengkapan = new perlengkapan;
  baruperlengkapan->next = NULL;
  baruperlengkapan->prev = NULL;
  
  cout << "Nama perlengkapan     : ";
  cin >> baruperlengkapan->namaperlengkapan;
  cout << "Jumlah beli  : ";
  cin >> baruperlengkapan->jumlahperlengkapan;

  if (awalperlengkapan == NULL)
  {
    awalperlengkapan = akhirperlengkapan = baruperlengkapan;

  } else
  {
    akhirperlengkapan->next = baruperlengkapan;
    baruperlengkapan->prev = akhirperlengkapan;
    akhirperlengkapan = baruperlengkapan;
  }
  
  tampil_perlengkapan();
  menu_perlengkapan();
}

//Deklarasi void hapus_depan_perlengkapan pada class manajemen
//untuk menghapus daftar perlengkapan ke daftar depan
void Manajemen::hapus_depan_perlengkapan()
{
  if (awalperlengkapan->next == NULL)
  {
    awalperlengkapan = akhirperlengkapan = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else
  {
    hapusperlengkapan = awalperlengkapan;
    awalperlengkapan = awalperlengkapan->next;
    awalperlengkapan->prev = NULL;
    delete hapusperlengkapan;
  }
  
  tampil_perlengkapan();
  menu_perlengkapan();
}

//Deklarasi void tampil_perlengkapan pada class manajemen
//untuk menampilkan daftar perlengkapan serta mencetak pada file .txt
void Manajemen::tampil_perlengkapan()
{
  ofstream dataperlengkapan;
  dataperlengkapan.open("daftarPerlengkapan.txt");
  bantuperlengkapan = awalperlengkapan;
  dataperlengkapan << "+-----------------------------------------------------+"
                   << endl;
  dataperlengkapan << " | " << setw(4) << " Nama perlengkapan " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  dataperlengkapan << "+-----------------------------------------------------+"
                   << endl;
  cout << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Nama perlengkapan " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;

  while (bantuperlengkapan != NULL)
  {
    cout << " | " << setw(4) << bantuperlengkapan->namaperlengkapan << setw(4) << " | " << bantuperlengkapan->jumlahperlengkapan << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;
    
    dataperlengkapan << " | " << setw(4) << bantuperlengkapan->namaperlengkapan  << setw(4) << " | " << bantuperlengkapan->jumlahperlengkapan << setw(4)  << " | " << endl;
    dataperlengkapan
        << "+-----------------------------------------------------+" << endl;
    
    bantuperlengkapan = bantuperlengkapan->next;
  }
  
  dataperlengkapan.close();
  menu_perlengkapan();
}

//Deklarasi void hitung_perlengkapan pada class manajemen
//untuk menghitung biaya pengeluaran dana sekolah untuk pembelian perlengkapan
void Manajemen::hitung_perlengkapan()
{
  cout << "[ Catatan : perlengkapan wajib (topi, sabuk, kaos kaki) ]" << endl;
  cout << "-----------------------------------------------------------" << endl;
  cout << "Berdasarkan data yang telah dimasukkan : " << endl;
  cout << "Harga topi : ";
  cin >> hargatopi;
  cout << "jumlah : ";
  cin >> jmlhtopi;
  
  cout << "Harga sabuk : ";
  cin >> hargasabuk;
  cout << "jumlah : ";
  cin >> jmlhsabuk;
  
  cout << "Harga kaos kaki : ";
  cin >> hargakaoskaki;
  cout << "jumlah : ";
  cin >> jmlhkaoskaki;
  
  cout << "Harga perlengkapan lain : ";
  cin >> hargaperlengkapanlain;
  cout << "jumlah : ";
  cin >> jmlhperlengkapanlain;
  
  cout << endl;
  cout << "-----------------------------------------------------------" << endl;
  total_harga_perlengkapan = (hargatopi * jmlhtopi) + (hargasabuk * jmlhsabuk) + (hargakaoskaki * jmlhkaoskaki) + (hargaperlengkapanlain * jmlhperlengkapanlain);
  
  cout << "Total biaya pembelian perlengkapan : " << total_harga_perlengkapan << endl;
  menu_perlengkapan();
}

//Deklarasi menusiswa_prestasi pada class manajemen
//untuk membuat menu penambahan data siswa berprestasi
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

//Deklarasi tambahsiswa_depan pada class manajemen
//untuk menambahkan data siswa bagian depan daftar
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

//Deklarasi void :buatsiswa_baru pada class manajemen
//untuk membuat daftar data siswa baru
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

//Deklarasi void tampilsiswa pada class manajemen
//untuk menampilkan daftar data siswa sekaligus mencetak pada file .txt
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
  for (s = 0; s < jsiswa; s++)
  {
    cout << "Kode siswa : ";
    cin >> siswakode[s];
    cout << "Nama Guru / Karyawan : ";
    cin >> siswanama[s];
    cout << "Umur Guru / Karyawan : ";
    cin >> siswaprestasi[s];
    cout << "---------------------------------------------" << endl;
  }
  menusiswa_prestasi();
}

//Deklarasi void tambahsiswa_belakang pada class manajemen
//untuk menambah data siswa pada bagian belakang daftar
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

//Deklarasi void hapussiswa_depan pada class manajemen
//untuk menghapus data siswa dari daftar bagian depan
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

//Deklarasi void hapussiswa_belakang pada class manajemen
//untuk menghapus data siswa dari daftar bagian belakang
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

//Deklarasi void pidahsiswa_sebelum pada class manajemen
//untuk memindahkan urutan data siswa ke posisi sebelumya========================={
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

//Deklarasi pidahsiswa_sesudah pada class manajemen
//untuk memindahkan urutan data siswa ke posisi berikutnya
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

//Deklarasi tambahsiswa_tengah pada class manajemen
//untuk menambahkan data siswa di tengah daftar
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
 		for(int s=1; s<posisi_sisip-1; s++)
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

////Deklarasi Hapussiswa_tengah pada class manajemen
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


//Deklarasi menuambil_Perlengkapan pada class manajemen
//untuk sebagai menu dalam fitur pengambilan perlengkapan
void Manajemen::menuambil_Perlengkapan()
{
  initPerlengkapan();
	do {
    Perlengkapan:
    printStackPerlengkapan();
    a:
    cout << "====================================================" << endl;
    cout << "==     MENU PENGMABILAN PERLENGKAPAN (Stack)      ==" << endl;
    cout << "== 1) Push Data (input)                           ==" << endl;
    cout << "== 2) Pop Data (Hapus)                            ==" << endl;
    cout << "== 3) Print (Cetak)                               ==" << endl;
    cout << "== 4) Clear Semua Stack                           ==" << endl;
    cout << "== 5) Hitung MAX, MIN, ANTRIAN                    ==" << endl;
    cout << "== 6) Search Stack                                ==" << endl;
    cout << "== 7) Edit Data Stack                             ==" << endl;
    cout << "== 8) Hapus salah satu stack                      ==" << endl;
    cout << "== 9) Kembali                                     ==" << endl;
    cout << "====================================================" << endl;
		cout << "Masukkan Pilihan: ";
		cin >> pilihanstackperlengkapan;
    
		switch (pilihanstackperlengkapan)
    {
		case 1:
			pushPerlengkapan();
			break;
      
		case 2:
			popPerlengkapan();
			break;
      
		case 3:
			printStackPerlengkapan();
			break;
      
		case 4:
			ClearPerlengkapan();
			break;
      
		case 5:
			HitungPerlengkapan();
			break;
      
		case 6:
			SearchPerlengkapan();
			break;
      
		case 7:
			EditPerlengkapan();
			break;
      
		case 8:
			HapusPerlengkapan();
			break;
      
     case 9:
       menu();
       break;
  
		default:
			cout << "Pilihan tidak tersedia" << endl;
      goto a;
			break;
		}
    
	} while (pilihanstackperlengkapan != 10);
}

//Deklarasi void iniperlengkapan pada class manajemen
//utuk sebagai init perlengkapan
void Manajemen::initPerlengkapan()
{
    Tumpukan_Perlengkapan.top = -1;
}

//Deklarasi bool isEmptyLKS pada class manajemen
//untuk mengecek kosong atau tidaknya stack
bool Manajemen::isEmptyPerlengkapan()
{
    return Tumpukan_Perlengkapan.top == -1;
}

//Deklarasi bool isFullperlengkapan pada class manajemen
//untuk mengecek full atau tidaknya stack
bool Manajemen::isFullPerlengkapan()
{
    return Tumpukan_Perlengkapan.top == MAX -1;
}

//Deklarasi void pushperlengkapan pada class manajemen
//untuk menambahkan data pengambil perlengkapan
void Manajemen::pushPerlengkapan()
{
    if (isFullPerlengkapan())
    {
        cout<<"==================================="<<endl;
        cout << "\tAntrian Penuh !!!" << endl;
        cout<<"==================================="<<endl;
      
    } else
    {
        Tumpukan_Perlengkapan.top++;
        cout << "nama barang (perlengkapan) : ";
        cin >> Tumpukan_Perlengkapan.dataStackString[Tumpukan_Perlengkapan.top];
      
      cout << endl;
      
      cout << "--- barang '" << Tumpukan_Perlengkapan.dataStackString[Tumpukan_Perlengkapan.top]<< "' masuk ke Stack ---" << endl << endl;
    }
}

//Deklarasi void popLKS pada class manajemen
//untuk menghapus data pengambi perlengkapan
void Manajemen::popPerlengkapan()
{
    if (isEmptyPerlengkapan())
    {
        cout<<"==================================="<<endl;
        cout << "\tperlengkapan !! " << endl;
        cout<<"==================================="<<endl;
      
    } else
    {
        cout << "\n--- Kode '" << Tumpukan_Perlengkapan.dataStackString[Tumpukan_Perlengkapan.top] << "' keluar dari Stack ---" << endl;
        Tumpukan_Perlengkapan.top--;
    }
}

//Deklarasi void printStackLKS pada class manajemen
//untuk menampilkan data seluruh pengambilperlengkapan
void Manajemen::printStackPerlengkapan()
{
    if (isEmptyPerlengkapan())
    {
        cout<<"**************"<<endl;
        cout<< "\tBelum Ada perlengkapan\n";
        cout<<"**************"<<endl;
    } else
    {
        cout<<"*************"<<endl;
        cout << "Data Tumpukan : ";
        for (c = Tumpukan_Perlengkapan.top; c >= 0; c--)
            cout << Tumpukan_Perlengkapan.dataStackString[c] << ((c == 0) ? "" : ",");
        cout<<"\n*************"<<endl;
    }
}

//Deklarasi void clearLKS pada class manajemen
//untuk menhapus seluruh data pengambil perlengkapan
void Manajemen::ClearPerlengkapan()
{
    if (isEmptyPerlengkapan())
    {
        cout<<"*******************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan Yang Akan Di CLEAR !\n";
        cout<<"*******************"<<endl;
    }else
    {  
        Tumpukan_Perlengkapan.top=-1;
        cout<<"\nSemua Data Dalam Antrian Akan Di HAPUS, Silahkan Tekan 'Enter'\n";
    }
}

//Deklarasi void Hitungperlengkapan pada class manajemen
//untuk menampilkan kode data terbesar, terkecil & jumlah antrian pengambil perlengkapan
void Manajemen::HitungPerlengkapan()
{
    // total = 0;
    // maksimum = Tumpukan_Perlengkapan.dataStackString[0];
    // minimum = Tumpukan_Perlengkapan.dataStack[0];
    
     
    // for( c= 0; c < Tumpukan_Perlengkapan.dataStack[c]; c++) 
    //   {
    //     if (Tumpukan_Perlengkapan.dataStack[c] > maksimum)  
    //     {
    //         maksimum = Tumpukan_Perlengkapan.dataStack[c];
    //     }else if (Tumpukan_Perlengkapan.dataStack[c] < minimum)
    //     {
    //         minimum = Tumpukan_Perlengkapan.dataStack[c];     
    //     }
    // }
  
    // cout << "\n- Kode perlengkapan tebesar Dalam stack Adalah : " << maksimum << endl;
    // cout << "- Kode perlengkapan terkecil Dalam antrian Stack  : "<< minimum << endl;
         
    // for( c=0; c<=Tumpukan_Perlengkapan.dataStackS[c]; c++)
    //     {
    //         total=total+Tumpukan_Perlengkapan.dataStack[c];
    //     }
        //cout << "-Total Data Dalam Stack Adalah       : "<< total <<endl;
  cout << "- Jumlah stack saat ini sejumlah   : " << Tumpukan_Perlengkapan.top + 1 << endl;
}

//Deklarasi void searchLKS pada class manajemen
//untuk mencari data pengambil perlengkapan
void Manajemen::SearchPerlengkapan()
{
    string caridata;
    int ketemu = 0;
    if(isEmptyPerlengkapan())
    {
        cout<<"**************"<<endl;
        cout<< "\tTidak Ada antrian !\n";
        cout<<"**************"<<endl;
    }else
    {
        cout << "\n\nMasukkan kode sperlengkapan yang akan dicari = ";
        cin >> caridata;
        for (c = 0; c<Tumpukan_Perlengkapan.top; c++)
        {
            if (caridata == Tumpukan_Perlengkapan.dataStackString[c])
            {
                cout << "\nKode siswa " << caridata << " ditemukan pada Stack ke- = " << c + 1<<endl;
                ketemu = 1; 
            }
        }
    if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada !!";
    }
}

//Deklarasi void editLKS pada class manajemen
//untuk mengedit data pengambil LKS
void Manajemen::EditPerlengkapan()
{
    if(isEmptyPerlengkapan())
    {
        cout<<"**************"<<endl;
        cout<< "\tTidak Ada Stack !\n";
        cout<<"**************"<<endl;
    }else
    {
        cout << "\n\nMasukkan data kode siswa yang akan diubah = ";
        cin >> gantiPPerlengkapan;
        for (c = 0; c<Tumpukan_Perlengkapan.top; c++)
        {
            if (Tumpukan_Perlengkapan.dataStackString[c] == gantiPPerlengkapan)
            {
              cout << "Masukkan kode perlengkapan baru = ";
              cin >> Tumpukan_Perlengkapan.dataStackString[c];
            }
        }
    }
}

//Deklarasi void hapusLKS pada class manajemen
//untuk menghapus data pengambil LKS yang dipilih
void Manajemen::HapusPerlengkapan()
{
    if (isEmptyPerlengkapan())
    {
        cout<<"**************"<<endl;
        cout<< "\tTidak Ada Stack !\n";
        cout<<"**************"<<endl;
    }else
    {               
        cout<<"\nData kode perlengkapan yang akan dihapus : ";
        cin>>hapusStackPerlengkapan;
         
        for(c=0;c<=20;c++)
        {
            if(Tumpukan_Perlengkapan.dataStackString[c]==hapusStackPerlengkapan)
            {
                Tumpukan_Perlengkapan.dataStackString[c]=(Tumpukan_Perlengkapan.dataStackString[Tumpukan_Perlengkapan.top--]);  
                cout << "\nYakin Ingin Menghapus Data '" << hapusStackPerlengkapan << "' Dari Stack ?" <<endl;     
            }           
        }   
    }
}


//Deklarasi menu_pendaftaran pada class manajemen
//untuk membuat menu pada fitur entrian penerimaan guru baru
void Manajemen::menu_pendaftaran()
{
  menu:
  cout << "=======================================" << endl;
  cout << "||    MENU ANTRIAN penerimaan guru   ||" << endl;
  cout << "||              Baru                 ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Mendaftar Antrian (insert)     ||" << endl;
  cout << "|| 2) Keluar Antrian (Delete)        ||" << endl;
  cout << "|| 3) Tampilkan Antrian              ||" << endl;
  cout << "|| 4) Keluar program                 ||" << endl;
  cout << "=======================================" << endl;
  
  do{
    cout << "Masukkan pilihan : ";
    cin >> chpendaftaran;
    
    switch(chpendaftaran)
    {
      case 1:
        cout << "Masukkan Nama  : ";
        cin >> apendaftaran;
        cout << "Masukkan Nomor Induk  : ";
        cin >> valpendaftaran;
        cout << endl;
        
        cout << "- Nomor Induk " << valpendaftaran << " masuk ke dalam antrian -" << endl;
        insertCQpendaftaran(valpendaftaran);
        insertCQ_Stringpendaftaran(apendaftaran);
        goto menu;
        break;
      
      case 2:
        deleteCQpendaftaran();
        goto menu;
        break;
      
      case 3:
        displayCQpendaftaran();
        goto menu;
        break;
      
      case 4:
        cout << "Terima Kasih " << endl;
        menu();
        break;
      
      default:
        cout << "Incorrect !" << endl;
        goto menu;
      
      }
    }while(chpendaftaran!= 4);
}

//Deklarasi insertCQpendaftaran pada class manajemen
//untuk memasukkan data pada queue dengan array
void Manajemen::insertCQpendaftaran(int valpendaftaran)
{
  if((frontpendaftaran == 0 && rearpendaftaran == npendaftaran-1) || (frontpendaftaran == rearpendaftaran+1))
  {
    cout << "Antrian Penuh " << endl;
    return;
    
  }
  if(frontpendaftaran == -1)
  {
    frontpendaftaran = 0;
    rearpendaftaran = 0;
  }else
  {
    if(rearpendaftaran == npendaftaran -1)
    {
      rearpendaftaran = 0;
    }else
    {
      rearpendaftaran = rearpendaftaran + 1;
    }
  }
  cqueuependaftaran[rearpendaftaran] = valpendaftaran;
  
  cout << endl;
}

//Deklarasi insertCQ_Stringpendaftran pada class manajemen
//untuk memasukkan data berupa string pada queue dengan array
void Manajemen::insertCQ_Stringpendaftaran(string apendaftaran)
{
  if((front_Stringpendaftaran == 0 && rear_Stringpendaftaran == npendaftaran - 1) || (front_Stringpendaftaran == rear_Stringpendaftaran + 1))
  {
    cout << "Antrian Penuh " << endl;
    return;
    
  }
  if(front_Stringpendaftaran == -1)
  {
    front_Stringpendaftaran = 0;
    rear_Stringpendaftaran = 0;
  }else
  {
    if(rear_Stringpendaftaran == npendaftaran -1){
      rear_Stringpendaftaran = 0;
    }else
    {
      rear_Stringpendaftaran = rear_Stringpendaftaran + 1;
    }
  }
  cqueue_Stringpendaftaran[rear_Stringpendaftaran] = apendaftaran;

  cout << endl;
}

//Deklarasi deleteCQpendaftran apada class manajemen
//untuk menghapus antrian 
void Manajemen::deleteCQpendaftaran()
{
  if(frontpendaftaran == -1)
  {
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueuependaftaran[frontpendaftaran] << endl;

  if(frontpendaftaran == rearpendaftaran)
  {
    frontpendaftaran = -1;
    rearpendaftaran = -1;
  }else
  {
    if(frontpendaftaran == npendaftaran-1)
    {
      frontpendaftaran = 0;
    }else
    {
      frontpendaftaran = frontpendaftaran+ 1;
    }
  }
  cout << endl;
}

//Deklarasi deleteCQStringpendaftran pada class manajemen
//untuk menghapus data antrian berupa string
void Manajemen::deleteCQStringpendaftaran()
{
  if(front_Stringpendaftaran == -1)
  {
    cout << "Antrian Tidak Ada " << endl;
    return;
    
  }
  cout << "calon guru dengan Nomor Induk " << cqueuependaftaran[frontpendaftaran] << " Keluar Antrian " << endl;

  if(front_Stringpendaftaran == rear_Stringpendaftaran)
  {
    front_Stringpendaftaran = -1;
    rear_Stringpendaftaran= -1;
  }else
  {
    if(front_Stringpendaftaran == npendaftaran -1)
    {
      front_Stringpendaftaran = 0;
    }else
    {
      front_Stringpendaftaran = front_Stringpendaftaran + 1;
    }
  }
  cout << endl;
}

//Deklarasi displayCQpendaftaran pada class manajemen
//untuk menampilkan seluruh data antrian / queue yang telah dimasukkan
//serta untuk memasukkan data pada file .txt
void Manajemen::displayCQpendaftaran()
{
  int fpendaftaran = frontpendaftaran, rpendaftaran = rearpendaftaran;
  int ffpendaftaran = front_Stringpendaftaran, rrpendaftaran = rear_Stringpendaftaran;
  ofstream Antre_pendaftaran;
  Antre_pendaftaran.open("pendaftaran_Guru.txt");
  
  if(frontpendaftaran == -1)
  {
    cout << endl;
    cout << "Antrian Kosong" << endl << endl;
    Antre_pendaftaran<< "Antrian Kosong" << endl;
    return;
    
  }
  cout << endl;
  cout << "Antrian yang Ada :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama calon guru " << setw(12) << " | " << setw(12) << " Nomor Induk " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_pendaftaran << "Antrian yang Ada :" << endl;
  Antre_pendaftaran << "------------------------------------------------------------------------------------------------" << endl;
  Antre_pendaftaran << "| " << setw(12) << "Nama calon guru " << setw(12) << " | " << setw(12) << " Nomor Induk " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_pendaftaran << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fpendaftaran <= rpendaftaran)
  {
    while(fpendaftaran <= rpendaftaran)
    {
      cout <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran == frontpendaftaran){
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        cout <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_pendaftaran <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran == frontpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling belakang  |" << endl;
      }else
      {
       Antre_pendaftaran << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_pendaftaran << "------------------------------------------------------------------------------------------------" << endl;
      fpendaftaran++;
    }
  }else
  {
    while(fpendaftaran <= npendaftaran - 1)
    {
      cout <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran == frontpendaftaran)
      {
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        cout <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_pendaftaran <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran == frontpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        Antre_pendaftaran << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_pendaftaran << "------------------------------------------------------------------------------------------------" << endl;
      fpendaftaran++;
    }
    fpendaftaran = 0;
    while(fpendaftaran<= rpendaftaran)
    {
      cout <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran == frontpendaftaran)
      {
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_pendaftaran <<"| "<< setw(12) << cqueue_Stringpendaftaran[fpendaftaran] << setw(12) << " | " << setw(12) << cqueuependaftaran[fpendaftaran] << setw(12) << " |" << setw(12) << fpendaftaran << setw(12) << " | ";
      if(fpendaftaran== frontpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fpendaftaran == rearpendaftaran)
      {
        Antre_pendaftaran <<setw(12) << " Antrian paling belakang |"<< endl;
      }else
      {
        Antre_pendaftaran << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_pendaftaran << "------------------------------------------------------------------------------------------------" << endl;
      fpendaftaran++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_pendaftaran.close();
}


//Deklasrasi menuBUKU pada class manajemen
//untuk membuat menu pada fitur antrian prioritas peminjaman buku perpustakaan
void Manajemen::menuBUKU()
{
  cout <<"===============================================" << endl;
  cout <<"||           MENU ANTRIAN PRIORITAS          ||" << endl;
  cout <<"||        PEMINJAMAN BUKU PERPUSTAKAAN       ||" << endl;
  cout <<"||-------------------------------------------||" << endl;
  cout <<"|| 1) Tambah antrian                         ||" << endl;
  cout <<"|| 2) Hapus antrian                          ||" << endl;
  cout <<"|| 3) Tampilkan antrian                      ||" << endl;
  cout <<"|| 4) Kembali                                ||" << endl;
  cout <<"===============================================" << endl;
  cout << "Pilih : ";
  cin >> pil_menuBUKU;

  switch(pil_menuBUKU)
  {
    case 1:
      insertBUKU(prioBUKU, itemBUKU);
      menuBUKU();
    break;
    
    case 2:
      popBUKU();
      menuBUKU();
    break;
    
    case 3:
      displayBUKU();
      menuBUKU();
    break;
    
    case 4:
      menu();
    break;
  }
}

//Deklarasi insertBUKU pada class manajemen
//untuk memasukkan data antrian prioritas pada fitur priority queue peminjaman buku perpus
void Manajemen::insertBUKU(int prioBUKU, string itemBUKU)
{
    cout <<"===============================================" << endl;
    cout <<"||             PILIH KATEGORI (1)            ||" << endl;
    cout <<"||-------------------------------------------||" << endl;
    cout <<"|| 1) Buku Pelajaran                         ||" << endl;
    cout <<"|| 2) Buku Soal Latihan                      ||" << endl;
    cout <<"|| 3) Buku NOvel                             ||" << endl;
    cout <<"===============================================" << endl;
    cout << "Pilih Kategori: ";
    cin >> prioBUKU;
  
    cout << "Judul buku : ";
    cin >> itemBUKU;
  
    cout << endl;
    cout << " - " << itemBUKU << " Masuk dalam antrian -" << endl;
    cout << endl;
  
		NodePQ *newNodeBUKU = new NodePQ(prioBUKU, itemBUKU);
		NodePQ *currBUKU = firstBUKU;
		NodePQ *prevBUKU = currBUKU;
  
		if(currBUKU == NULL)
    {
			firstBUKU = lastBUKU = newNodeBUKU;
			delete currBUKU;
			delete prevBUKU;
		}
		else
    {
			while(currBUKU != NULL && currBUKU->PriorityBUKU <= prioBUKU)
      {
				prevBUKU = currBUKU;
				currBUKU = currBUKU->nextBUKU;
			}
			prevBUKU->nextBUKU = newNodeBUKU;
			newNodeBUKU->previousBUKU = prevBUKU;
			newNodeBUKU->nextBUKU = currBUKU;
		}
	}

//Deklarasi popBUKU pada class manajemen
//untuk menghapus data antrian sesuai queue
void Manajemen::popBUKU()
{
		NodePQ *tmpBUKU = firstBUKU;
		while(tmpBUKU->nextBUKU->nextBUKU != NULL)
    {
			tmpBUKU = tmpBUKU->nextBUKU;
		}
		tmpBUKU->nextBUKU = NULL;
		lastBUKU = tmpBUKU;

	}

//Deklarasi displayBUKU pada class manajemen
//untuk menampilkan hasil dari priority queue yang tersedia
void Manajemen::displayBUKU()
{
  ofstream data_buku;
  data_buku.open("Antrian_PinjamBukuPerpus.txt");
	NodePQ *tmpBUKU = firstBUKU;
  cout << "========================================================================================" << endl;
  cout << "|| " << setw(12) << "Nomor Kategori Antrian " << setw(12) << "|| " << setw(12) << "Judul Buku " << setw(12) << "|| " << setw(12) << "Kategori Buku " << setw(12) << "||" << endl;
  cout << "========================================================================================" << endl;
  data_buku << "========================================================================================" << endl;
  data_buku << "|| " << setw(12) << "Nomor Kategori Antrian " << setw(12) << "|| " << setw(12) << "Judul Buku " << setw(12) << "|| " << setw(12) << "Kategori Buku " << setw(12) << "||" << endl;
  data_buku << "========================================================================================" << endl;

  if(tmpBUKU == NULL)
  {
    cout << "Tidak ada antrian" << endl;
    data_buku << "Tidak ada antrian" << endl;
  }
  
	while(tmpBUKU != NULL)
  {
    cout << "|| " << setw(12) << tmpBUKU->PriorityBUKU << setw(12) << "|| " << setw(12) << tmpBUKU->ItemBUKU << setw(12) << "|| " << setw(12) << tmpBUKU->StatusBUKU << setw(12) << "||" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    data_buku << "|| " << setw(12) << tmpBUKU->PriorityBUKU << setw(12) << "|| " << setw(12) << tmpBUKU->ItemBUKU << setw(12) << "|| " << setw(12) << tmpBUKU->StatusBUKU << setw(12) << "||" << endl;
    data_buku << "--------------------------------------------------------------------------------------" << endl;
		tmpBUKU = tmpBUKU->nextBUKU;
	}
  cout << "========================================================================================" << endl;
  data_buku << "========================================================================================" << endl;
  data_buku.close();
  
  cout << endl;
}


//Deklarasi menupendataan pada class manajemen
//untuk membuat menu pada fitur pendataan anggota osis
void Manajemen::menupendataan()
{
  do
      {
        int pilketua, nimketua;// c;
        string namaketua, kelasketua;
        
        cout <<"===============================================" << endl;
        cout <<"||              DAFTAR PENDATAAN             ||" << endl;
        cout <<"||                ANGGOTA OSIS               ||" << endl;
        cout <<"||-------------------------------------------||" << endl;
        cout <<"|| 1) Tambah data                            ||" << endl;
        cout <<"|| 2) Lihat kunjungan pre-order              ||" << endl;
        cout <<"|| 3) Lihat kunjungan in-order               ||" << endl;
        cout <<"|| 4) Lihat kunjungan post-order             ||" << endl;
        cout <<"|| 5) keluar                                 ||" << endl;
        cout <<"===============================================" << endl;
            cout << "Pilihan : ";
            cin >>  pilketua;
        
            switch(pilketua)
            {
            //jika pil bernilai 1
            case 1 :
                  cout << endl;
                  cout << "INPUT : " << endl;
                  cout << "-----------------" << endl;
                  cout << "Kode siswa : ";
                 cin >> nimketua;
                  cout << "Nama : ";
                  cin >> namaketua;
                  cout << "kelas: ";
                  cin >>kelasketua;
                  //panggil fungsi untuk menambah node yang berisi data pada tree
                  tambah_data(&pohonketua, nimketua, namaketua, kelasketua);
                  break;
                 
            //jika pil bernilai 2
            case 2 :
                  cout << "OUTPUT PRE ORDER : " << endl;
                  cout << "------------------" << endl;
                cout<<"=============================================================="<<endl;
                  cout<<"|| " <<setw(10)<< "NIM " <<setw(10)<< "| "<<setw(10)<<"Nama "<<setw(10)<<"| "<<setw(10)<<"Kelas "<<setw(10)<< "||"<< endl;
                cout<<"||==========================================================||"<<endl;
                  if(pohonketua!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        preOrder_ketua(pohonketua);
                  else
                        cout << "Masih kosong!" << endl;
              cout<<"=============================================================="<<endl;
                  break;
                 
            //jika pil bernilai 3
            case 3 :
                  cout << "OUTPUT IN ORDER : " << endl;
                  cout << "------------------" << endl;

                cout<<"=============================================================="<<endl;
                  cout<<"|| " <<setw(10)<< "NIM " <<setw(10)<< "| "<<setw(10)<<"Nama "<<setw(10)<<"| "<<setw(10)<<"Kelas "<<setw(10)<< "||"<< endl;
                cout<<"||==========================================================||"<<endl;
                  if(pohonketua!=NULL)
                       //panggil fungsi untuk mencetak data secara inOrder
                        inOrder_ketua(pohonketua);
                  else
                        cout << "Masih kosong!" << endl;
              cout<<"=============================================================="<<endl;
                  break;
           
            //jika pil bernilai 4
            case 4 :
                  cout << "OUTPUT POST ORDER : " << endl;
                  cout << "------------------" << endl;

                cout<<"=============================================================="<<endl;
                  cout<<"|| " <<setw(10)<< "NIM " <<setw(10)<< "| "<<setw(10)<<"Nama "<<setw(10)<<"| "<<setw(10)<<"Kelas "<<setw(10)<< "||"<< endl;
                cout<<"||==========================================================||"<<endl;
                  if(pohonketua!=NULL)
                       //panggil fungsi untuk mencetak data secara postOrder
                        postOrder_ketua(pohonketua);
                  else
                        cout << "Masih kosong!" << endl;
              cout<<"=============================================================="<<endl;
                  break;
            }
      }while(pilketua != 5); //akan diulang jika input tidak samadengan 5
}

//Deklarasi tabah_data pada class manajemen
//fungsi untuk menambahkan node baru
void Manajemen::tambah_data(Nodeketua **rootketua, int nimbaru, string namabaru, string kelasbaru)
{
      //jika root masih kosong
      if((*rootketua) == NULL)
      {
            //pembuatan node baru
            Nodeketua *baruketua;
            //pengalokasian memori dari node yang telah dibuat
            baruketua = new Nodeketua;
            //inisialisasi awal node yang baru dibuat
            baruketua->nimketua = nimbaru;
            baruketua->namaketua = namabaru;
            baruketua->kelasketua = kelasbaru;
            baruketua->kiriketua = NULL;
            baruketua->kananketua = NULL;
            (*rootketua) = baruketua;
            (*rootketua)->kiriketua = NULL;
            (*rootketua)->kananketua = NULL;
           cout << "Data bertambah!" << endl;
      }
     //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
      else if(nimbaru<(*rootketua)->nimketua)
            tambah_data(&(*rootketua)->kiriketua, nimbaru, namabaru, kelasbaru);
     //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
      else if(nimbaru>(*rootketua)->nimketua)
            tambah_data(&(*rootketua)->kananketua, nimbaru, namabaru, kelasbaru);
     //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
      else if(nimbaru == (*rootketua)->nimketua)
            cout << "Data sudah ada!" << endl;
}

//Deklarasi preOrder_ketua pada class manajemen
//fungsi yang digunakan untuk mencetak tree secara preOrder
void Manajemen::preOrder_ketua(Nodeketua *rootketua)
{ 
      if(rootketua != NULL)
      {
        cout<<"|| " <<setw(10)<< rootketua->nimketua <<setw(10)<< "| "<<setw(10)<<rootketua->namaketua<<setw(10)<<"| "<<setw(10)<<rootketua->kelasketua <<setw(10)<< "||"<< endl;
            preOrder_ketua(rootketua->kiriketua);
            preOrder_ketua(rootketua->kananketua);
      }
}

//Deklarasi inOrder_Ketua pada class manajemen
//fungsi yang digunakan untuk mencetak tree secara inOrder
void Manajemen::inOrder_ketua(Nodeketua *rootketua)
{
  
      if(rootketua != NULL)
      {
            inOrder_ketua(rootketua->kiriketua);
            cout<<"|| " <<setw(10)<< rootketua->nimketua <<setw(10)<< "| "<<setw(10)<<rootketua->namaketua<<setw(10)<<"| "<<setw(10)<<rootketua->kelasketua <<setw(10)<< "||"<< endl;
            inOrder_ketua(rootketua->kananketua);
      }
}

//Deklarasi posOrder_ketua pada class manajemen
//fungsi yang digunakan untuk mencetak tree secara postOrder
void Manajemen::postOrder_ketua(Nodeketua *rootketua)
{
  
      if(rootketua != NULL)
      {
            postOrder_ketua(rootketua->kiriketua);
            postOrder_ketua(rootketua->kananketua);
            cout<<"|| " <<setw(10)<< rootketua->nimketua <<setw(10)<< "| "<<setw(10)<<rootketua->namaketua<<setw(10)<<"| "<<setw(10)<<rootketua->kelasketua <<setw(10)<< "||"<< endl;
            //inOrder(root->kanan);
      }
}

//Deklarasi menu_PerencanaanGURU pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanGURU(){
  nodeptrGURU rootGURU = NULL, root1GURU = NULL,minGURU, maxGURU;//,flag;
  int aGURU,choiceGURU,findeleGURU, delete_aGURU;
  string delete_bGURU, delete_cGURU;
  char chGURU = 'y';
  string bGURU, cGURU;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||          PEMBELIAN FASILITAS RUANG GURU           ||"<<endl;
      cout << "||---------------------------------------------------||"<<endl;
      cout << "|| 1) Tambahkan data baru                            ||"<<endl;
      cout << "|| 2) Search jumlah minimum                          ||"<<endl;
      cout << "|| 3) Search jumlah maximum                          ||"<<endl;
      cout << "|| 4) Cari data                                      ||"<<endl;
      cout << "|| 5) Hapus data                                     ||"<<endl;
      cout << "|| 6) Tampilkan data Pre-order                       ||"<<endl;
      cout << "|| 7) Tampilkan data In-order                        ||"<<endl;
      cout << "|| 8) Tampilkan data Post-order                      ||"<<endl;
      cout << "|| 9) Tampilkan height of the tree                   ||"<<endl;
      cout << "|| 10) Keluar                                        ||"<<endl;
      cout << "======================================================="<< endl;

        cout<<"\nEnter the choice: ";
        cin>>choiceGURU;

        cout << endl;

        switch(choiceGURU)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bGURU;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cGURU;
            cout<<"Masukkan jumlah barang : ";
            cin>>aGURU;
            insertGURU(aGURU, bGURU, cGURU, rootGURU);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootGURU !=NULL)
            {
                cout << endl;
                minGURU=findminGURU(rootGURU);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minGURU->elementGURU<<endl;
            }
            break;
          
        case 3:
            if (rootGURU !=NULL)
            {
                cout << endl;
                maxGURU=findmaxGURU(rootGURU);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxGURU->elementGURU<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleGURU;
            if (rootGURU != NULL)
            {
                findGURU(findeleGURU,rootGURU);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bGURU;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cGURU;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aGURU;
            delGURU(delete_aGURU, delete_bGURU, delete_cGURU, rootGURU);
            inorderGURU(rootGURU);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderGURU(rootGURU);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderGURU(rootGURU);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderGURU(rootGURU);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightGURU(rootGURU)<< " ||"<<endl;
            cout<<"=============================================================="<<endl;

            break;
        case 10:
            cout<<"Terima Kasih"<<endl;
            menu_utamaPerencanaan();
            break;
        default:
            cout<<"Maaf! Inputan salah"<<endl;
            goto fasilitas_kelas;
            break;
        }
    }
    while(choiceGURU != 10);
}

//Deklasrasi insertGURU pada class manajemen
// Inserting a node
void Manajemen::insertGURU(int xGURU, string yGURU, string zGURU, nodeptrGURU &pGURU)
{
    if (pGURU == NULL)
    {
        pGURU = new nodeGURU;
        pGURU->elementGURU = xGURU;
        pGURU->element_bGURU = yGURU;
        pGURU->element_cGURU = zGURU;
        pGURU->leftGURU = NULL;
        pGURU->rightGURU = NULL;
        pGURU->heightGURU = 0;
        if (pGURU == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xGURU < pGURU->elementGURU)
        {
            insertGURU(xGURU, yGURU, zGURU, pGURU->leftGURU);
            if ((bsheightGURU(pGURU->leftGURU) - bsheightGURU(pGURU->rightGURU)) == 2)
            {
                if (xGURU < pGURU->leftGURU->elementGURU)
                {
                    pGURU = srlGURU(pGURU);
                }
                else
                {
                    pGURU = drlGURU(pGURU);
                }
            }
        }
        else if (xGURU > pGURU->elementGURU)
        {
            insertGURU(xGURU, yGURU, zGURU, pGURU->rightGURU);
            if ((bsheightGURU(pGURU->rightGURU) - bsheightGURU(pGURU->leftGURU)) == 2)
            {
                if (xGURU > pGURU->rightGURU->elementGURU)
                {
                    pGURU = srrGURU(pGURU);
                }
                else
                {
                    pGURU = drrGURU(pGURU);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mGURU, nGURU, dGURU;
    mGURU = bsheightGURU(pGURU->leftGURU);
    nGURU = bsheightGURU(pGURU->rightGURU);
    dGURU = maxGURU(mGURU, nGURU);
    pGURU->heightGURU = dGURU + 1;
}

//Deklasrasi FinminGURU pada class manajemen
// Finding the Smallest
nodeptrGURU Manajemen::findminGURU(nodeptrGURU pGURU)
{
    if (pGURU == NULL)
    {
        cout<<"Data kosong" << endl;
        return pGURU;
    }
    else
    {
        while(pGURU->leftGURU !=NULL)
        {
            pGURU = pGURU->leftGURU;
            //return p;
        }
        return pGURU;
    }
}

//Deklasrasi finmaxGURU pada class manajemen
// Finding the Largest node
nodeptrGURU Manajemen::findmaxGURU(nodeptrGURU pGURU)
{
    if (pGURU == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pGURU;
    }
    else
    {
        while(pGURU->rightGURU !=NULL)
        {
            pGURU = pGURU->rightGURU;
            //return p;
        }
        return pGURU;
    }
}

//Deklasrasi findGURU pada class manajemen
// Finding an element
void Manajemen::findGURU(int xGURU,nodeptrGURU &pGURU)
{
    if (pGURU == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xGURU < pGURU->elementGURU)
        {
            findGURU(xGURU, pGURU->leftGURU);
        }
        else
        {
            if (xGURU > pGURU->elementGURU)
            {
                findGURU(xGURU, pGURU->rightGURU);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyGURU pada class manajemen
// Copy a tree
void Manajemen::copyGURU(nodeptrGURU &pGURU,nodeptrGURU &p1GURU)
{
    makeemptyGURU(p1GURU);
    p1GURU = nodecopyGURU(pGURU);
}

//Deklasrasi makeempyuGURU pada class manajemen
// Make a tree empty
void Manajemen::makeemptyGURU(nodeptrGURU &pGURU)
{
    nodeptrGURU dGURU;
    if (pGURU != NULL)
    {
        makeemptyGURU(pGURU->leftGURU);
        makeemptyGURU(pGURU->rightGURU);
        dGURU = pGURU;
        free(dGURU);
        pGURU = NULL;
    }
}

//Deklasrasi nodecopyGURU pada class manajemen
// Copy the nodes
nodeptrGURU Manajemen::nodecopyGURU(nodeptrGURU &pGURU)
{
    nodeptrGURU tempGURU;
    if (pGURU == NULL)
    {
        return pGURU;
    }
    else
    {
        tempGURU = new nodeGURU;
        tempGURU->elementGURU = pGURU->elementGURU;
        tempGURU->leftGURU = nodecopyGURU(pGURU->leftGURU);
        tempGURU->rightGURU = nodecopyGURU(pGURU->rightGURU);
        return tempGURU;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delGURU(int xGURU, string yGURU, string zGURU, nodeptrGURU &pGURU)
{
    nodeptrGURU dGURU;
    if (pGURU == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xGURU < pGURU->elementGURU)
    {
        delGURU(xGURU, yGURU, zGURU, pGURU->leftGURU);
    }
    else if (xGURU > pGURU->elementGURU)
    {
        delGURU(xGURU, yGURU, zGURU, pGURU->rightGURU);
    }
    else if ((pGURU->leftGURU == NULL) && (pGURU->rightGURU == NULL))
    {
        dGURU = pGURU;
        free(dGURU);
        pGURU = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pGURU->leftGURU == NULL)
    {
        dGURU = pGURU;
        free(dGURU);
        pGURU = pGURU->rightGURU;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pGURU->rightGURU == NULL)
    {
        dGURU = pGURU;
        pGURU = pGURU->leftGURU;
        free(dGURU);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pGURU->elementGURU = deleteminGURU(pGURU->rightGURU);
    }
}

//Deklasrasi deleteminGURU pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminGURU(nodeptrGURU &pGURU)
{
    int cGURU;
    cout<<"inside deltemin\n"<<endl;
    if (pGURU->leftGURU == NULL)
    {
        cGURU = pGURU->elementGURU;
        pGURU = pGURU->rightGURU;
        return cGURU;
    }
    else
    {
        cGURU = deleteminGURU(pGURU->leftGURU);
        return cGURU;
    }
}

//Deklasrasi prorderGURU pada class manajemen
//untuk mencari preorder
void Manajemen::preorderGURU(nodeptrGURU pGURU)
{
    if (pGURU != NULL)
    {
      cout<<"|| " <<setw(10)<< pGURU->element_bGURU << setw(10) << "| " << setw(10)<<pGURU->element_cGURU << setw(10) << "| " <<setw(10)<< pGURU->elementGURU << setw(10) << "||"<< endl;
        preorderGURU(pGURU->leftGURU);
        preorderGURU(pGURU->rightGURU);
    }
}

//Deklasrasi inrderGURU pada class manajemen
// Inorder Printing
void Manajemen::inorderGURU(nodeptrGURU pGURU)
{
    if (pGURU != NULL)
    {
        inorderGURU(pGURU->leftGURU);
      
        cout<<"|| " <<setw(10)<< pGURU->element_bGURU << setw(10) << "| " << setw(10)<<pGURU->element_cGURU << setw(10) << "| " <<setw(10)<< pGURU->elementGURU << setw(10) << "||"<< endl;
      
        inorderGURU(pGURU->rightGURU);
    }
}

//Deklasrasi postorderGURU pada class manajemen
// PostOrder Printing
void Manajemen::postorderGURU(nodeptrGURU pGURU)
{
    if (pGURU != NULL)
    {
        postorderGURU(pGURU->leftGURU);
        postorderGURU(pGURU->rightGURU);
        
        cout<<"|| " <<setw(10)<< pGURU->element_bGURU << setw(10) << "| " << setw(10)<<pGURU->element_cGURU << setw(10) << "| " <<setw(10)<< pGURU->elementGURU << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macGURU pada class manajemen
//untuk mencari max
int Manajemen::maxGURU(int value1GURU, int value2GURU)
{
    return ((value1GURU > value2GURU) ? value1GURU : value2GURU);
}

//Deklasrasi bsheightGURU pada class manajemen
//untuk mencari hight
int Manajemen::bsheightGURU(nodeptrGURU pGURU)
{
    int tGURU;
    if (pGURU == NULL)
    {
        return -1;
    }
    else
    {
        tGURU = pGURU->heightGURU;
        return tGURU;
    }
}

//Deklasrasi srlGURU pada class manajemen
//untuk fungsi srl
nodeptrGURU Manajemen::srlGURU(nodeptrGURU &p1GURU)
{
    nodeptrGURU p2GURU;
    p2GURU = p1GURU->leftGURU;
    p1GURU->leftGURU = p2GURU->rightGURU;
    p2GURU->rightGURU = p1GURU;
    p1GURU->heightGURU = maxGURU(bsheightGURU(p1GURU->leftGURU), bsheightGURU(p1GURU->rightGURU)) + 1;
    p2GURU->heightGURU = maxGURU(bsheightGURU(p2GURU->leftGURU), p1GURU->heightGURU) + 1;
    return p2GURU;
}

//Deklasrasi srrGURU pada class manajemen
//untuk fungsi srr
nodeptrGURU Manajemen:: srrGURU(nodeptrGURU &p1GURU)
{
    nodeptrGURU p2GURU;
    p2GURU = p1GURU->rightGURU;
    p1GURU->rightGURU = p2GURU->leftGURU;
    p2GURU->leftGURU = p1GURU;
    p1GURU->heightGURU = maxGURU(bsheightGURU(p1GURU->leftGURU), bsheightGURU(p1GURU->rightGURU)) + 1;
    p2GURU->heightGURU = maxGURU(p1GURU->heightGURU, bsheightGURU(p2GURU->rightGURU)) + 1;
    return p2GURU;
}

//Deklasrasi drlGURU pada class manajemen
//untuk fungsi drl
nodeptrGURU Manajemen:: drlGURU(nodeptrGURU &p1GURU)
{
    p1GURU->leftGURU=srrGURU(p1GURU->leftGURU);
    return srlGURU(p1GURU);
}

//Deklasrasi drrGURU pada class manajemen
//untuk fungsi drr
nodeptrGURU Manajemen::drrGURU(nodeptrGURU &p1GURU)
{
    p1GURU->rightGURU = srlGURU(p1GURU->rightGURU);
    return srrGURU(p1GURU);
}

//Deklasrasi nonodesGURU pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesGURU(nodeptrGURU pGURU)
{
    int countGURU=0;
    if (pGURU!=NULL)
    {
        nonodesGURU(pGURU->leftGURU);
        nonodesGURU(pGURU->rightGURU);
        countGURU++;
    }
    return countGURU;
}

//Deklarasi menu_PerencanaanLAB pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanLAB(){
  nodeptrLAB rootLAB = NULL, root1LAB = NULL,minLAB, maxLAB;//,flag;
  int aLAB,choiceLAB,findeleLAB, delete_aLAB;
  string delete_bLAB, delete_cLAB;
  char chLAB = 'y';
  string bLAB, cLAB;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||          PEMBELIAN FASILITAS RUANG LAB           ||"<<endl;
      cout << "||---------------------------------------------------||"<<endl;
      cout << "|| 1) Tambahkan data baru                            ||"<<endl;
      cout << "|| 2) Search jumlah minimum                          ||"<<endl;
      cout << "|| 3) Search jumlah maximum                          ||"<<endl;
      cout << "|| 4) Cari data                                      ||"<<endl;
      cout << "|| 5) Hapus data                                     ||"<<endl;
      cout << "|| 6) Tampilkan data Pre-order                       ||"<<endl;
      cout << "|| 7) Tampilkan data In-order                        ||"<<endl;
      cout << "|| 8) Tampilkan data Post-order                      ||"<<endl;
      cout << "|| 9) Tampilkan height of the tree                   ||"<<endl;
      cout << "|| 10) Keluar                                        ||"<<endl;
      cout << "======================================================="<< endl;

        cout<<"\nEnter the choice: ";
        cin>>choiceLAB;

        cout << endl;

        switch(choiceLAB)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bLAB;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cLAB;
            cout<<"Masukkan jumlah barang : ";
            cin>>aLAB;
            insertLAB(aLAB, bLAB, cLAB, rootLAB);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootLAB !=NULL)
            {
                cout << endl;
                minLAB=findminLAB(rootLAB);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minLAB->elementLAB<<endl;
            }
            break;
          
        case 3:
            if (rootLAB !=NULL)
            {
                cout << endl;
                maxLAB=findmaxLAB(rootLAB);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxLAB->elementLAB<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleLAB;
            if (rootLAB != NULL)
            {
                findLAB(findeleLAB,rootLAB);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bLAB;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cLAB;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aLAB;
            delLAB(delete_aLAB, delete_bLAB, delete_cLAB, rootLAB);
            inorderLAB(rootLAB);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderLAB(rootLAB);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderLAB(rootLAB);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderLAB(rootLAB);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightLAB(rootLAB)<< " ||"<<endl;
            cout<<"=============================================================="<<endl;

            break;
        case 10:
            cout<<"Terima Kasih"<<endl;
            menu_utamaPerencanaan();
            break;
        default:
            cout<<"Maaf! Inputan salah"<<endl;
            goto fasilitas_kelas;
            break;
        }
    }
    while(choiceLAB != 10);
}

//Deklasrasi insertLAB pada class manajemen
// Inserting a node
void Manajemen::insertLAB(int xLAB, string yLAB, string zLAB, nodeptrLAB &pLAB)
{
    if (pLAB == NULL)
    {
        pLAB = new nodeLAB;
        pLAB->elementLAB = xLAB;
        pLAB->element_bLAB = yLAB;
        pLAB->element_cLAB = zLAB;
        pLAB->leftLAB = NULL;
        pLAB->rightLAB = NULL;
        pLAB->heightLAB = 0;
        if (pLAB == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xLAB < pLAB->elementLAB)
        {
            insertLAB(xLAB, yLAB, zLAB, pLAB->leftLAB);
            if ((bsheightLAB(pLAB->leftLAB) - bsheightLAB(pLAB->rightLAB)) == 2)
            {
                if (xLAB < pLAB->leftLAB->elementLAB)
                {
                    pLAB = srlLAB(pLAB);
                }
                else
                {
                    pLAB = drlLAB(pLAB);
                }
            }
        }
        else if (xLAB > pLAB->elementLAB)
        {
            insertLAB(xLAB, yLAB, zLAB, pLAB->rightLAB);
            if ((bsheightLAB(pLAB->rightLAB) - bsheightLAB(pLAB->leftLAB)) == 2)
            {
                if (xLAB > pLAB->rightLAB->elementLAB)
                {
                    pLAB = srrLAB(pLAB);
                }
                else
                {
                    pLAB = drrLAB(pLAB);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mLAB, nLAB, dLAB;
    mLAB = bsheightLAB(pLAB->leftLAB);
    nLAB = bsheightLAB(pLAB->rightLAB);
    dLAB = maxLAB(mLAB, nLAB);
    pLAB->heightLAB = dLAB + 1;
}

//Deklasrasi FinminLAB pada class manajemen
// Finding the Smallest
nodeptrLAB Manajemen::findminLAB(nodeptrLAB pLAB)
{
    if (pLAB == NULL)
    {
        cout<<"Data kosong" << endl;
        return pLAB;
    }
    else
    {
        while(pLAB->leftLAB !=NULL)
        {
            pLAB = pLAB->leftLAB;
            //return p;
        }
        return pLAB;
    }
}

//Deklasrasi finmaxLAB pada class manajemen
// Finding the Largest node
nodeptrLAB Manajemen::findmaxLAB(nodeptrLAB pLAB)
{
    if (pLAB == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pLAB;
    }
    else
    {
        while(pLAB->rightLAB !=NULL)
        {
            pLAB = pLAB->rightLAB;
            //return p;
        }
        return pLAB;
    }
}

//Deklasrasi findLAB pada class manajemen
// Finding an element
void Manajemen::findLAB(int xLAB,nodeptrLAB &pLAB)
{
    if (pLAB == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xLAB < pLAB->elementLAB)
        {
            findLAB(xLAB, pLAB->leftLAB);
        }
        else
        {
            if (xLAB > pLAB->elementLAB)
            {
                findLAB(xLAB, pLAB->rightLAB);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyLAB pada class manajemen
// Copy a tree
void Manajemen::copyLAB(nodeptrLAB &pLAB,nodeptrLAB &p1LAB)
{
    makeemptyLAB(p1LAB);
    p1LAB = nodecopyLAB(pLAB);
}

//Deklasrasi makeempyuLAB pada class manajemen
// Make a tree empty
void Manajemen::makeemptyLAB(nodeptrLAB &pLAB)
{
    nodeptrLAB dLAB;
    if (pLAB != NULL)
    {
        makeemptyLAB(pLAB->leftLAB);
        makeemptyLAB(pLAB->rightLAB);
        dLAB = pLAB;
        free(dLAB);
        pLAB = NULL;
    }
}

//Deklasrasi nodecopyLAB pada class manajemen
// Copy the nodes
nodeptrLAB Manajemen::nodecopyLAB(nodeptrLAB &pLAB)
{
    nodeptrLAB tempLAB;
    if (pLAB == NULL)
    {
        return pLAB;
    }
    else
    {
        tempLAB = new nodeLAB;
        tempLAB->elementLAB = pLAB->elementLAB;
        tempLAB->leftLAB = nodecopyLAB(pLAB->leftLAB);
        tempLAB->rightLAB = nodecopyLAB(pLAB->rightLAB);
        return tempLAB;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delLAB(int xLAB, string yLAB, string zLAB, nodeptrLAB &pLAB)
{
    nodeptrLAB dLAB;
    if (pLAB == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xLAB < pLAB->elementLAB)
    {
        delLAB(xLAB, yLAB, zLAB, pLAB->leftLAB);
    }
    else if (xLAB > pLAB->elementLAB)
    {
        delLAB(xLAB, yLAB, zLAB, pLAB->rightLAB);
    }
    else if ((pLAB->leftLAB == NULL) && (pLAB->rightLAB == NULL))
    {
        dLAB = pLAB;
        free(dLAB);
        pLAB = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pLAB->leftLAB == NULL)
    {
        dLAB = pLAB;
        free(dLAB);
        pLAB = pLAB->rightLAB;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pLAB->rightLAB == NULL)
    {
        dLAB = pLAB;
        pLAB = pLAB->leftLAB;
        free(dLAB);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pLAB->elementLAB = deleteminLAB(pLAB->rightLAB);
    }
}

//Deklasrasi deleteminLAB pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminLAB(nodeptrLAB &pLAB)
{
    int cLAB;
    cout<<"inside deltemin\n"<<endl;
    if (pLAB->leftLAB == NULL)
    {
        cLAB = pLAB->elementLAB;
        pLAB = pLAB->rightLAB;
        return cLAB;
    }
    else
    {
        cLAB = deleteminLAB(pLAB->leftLAB);
        return cLAB;
    }
}

//Deklasrasi prorderLAB pada class manajemen
//untuk mencari preorder
void Manajemen::preorderLAB(nodeptrLAB pLAB)
{
    if (pLAB != NULL)
    {
      cout<<"|| " <<setw(10)<< pLAB->element_bLAB << setw(10) << "| " << setw(10)<<pLAB->element_cLAB << setw(10) << "| " <<setw(10)<< pLAB->elementLAB << setw(10) << "||"<< endl;
        preorderLAB(pLAB->leftLAB);
        preorderLAB(pLAB->rightLAB);
    }
}

//Deklasrasi inrderLAB pada class manajemen
// Inorder Printing
void Manajemen::inorderLAB(nodeptrLAB pLAB)
{
    if (pLAB != NULL)
    {
        inorderLAB(pLAB->leftLAB);
      
        cout<<"|| " <<setw(10)<< pLAB->element_bLAB << setw(10) << "| " << setw(10)<<pLAB->element_cLAB << setw(10) << "| " <<setw(10)<< pLAB->elementLAB << setw(10) << "||"<< endl;
      
        inorderLAB(pLAB->rightLAB);
    }
}

//Deklasrasi postorderLAB pada class manajemen
// PostOrder Printing
void Manajemen::postorderLAB(nodeptrLAB pLAB)
{
    if (pLAB != NULL)
    {
        postorderLAB(pLAB->leftLAB);
        postorderLAB(pLAB->rightLAB);
        
        cout<<"|| " <<setw(10)<< pLAB->element_bLAB << setw(10) << "| " << setw(10)<<pLAB->element_cLAB << setw(10) << "| " <<setw(10)<< pLAB->elementLAB << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macLAB pada class manajemen
//untuk mencari max
int Manajemen::maxLAB(int value1LAB, int value2LAB)
{
    return ((value1LAB > value2LAB) ? value1LAB : value2LAB);
}

//Deklasrasi bsheightLAB pada class manajemen
//untuk mencari hight
int Manajemen::bsheightLAB(nodeptrLAB pLAB)
{
    int tLAB;
    if (pLAB == NULL)
    {
        return -1;
    }
    else
    {
        tLAB = pLAB->heightLAB;
        return tLAB;
    }
}

//Deklasrasi srlLAB pada class manajemen
//untuk fungsi srl
nodeptrLAB Manajemen::srlLAB(nodeptrLAB &p1LAB)
{
    nodeptrLAB p2LAB;
    p2LAB = p1LAB->leftLAB;
    p1LAB->leftLAB = p2LAB->rightLAB;
    p2LAB->rightLAB = p1LAB;
    p1LAB->heightLAB = maxLAB(bsheightLAB(p1LAB->leftLAB), bsheightLAB(p1LAB->rightLAB)) + 1;
    p2LAB->heightLAB = maxLAB(bsheightLAB(p2LAB->leftLAB), p1LAB->heightLAB) + 1;
    return p2LAB;
}

//Deklasrasi srrLAB pada class manajemen
//untuk fungsi srr
nodeptrLAB Manajemen:: srrLAB(nodeptrLAB &p1LAB)
{
    nodeptrLAB p2LAB;
    p2LAB = p1LAB->rightLAB;
    p1LAB->rightLAB = p2LAB->leftLAB;
    p2LAB->leftLAB = p1LAB;
    p1LAB->heightLAB = maxLAB(bsheightLAB(p1LAB->leftLAB), bsheightLAB(p1LAB->rightLAB)) + 1;
    p2LAB->heightLAB = maxLAB(p1LAB->heightLAB, bsheightLAB(p2LAB->rightLAB)) + 1;
    return p2LAB;
}

//Deklasrasi drlLAB pada class manajemen
//untuk fungsi drl
nodeptrLAB Manajemen:: drlLAB(nodeptrLAB &p1LAB)
{
    p1LAB->leftLAB=srrLAB(p1LAB->leftLAB);
    return srlLAB(p1LAB);
}

//Deklasrasi drrLAB pada class manajemen
//untuk fungsi drr
nodeptrLAB Manajemen::drrLAB(nodeptrLAB &p1LAB)
{
    p1LAB->rightLAB = srlLAB(p1LAB->rightLAB);
    return srrLAB(p1LAB);
}

//Deklasrasi nonodesLAB pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesLAB(nodeptrLAB pLAB)
{
    int countLAB=0;
    if (pLAB!=NULL)
    {
        nonodesLAB(pLAB->leftLAB);
        nonodesLAB(pLAB->rightLAB);
        countLAB++;
    }
    return countLAB;
}




//CATATA: struct dan class ditulis ulang (agar dihitung) karena dibuat oleh 211 tapi tidak berada di "211.h"

// //struct perlengkapan
// struct perlengkapan
// {
//   char namaperlengkapan[50];
//   char jumlahperlengkapan[500];
//   perlengkapan *next, *prev;
// } *awalperlengkapan = NULL, *akhirperlengkapan = NULL, *bantuperlengkapan,
//   *baruperlengkapan, *hapusperlengkapan;

// //struct siswa
// struct siswa
// {
//   char kodesiswa[8], namasiswa[80];
//   int prestasisiswa;
//   struct siswa *next;
// } sswa, *barusiswa, *awalsiswa = NULL, *akhirsiswa = NULL, *hapussiswa, *bantusiswa;

// struct StackPerlengkapan
// {
//     int top;
//     string dataStackString[MAX];
// } Tumpukan_Perlengkapan;

//Struct NodeKetua
// struct Nodeketua{
//       int nimketua;
//       string namaketua;
//       string kelasketua;
      
//       Nodeketua *kiriketua;
//       Nodeketua *kananketua;
// };

//Struct nodeGURU
// struct nodeGURU
// {
//     int elementGURU;
//     string element_bGURU;
//     string element_cGURU;
//     nodeGURU *leftGURU;
//     nodeGURU *rightGURU;
//     int heightGURU;
// };
// typedef struct nodeGURU *nodeptrGURU;

// //Struct nodeLAB
// struct nodeLAB
// {
//     int elementLAB;
//     string element_bLAB;
//     string element_cLAB;
//     nodeLAB *leftLAB;
//     nodeLAB *rightLAB;
//     int heightLAB;
// };
// typedef struct nodeLAB *nodeptrLAB;
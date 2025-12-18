#include <fstream>
#include <iomanip>
#include <iostream>
//#include "191.h"
//#include "211.h"
//#include "213.h"
//#include "ktp.h"
//#include "array1d.h"
using namespace std;

//class manajemen
class Manajemen
{
public:
  void login();
  void menu();
  void halamanuser();
  void sumberdana();
  int rekursifBOS(int jumlahBOS);
  /*void gurukaryawan();
  void inputdataguru();
  void deletedataguru();
  void caridataguru();
  void tampildataguru();*/
  void dataguru();
  void tambah_depan();
  void buat_baru();
  void tampil();
  void tambah_belakang();
  void hapus_depan();
  void hapus_belakang();
  void hitunggaji();
  void rincian();
  void caridata();
  void tulisdata();
  void bacainvoice();
  void ascending();

  void menu_lks();
  void tambah_depan_lks();
  void tambah_belakang_lks();
  void hapus_depan_lks();
  void tampil_lks();
  void hitung_lks();

  void menu_seragam();
  void tambah_depan_seragam();
  void tambah_belakang_seragam();
  void hapus_depan_seragam();
  void tampil_seragam();
  void hitung_seragam();

  void menu_perlengkapan();
  void tambah_depan_perlengkapan();
  void tambah_belakang_perlengkapan();
  void hapus_depan_perlengkapan();
  void tampil_perlengkapan();
  void hitung_perlengkapan();

  ofstream dataperlengkapan;
  ofstream dataseragam;
  ofstream datalks;
  ifstream data;
  string isiinvoice;
  ofstream fileku;
  ifstream ambildata;
  string datafile[30];
  int index = 0;
  int index1 = 0;
  string username, pass;
  char pencariandata[8];
  // int nr, isi, ch;
  int pil;

private:
  int total_harga_perlengkapan, hargatopi, jmlhtopi, hargasabuk, jmlhsabuk,
      hargakaoskaki, jmlhkaoskaki, hargaperlengkapanlain, jmlhperlengkapanlain;

  int pilihmenuseragam, hargapb, jmlhpb, hargapm, jmlhpm, hargapa, jmlhpa,
      hargabatik, jmlhbatik, hargapramuka, jmlhpramuka, hargaolahraga,
      jmlholahraga, total_harga_seragam;

  int pilihmenuperlengkapan;

  int hargabindo, jmlhbindo, hargabingg, jmlhbingg, hargamatematika,
      jmlhmatematika, hargaipa, jmlhipa, hargaips, jmlhips, hargalain, jmlhlain,
      total_harga_lks;
  int pilihmenulks;
  string tanggal;
  char logulang;
  int i, j, tukar, totaldana, danaSekolah;
  int pmenu, psumber, semBOS, nilaiBOS, jumlahBOS;
  int jumlahsiswa, hargaspp, jumlahspp, jumlahdiskon;
  int semLem, nilaiLem, jumlahLem, bnykLem;
  int gajiguru, gajikaryawan, jumlahguru, jumlahkaryawan, totalgaji;
  int pilihuser, jguru;
  int caricari;
  int gurukode[10], guruumur[10];
  string gurunama[10];
  // int *kode = new int;
  // string *nama = new string;
  // int *umur = new int;
  int *array = new int;
};

//struck node (t)
struct nodeee
{
  int kodeguru;
  string namaguru;
  string alamatguru;
  int nohp;
  struct node *next;
}*depan=NULL, *belakang, *temp;

//struck simpul
struct simpul
{
  char kodeguru[8], namaguru[80];
  int umurguru;
  struct simpul *next;
} mhs, *baru, *awal = NULL, *akhir = NULL, *hapus, *bantu;

//struck lks
struct lks
{
  char namaLKS[50];
  char penerbit[50];
  char jumlah[500];
  lks *next, *prev;
} *awalLKS = NULL, *akhirLKS = NULL, *bantuLKS, *baruLKS, *hapusLKS;

//struck seragam
struct seragam
{
  char namaseragam[50];
  char jumlahseragam[500];
  seragam *next, *prev;
} *awalseragam = NULL, *akhirseragam = NULL, *bantuseragam, *baruseragam,
  *hapusseragam;

//struck perlengkapan
struct perlengkapan
{
  char namaperlengkapan[50];
  char jumlahperlengkapan[500];
  perlengkapan *next, *prev;
} *awalperlengkapan = NULL, *akhirperlengkapan = NULL, *bantuperlengkapan,
  *baruperlengkapan, *hapusperlengkapan;

void Manajemen::login() {
  cout << "======================================" << endl;
  cout << "==              LOGIN               ==" << endl;
  cout << "======================================" << endl;
  ambildata.open("logindata.txt");
  while (!ambildata.eof()) {
    ambildata >> datafile[index1];
    index1 += 1;
  }
  ambildata.close();
login:
  cout << "Masukkan username (Nama) : ";
  cin >> username;
  cout << "Masukkan password (NIK): ";
  cin >> pass;
  if (username == datafile[0] && pass == datafile[1]) {
    cout << "======================================" << endl;
    cout << "==        Anda adalah admin         ==" << endl;
    cout << "======================================" << endl;
    cout << endl;
    menu();

  } else if (username == datafile[2] && pass == datafile[3]) {
    cout << "======================================" << endl;
    cout << "==         Anda adalah user         ==" << endl;
    cout << "======================================" << endl;
    halamanuser();
  } else {
    cout << "username atau password salah. silahkan login lagi" << endl;
    goto login;
  }
}
//[SEMENTARA : Saat ini tampilan halaman user belum lengkap]
void Manajemen::halamanuser() {
  cout << endl;
  cout << "[ Halaman User akan diperbaharui diwaktu yang akan datang:) ]"
       << endl;
  cout << endl;
menuuser:
  cout << "============================================================"
       << endl;
  cout << "===       HALAMAN USER MANAJEMEN KEUANGAN SEKOLAH        ==="
       << endl;
  cout << "== 1) Daftar Guru & Karyawan                              =="
       << endl;
  cout << "== 2) Daftar Lembaga Sosial yang menjadi donatur sekolah  =="
       << endl;
  cout << "== 3) Pencarian Guru & Karyawan                           =="
       << endl;
  cout << "== 4) Pengurutan data ascending data Guru & Karyawan      =="
       << endl;
  cout << "== 5) Daftar pembelian LKS sekolah                        =="
       << endl;
  cout << "== 6) Daftar pembelian Seragam sekolah                    =="
       << endl;
  cout << "== 7) Daftar pembelian perlengkapan siswa                 =="
       << endl;
  cout << "== 8) Rincian uang keluar/masuk sekolah                   =="
       << endl;
  cout << "== 9) Kembali Login                                       =="
       << endl;
  cout << "== 10) keluar program                                     =="
       << endl;
  cout << "============================================================"
       << endl;
  cout << "Masukkan pilihan : ";
  cin >> pilihuser;
  cout << endl;

  switch (pilihuser) {
  case 1:
    tampil();
    halamanuser();
    break;
  case 2:
    for (i = 1; i <= bnykLem; i++) {
      cout << "kode lembaga ke-" << i << " : ";
      cout << array[i] << endl;
    }
    halamanuser();
    break;
  case 3:
    caridata();
    halamanuser();
    break;
  case 4:
    ascending();
    halamanuser();
    break;
  case 5:
    tampil_lks();
    halamanuser();
    break;
  case 6:
    tampil_seragam();
    halamanuser();
    break;
  case 7:
    tampil_perlengkapan();
    halamanuser();
    break;
  case 8:
    // rincian();
    bacainvoice();
    halamanuser();
    break;
  case 9:
    cout << "Login ulang ? (y/n) : ";
    cin >> logulang;
    if (logulang == 'y') {
      login();
    } else {
      halamanuser();
    }
    break;
  case 10:
    cout << "Program telah berhenti !" << endl;
    exit(0);
    break;
  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    halamanuser();
    break;
  }
}

void Manajemen::menu() {
menu:
  cout << "=======================================" << endl;
  cout << "== SISTEM MANAJEMEN KEUANGAN SEKOLAH ==" << endl;
  cout << "== Menu :                            ==" << endl;
  cout << "== 1) Sumber dana sekolah            ==" << endl;
  cout << "== 2) Penggajian guru dan karyawan   ==" << endl;
  cout << "== 3) Pembelian LKS                  ==" << endl;
  cout << "== 4) Pembelian Seragam                 ==" << endl;
  cout << "== 5) Pembelian perlengkapan siswa      ==" << endl;
  // cout << "== 4) Pembangunan                    ==" << endl;
  // cout << "== 5) Pemeliharaan fasilitas sekolah ==" << endl;
  cout << "== 6) Rincian dana masuk dan keluar  ==" << endl;
  cout << "== 7) Login kembali                  ==" << endl;
  cout << "== 8) Login sebagai user             ==" << endl;
  cout << "== 9) Keluar program                 ==" << endl;
  cout << "=======================================" << endl;
  cout << "pilihan menu : ";
  cin >> pmenu;
  cout << endl;
  switch (pmenu) {
  case 1:
    sumberdana();
    break;
  case 2:
    /*gurukaryawan();*/ dataguru();
    break;
  case 3:
    menu_lks();
    break;
  case 4:
    menu_seragam();
    break;
  case 5:
    menu_perlengkapan();
    break;
  case 6:
    rincian();
    break;
  case 7:
    login();
    break;
  case 8:
    halamanuser();
    break;
  case 9:
    cout << "Program telah berhenti !" << endl;
    exit(0);
    break;

  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    goto menu;
    break;
  }
}

void Manajemen::sumberdana() {
sumber:
  cout << "=======================================" << endl;
  cout << "==   DANA SUMBER KEUANGAN SEKOLAH    ==" << endl;
  cout << "== 1) BOS                            ==" << endl;
  cout << "== 2) SPP                            ==" << endl;
  cout << "== 3) Lembaga Sosial                 ==" << endl;
  cout << "== 4) Total Sumber Dana              ==" << endl;
  cout << "== 5) Kembali                        ==" << endl;
  cout << "=======================================" << endl;
  cout << "pilihan : ";
  cin >> psumber;
  cout << endl;
  if (psumber == 1) {
    cout << "Masukkan tanggal (dd-dd-yyyy):";
    cin >> tanggal;
    cout << "Berapa semester telah menerima dana BOS : ";
    cin >> semBOS;
    cout << "Jumlah dana BOS yang masuk tiap semester : ";
    cin >> nilaiBOS;
    cout << "Jumlah dana BOS : ";
    jumlahBOS = semBOS * nilaiBOS;
    rekursifBOS(jumlahBOS);
    cout << endl;
    goto sumber;

  } else if (psumber == 2) {
    cout << "Masukkan jumlah siswa : ";
    cin >> jumlahsiswa;
    cout << "Masukkan harga spp : ";
    cin >> hargaspp;
    cout << "catatan : siswa yang mendapat ranking 1-3 (terdapat 15 kelas) "
            "akan mendapat diskon spp sebesar Rp 40.000,-"
         << endl;
    jumlahspp = (jumlahsiswa * hargaspp) - (40000 * 45);
    jumlahdiskon = 40000 * 45;
    cout << "Jumlah diskon : " << jumlahdiskon << endl;
    cout << "Jumlah sumber dana dari SPP : " << jumlahspp;
    cout << endl;

    goto sumber;

  } else if (psumber == 3) {
    // lembaga sosial
    cout << "telah berapa semester menerima dana dari lembaga sosial : ";
    cin >> semLem;
    cout << "Jumlah dana sumbangan lembaga sosial yang masuk tiap semester : ";
    cin >> nilaiLem;
    cout << "Masukkan banyak lembaga yang menyumbang : ";
    cin >> bnykLem;

    jumlahLem = semLem * nilaiLem;
    cout << "Jumlah dana sumbangan Lembaga Sosial : " << jumlahLem << endl;
    cout << endl;
    for (i = 1; i <= bnykLem; i++) {
      cout << "kode lembaga ke-" << i << " : ";
      cin >> array[i];
    }
    goto sumber;

  } else if (psumber == 4) {
    // total sumber dana
    totaldana = jumlahBOS + jumlahspp + jumlahLem;
    cout << "Total dana keuangan sekolah : " << totaldana;
    cout << endl;

    menu();
  } else if (psumber == 5) {
    menu();
  } else {
    cout << "pilihan salah !";
    goto sumber;
  }
}

int Manajemen::rekursifBOS(int jumlahBOS) {
  if (jumlahBOS > 0) {
    cout << jumlahBOS;
    return jumlahBOS;
  }
}

/*void Manajemen::gurukaryawan(){
  cout << "1) Input data guru & karyawan" << endl;
  cout << "2) Hapus data guru & karyawan" << endl;
  cout << "3) Cari guru / karyawan" << endl;
  cout << "4) Tampil daftar guru & karyawan" << endl;
  cout << "5) Kembali ke menu" << endl;
  cout << "Masukkan pilihan anda : ";
  cin >> ch;
  cout << "=======================================" << endl;
  cout << endl;
  switch(ch){
    case 1:
      inputdataguru();
      break;
    case 2:
      deletedataguru();
      break;
    case 3:
      caridataguru();
      break;
    case 4:
      tampildataguru();
      break;
    case 5:
      menu();
      break;
  }
}

void Manajemen::inputdataguru(){
  temp = new node;
  string asal;
  string name;
  int hp;
  cout << "Input kode guru / karyawan : ";
  cin >> nr;
  cin.ignore(1,'\n');
  cout << "Masukkan nama guru / karyawan : ";
  getline(cin, name);
  cout << "Masukkan alamat guru / karyawan : ";
  getline(cin, asal);
  cout << "no hp :";
  cin >> hp;
  temp->kodeguru=nr;
  temp->namaguru=name;
  temp->alamatguru=asal;
  temp->nohp = hp;
  temp->next = NULL;

  if(depan==NULL){
    depan=belakang=temp;
  }else{
    belakang->next=temp;
    belakang=temp;
    }
  gurukaryawan();
}

void Manajemen::deletedataguru(){
  if(depan==NULL){
    cout << "Belum ada data guru / karyawan." << endl;
  }else{
    temp = depan;
    depan = depan->next;
    cout << "Guru / karyawan dengan kode " << temp->kodeguru << "telah dihapus
beserta datanya." << endl; delete(temp);
    }
  gurukaryawan();
}

void Manajemen::caridataguru(){
  node *temp;
  temp = depan;
  int ketemu = 0;
  if(depan != NULL){
    cout << "Input kode guru / karyawan : ";
    cin >> nr;
    while(temp != NULL){
      temp->kodeguru;
      if(nr == temp->kodeguru){
        cout << "Nama guru / karyawan : " << temp->namaguru << endl;
        cout << "Alamat guru / karyawan : " << temp->alamatguru << endl;
        ketemu = 1;
      }
      temp =  temp->next;
    }
    if(ketemu ==  0){
      cout << "Data guru / karyawan tidak ditemukan." << endl;
    }
  }else{
    cout << "Belum ada data guru maupun karyawan." << endl;
    }
  gurukaryawan();
}

void Manajemen::tampildataguru(){
  if(depan == NULL){
    cout << "Belum ada data guru maupun karyawan." << endl;
  }else{
    temp = depan;
    if(temp != NULL){
      cout << "Kode guru / karyawan   : " << temp->kodeguru << endl;
      cout << "Nama guru / karyawan   : " << temp->namaguru << endl;
      cout << "Alamat guru / karyawan : " << temp->alamatguru << endl;
      cout << "nohp                   : " << temp->nohp << endl;
      cout << "---------------------------------------" << endl;
      temp =  temp->next;
    }
    ;
  }
  gurukaryawan();
}*/

void Manajemen::dataguru() {
guru:
  cout << "MENU PENGGAJIAN DAN DAFTAR GURU" << endl;
  cout << "1) Tambah data guru ke daftar Depan" << endl;
  cout << "2) Tambah data guru ke daftar Belakang" << endl;
  cout << "3) Hapus data guru di daftar Depan" << endl;
  cout << "4) Hapus data guru di daftar Belakang" << endl;
  cout << "5) Tampilan daftar guru dan karyawan" << endl;
  cout << "6) Tulis data untuk user" << endl;
  cout << "7) Perhitungan gaji guru dan karyawan" << endl;
  cout << "8) kembali ke menu" << endl;
  cout << "Pilihan anda: ";
  cin >> pil;
  cout << "=======================================" << endl;
  switch (pil) {
  case 1:
    tambah_depan();
    break;
  case 2:
    tambah_belakang();
    break;
  case 3:
    hapus_depan();
    break;
  case 4:
    hapus_belakang();
    break;
  case 5:
    tampil();
    dataguru();
    break;
  case 6:
    tulisdata();
    break;
  case 7:
    hitunggaji();
    break;
  case 8:
    menu();
    break;
  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    cout << endl;
    break;
  }
}

void Manajemen::tambah_depan() {
  buat_baru();
  if (awal == NULL) {
    awal = baru;
    akhir = baru;
    akhir->next = NULL;
  } else {
    baru->next = awal;
    awal = baru;
  }
  cout << endl << endl;
  tampil();
  dataguru();
}

void Manajemen::buat_baru() {
  baru = (simpul *)malloc(sizeof(struct simpul));
  cout << "Input Kode guru / karyawan : ";
  cin >> baru->kodeguru;
  cout << "Input Nama guru / karyawan : ";
  cin >> baru->namaguru;
  cout << "Input Umur guru / karyawan : ";
  cin >> baru->umurguru;
  baru->next = NULL;
}

void Manajemen::tampil() {
  ofstream fileku;
  fileku.open("daftarguru.txt");
  if (awal == NULL) {
    cout << "Kosong" << endl;
    halamanuser();
    cout << endl;
  } else {
    bantu = awal;
    fileku << "+-----------------------------------------------+" << endl;
    fileku << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4)
           << " Nama  " << setw(4) << " | " << setw(4) << " Umur " << setw(4)
           << " |" << endl;
    fileku << "+-----------------------------------------------+" << endl;
    cout << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4)
         << " Nama  " << setw(4) << " | " << setw(4) << " Umur " << setw(4)
         << " |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    while (bantu != NULL) {
      cout << "| " << setw(4) << bantu->kodeguru << setw(4) << " | " << setw(4)
           << bantu->namaguru << setw(4) << " | " << setw(4) << bantu->umurguru
           << setw(4) << " |" << endl;
      cout << "+-----------------------------------------------+" << endl;
      // cout << "Kode Guru / karyawan : " << bantu->kodeguru << endl;
      // fileku << "kode Guru / karyawan : " << bantu->kodeguru << endl;

      // cout << "Nama Guru / Karyawan : " << bantu->namaguru << endl;
      // fileku << "Nama Guru / Karyawan : " << bantu->namaguru << endl;

      // out << "Umur Guru / Karyawan : " << bantu->umurguru << endl;
      // fileku << "Umur Guru / Karyawan : " << bantu->umurguru << endl;

      fileku << "| " << setw(4) << bantu->kodeguru << setw(4) << " | "
             << setw(4) << bantu->namaguru << setw(4) << " | " << setw(4)
             << bantu->umurguru << setw(4) << " |" << endl;
      fileku << "+-----------------------------------------------+" << endl;
      // cout << "----------------------------------------" << endl;

      cout << endl;
      bantu = bantu->next;
    }
  }
  // ofstream fileku;
  // fileku.open("daftarguru.txt");
  // fileku << "=======================================" << endl;
  //     bantu=awal;
  //     while(bantu!=NULL){
  //      fileku << "kode : " << bantu->kodeguru << endl;
  //      fileku << "NAMA : " << bantu->namaguru << endl;
  //      fileku << "UMUR : " << bantu->umurguru << endl;
  //      fileku << "----------------------------------------" << endl;
  //      bantu=bantu->next;
  fileku.close();
}

void Manajemen::tambah_belakang() {
  buat_baru();
  if (awal == NULL) {
    awal = baru;
  } else {
    akhir->next = baru;
  }
  akhir = baru;
  akhir->next = NULL;
  cout << endl << endl;
  tampil();
  dataguru();
}

void Manajemen::hapus_depan() {
  if (awal == NULL) {
    cout << "kosong";
  } else {
    hapus = awal;
    awal = awal->next;
    free(hapus);
  }
  cout << endl << endl;
  tampil();
  dataguru();
}

void Manajemen::hapus_belakang() {
  if (awal == NULL) {
    cout << "Kosong";
  } else if (awal == akhir) {
    hapus = awal;
    awal = awal->next;
    free(hapus);
  } else {
    hapus = awal;
    while (hapus->next != akhir) {
      hapus = hapus->next;
      akhir = hapus;
      hapus = akhir->next;
      akhir->next = NULL;
      free(hapus);
    }
  }
  cout << endl << endl;
  tampil();
  dataguru();
}

void Manajemen::hitunggaji() {
  cout << "Tentukan gaji guru : ";
  cin >> gajiguru;
  cout << "Tentukan gaji karyawan : ";
  cin >> gajikaryawan;
  cout << "Masukkan jumlah guru yang telah ada dalam daftar : ";
  cin >> jumlahguru;
  cout << "Masukkan jumlah karyawan yang telah ada dalam daftar : ";
  cin >> jumlahkaryawan;
  totalgaji = (gajiguru * jumlahguru) + (gajikaryawan * jumlahkaryawan);
  cout << "Total pengeluaran dana untuk gaji : " << totalgaji << endl;
  dataguru();
}

void Manajemen::rincian() {
  danaSekolah = totaldana - totalgaji - total_harga_lks - total_harga_seragam -
                total_harga_perlengkapan; // pembangunan & pemelihara fasilitas
  cout << "Rincian keuangan sekolah : " << endl;
  cout << "---------------------------------------" << endl;
  cout << "Tanggal : " << tanggal << endl;
  cout << "(dana masuk) Dana dari BOS             : " << jumlahBOS << endl;
  cout << "(Dana keluar) Dana diskon SPP          : " << jumlahdiskon << endl;
  cout << "(Dana masuk) Dana dari SPP             : " << jumlahspp << endl;
  cout << "(Dana masuk) Dana dari Lembaga Sosial  : " << jumlahLem << endl;
  cout << "(Dana keluar) Dana penggajian karyawan : "
       << gajikaryawan * jumlahkaryawan << endl;
  cout << "(Dana keluar) Dana penggajian guru     : " << gajiguru * jumlahguru
       << endl;
  cout << "(Dana Keluar) Dana pembelian LKS       : " << total_harga_lks
       << endl;
  cout << "(Dana Keluar) Dana pembelian seragam   : " << total_harga_seragam
       << endl;
  cout << "(Dana Keluar) pembelian perlengkapan   : "
       << total_harga_perlengkapan << endl;
  cout << "---------------------------------------" << endl;
  cout << "Total dana sekolah saat ini : " << danaSekolah << endl;

  // MEMASUKKAN DATA RINCIAN KE DALAM invoice.txt
  fileku.open("invoice.txt");
  fileku << "Rincian keuangan sekolah : " << endl;
  fileku << "---------------------------------------" << endl;
  fileku << "Tanggal : " << tanggal << endl;
  fileku << "(dana masuk) Dana dari BOS             : " << jumlahBOS << endl;
  fileku << "(Dana keluar) Dana diskon SPP          : " << jumlahdiskon << endl;
  fileku << "(Dana masuk) Dana dari SPP             : " << jumlahspp << endl;
  fileku << "(Dana masuk) Dana dari Lembaga Sosial  : " << jumlahLem << endl;
  fileku << "(Dana keluar) Dana penggajian karyawan : "
         << gajikaryawan * jumlahkaryawan << endl;
  fileku << "(Dana keluar) Dana penggajian guru     : " << gajiguru * jumlahguru
         << endl;
  fileku << "(Dana Keluar) Dana pembelian LKS       : " << total_harga_lks
         << endl;
  fileku << "---------------------------------------" << endl;
  fileku << "Total dana sekolah saat ini : " << danaSekolah << endl;
  fileku.close();
  menu();
}

void Manajemen::caridata() {
  // bantu=awal;
  // int ketemu = 0;
  // if(awal != NULL){
  //   cout << "Masukkan kode guru / karywan yang anda cari : ";
  //   cin >> pencariandata;
  //   while(bantu != NULL){
  //     bantu->kodeguru;
  //     if(pencariandata == bantu->kodeguru){
  //       cout << "Data yang anda cari ditemukan " << endl;
  //       cout << "Kode Guru / karyawan : " << bantu->kodeguru << endl;
  //       cout << "Nama Guru / Karyawan : " << bantu->namaguru << endl;
  //       cout << "Umur Guru / Karyawan : " << bantu->umurguru << endl;
  //       cout<<" ------------------------------"<<endl;
  //       ketemu = 1;
  //     }
  //     bantu = bantu->next;
  //   }
  //   if(ketemu == 0){
  //     cout << "Data yang anda cari tidak ditemukan." << endl;
  //   }
  // }
  int ketemu = 0;
  cout << "Masukkan kode guru / karywan yang anda cari :";
  cin >> caricari;
  for (i = 0; i < jguru; i++) {
    if (caricari == gurukode[i]) {
      cout << "Kode Guru / Karyawan : " << gurukode[i] << endl;
      cout << "Nama Guru / Karyawan : " << gurunama[i] << endl;
      cout << "Umur Guru / Karyawan : " << guruumur[i] << endl;
      cout << "---------------------------------------------" << endl;
    }
  }
  halamanuser();
}

void Manajemen::bacainvoice() {
  data.open("invoice.txt");
  while (!data.eof()) {
    getline(data, isiinvoice);
    cout << isiinvoice << endl;
  }
  data.close();
}

void Manajemen::tulisdata() {
  cout << "Masukkann jumlah guru dan karyawan : ";
  cin >> jguru;
  for (i = 0; i < jguru; i++) {
    cout << "Kode Guru / Karyawan : ";
    cin >> gurukode[i];
    cout << "Nama Guru / Karyawan : ";
    cin >> gurunama[i];
    cout << "Umur Guru / Karyawan : ";
    cin >> guruumur[i];
    cout << "---------------------------------------------" << endl;
  }
  dataguru();
}

void Manajemen::ascending() {
  for (i = 0; i < jguru; i++) {
    for (j = i + 1; j < jguru; j++) {
      if (gurukode[i] > gurukode[j]) {
        tukar = gurukode[i];
        gurukode[i] = gurukode[j];
        gurukode[j] = tukar;

        // tukar = gurunama[i];
        // gurunama[i] = gurunama[i];
        // gurunama[j] = tukar;

        // tukar = guruumur[i];
        // guruumur[i] = guruumur[j];
        // guruumur[j] = tukar;
      }
    }
  }

  cout << "Hasil urutan secara ascending : " << endl;
  cout << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Kode Guru / Karyawan " << setw(4) << " | "
       << setw(4) << " Nama Guru / Karyawan " << setw(4) << " | " << setw(4)
       << " Umur Guru / Karyawan " << setw(4) << " | " << endl;
  for (i = 0; i < jguru; i++) {
    cout << "+-----------------------------------------------------+" << endl;
    cout << " | " << setw(4) << gurukode[i] << setw(4) << " | " << setw(4)
         << gurunama[i] << setw(4) << " | " << setw(4) << guruumur[i] << setw(4)
         << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;

    // cout << "Kode Guru / Karyawan : " << gurukode[i] << endl;
    // cout << "Nama Guru / Karyawan : " << gurunama[i] << endl;
    // cout << "Umur Guru / Karyawan : " << guruumur[i] << endl;

    // cout << "---------------------------------------------" << endl;
  }
  halamanuser();
}

void Manajemen::menu_lks() {
lks:
  do {
    cout << "================================================" << endl;
    cout << "==             MENU PEMBELIAN LKS             ==" << endl;
    cout << "== Menu :                                     ==" << endl;
    cout << "== 1) Tambah data buku LKS ke daftar depan    ==" << endl;
    cout << "== 2) Tambah data buku LKS ke daftar belakang ==" << endl;
    cout << "== 3) Hapus data buku LKS di daftar depan     ==" << endl;
    cout << "== 4) Tampilan daftar pembelian LKS           ==" << endl;
    cout << "== 5) Penghitungan biaya pembelian LKS        ==" << endl;
    cout << "== 6) Kembali ke menu                         ==" << endl;
    cout << "================================================" << endl;
    cout << "[Catatan : LKS wajib (B,Indonesia, B,Inggris, Matematika, IPA, "
            "Sejarah, Ekonomi)]"
         << endl;
    cout << "pilihan menu : ";
    cin >> pilihmenulks;
    cout << endl;
    switch (pilihmenulks) {
    case 1:
      tambah_depan_lks();
      break;
    case 2:
      tambah_belakang_lks();
      break;
    case 3:
      hapus_depan_lks();
      break;
    case 4:
      tampil_lks();
      break;
    case 5:
      hitung_lks();
      break;
    case 6:
      menu();
      break;
    default:
      cout << "Pilihan anda tidak ada pada daftar ! silahkan pilih lagi.."
           << endl;
      goto lks;
      break;
    }
  } while (pilihmenulks <= 4);
}

void Manajemen::tambah_depan_lks() {
  baruLKS = new lks;
  baruLKS->next = NULL;
  baruLKS->prev = NULL;
  cout << "Nama LKS     : ";
  cin >> baruLKS->namaLKS;
  cout << "Penerbit LKS : ";
  cin >> baruLKS->penerbit;
  cout << "Jumlah beli  : ";
  cin >> baruLKS->jumlah;

  if (awalLKS == NULL) {
    awalLKS = akhirLKS = baruLKS;

  } else {
    baruLKS->next = awalLKS;
    awalLKS->prev = baruLKS;
    awalLKS = baruLKS;
  }
  tampil_lks();
  menu_lks();
}

void Manajemen::tambah_belakang_lks() {
  baruLKS = new lks;
  baruLKS->next = NULL;
  baruLKS->prev = NULL;
  cout << "Nama LKS     : ";
  cin >> baruLKS->namaLKS;
  cout << "Penerbit LKS : ";
  cin >> baruLKS->penerbit;
  cout << "Jumlah beli  : ";
  cin >> baruLKS->jumlah;

  if (awalLKS == NULL) {
    awalLKS = akhirLKS = baruLKS;

  } else {
    akhirLKS->next = baruLKS;
    baruLKS->prev = akhirLKS;
    akhirLKS = baruLKS;
  }
  tampil_lks();
  menu_lks();
}

void Manajemen::hapus_depan_lks() {
  if (awalLKS->next == NULL) {
    awalLKS = akhirLKS = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else {
    hapusLKS = awalLKS;
    awalLKS = awalLKS->next;
    awalLKS->prev = NULL;
    delete hapusLKS;
  }
  tampil_lks();
  menu_lks();
}

void Manajemen::tampil_lks() {
  ofstream datalks;
  datalks.open("daftarLKS.txt");
  bantuLKS = awalLKS;
  datalks << "+-----------------------------------------------------+" << endl;
  datalks << " | " << setw(4) << " Nama LKS " << setw(4) << " | " << setw(4)
          << " Penerbit " << setw(4) << " | " << setw(4) << " Jumlah beli "
          << setw(4) << " | " << endl;
  datalks << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Nama LKS " << setw(4) << " | " << setw(4)
       << " Penerbit " << setw(4) << " | " << setw(4) << " Jumlah beli "
       << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;
  while (bantuLKS != NULL) {
    cout << " | " << setw(4) << bantuLKS->namaLKS << setw(4) << " | " << setw(4)
         << bantuLKS->penerbit << setw(4) << " | " << setw(4)
         << bantuLKS->jumlah << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;
    datalks << " | " << setw(4) << bantuLKS->namaLKS << setw(4) << " | "
            << setw(4) << bantuLKS->penerbit << setw(4) << " | " << setw(4)
            << bantuLKS->jumlah << setw(4) << " | " << endl;
    datalks << "+-----------------------------------------------------+"
            << endl;
    bantuLKS = bantuLKS->next;
  }
  datalks.close();
  menu_lks();
}

void Manajemen::hitung_lks() {
  cout << "[Catatan : LKS wajib (B,Indonesia, B,Inggris, Matematika, IPA, IPS)]"
       << endl;
  cout << "-----------------------------------------------------------" << endl;
  cout << "Berdasarkan data yang telah dimasukkan : " << endl;
  cout << "Harga LKS B.Indonesia/buku : ";
  cin >> hargabindo;
  cout << "jumlah : ";
  cin >> jmlhbindo;
  cout << "Harga LKS B.Inggris/buku : ";
  cin >> hargabingg;
  cout << "jumlah : ";
  cin >> jmlhbingg;
  cout << "Harga LKS Matematika/buku : ";
  cin >> hargamatematika;
  cout << "jumlah : ";
  cin >> jmlhmatematika;
  cout << "Harga LKS IPA/buku : ";
  cin >> hargaipa;
  cout << "jumlah : ";
  cin >> jmlhipa;
  cout << "Harga LKS IPS/buku : ";
  cin >> hargabindo;
  cout << "jumlah : ";
  cin >> jmlhips;
  cout << "Harga LKS lainnya/buku : ";
  cin >> hargalain;
  cout << "jumlah : ";
  cin >> jmlhlain;
  cout << endl;
  cout << "-----------------------------------------------------------" << endl;
  total_harga_lks = (hargabindo * jmlhbindo) + (hargabingg * jmlhbingg) +
                    (hargamatematika * jmlhmatematika) + (hargaipa * jmlhipa) +
                    (hargaips * jmlhips) + (hargalain * jmlhlain);
  cout << "Total biaya pembelian LKS : " << total_harga_lks << endl;
  menu_lks();
}

void Manajemen::menu_seragam() {
seragam:
  do {
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
    switch (pilihmenuseragam) {
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

void Manajemen::tambah_depan_seragam() {
  baruseragam = new seragam;
  baruseragam->next = NULL;
  baruseragam->prev = NULL;
  cout << "Nama seragam     : ";
  cin >> baruseragam->namaseragam;
  cout << "Jumlah beli  : ";
  cin >> baruseragam->jumlahseragam;

  if (awalseragam == NULL) {
    awalseragam = akhirseragam = baruseragam;

  } else {
    baruseragam->next = awalseragam;
    awalseragam->prev = baruseragam;
    awalseragam = baruseragam;
  }
  tampil_seragam();
  menu_seragam();
}

void Manajemen::tambah_belakang_seragam() {
  baruseragam = new seragam;
  baruseragam->next = NULL;
  baruseragam->prev = NULL;
  cout << "Nama seragam     : ";
  cin >> baruseragam->namaseragam;
  cout << "Jumlah beli  : ";
  cin >> baruseragam->jumlahseragam;

  if (awalseragam == NULL) {
    awalseragam = akhirseragam = baruseragam;

  } else {
    akhirseragam->next = baruseragam;
    baruseragam->prev = akhirseragam;
    akhirseragam = baruseragam;
  }
  tampil_seragam();
  menu_seragam();
}

void Manajemen::hapus_depan_seragam() {
  if (awalseragam->next == NULL) {
    awalseragam = akhirseragam = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else {
    hapusseragam = awalseragam;
    awalseragam = awalseragam->next;
    awalseragam->prev = NULL;
    delete hapusseragam;
  }
  tampil_seragam();
  menu_seragam();
}

void Manajemen::tampil_seragam() {
  ofstream dataseragam;
  dataseragam.open("daftarSeragam.txt");
  bantuseragam = awalseragam;
  dataseragam << "+-----------------------------------------------------+"
              << endl;
  dataseragam << " | " << setw(4) << " Nama seragam " << setw(4) << " | "
              << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  dataseragam << "+-----------------------------------------------------+"
              << endl;
  cout << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Nama seragam " << setw(4) << " | " << setw(4)
       << " Jumlah beli " << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;

  while (bantuseragam != NULL) {
    cout << " | " << setw(4) << bantuseragam->namaseragam << setw(4) << " | "
         << bantuseragam->jumlahseragam << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;
    dataseragam << " | " << setw(4) << bantuseragam->namaseragam << setw(4)
                << " | " << bantuseragam->jumlahseragam << setw(4) << " | "
                << endl;
    dataseragam << "+-----------------------------------------------------+"
                << endl;
    bantuseragam = bantuseragam->next;
  }
  dataseragam.close();
  menu_seragam();
}

void Manajemen::hitung_seragam() {
  cout << "[Catatan : seragam wajib (putih biru,putih abu-abu,putih "
          "merah,batik,pramuka,olahraga)]"
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
  total_harga_seragam = (hargapb * jmlhpb) + (hargapm * jmlhpm) +
                        (hargapa * jmlhpa) + (hargabatik * jmlhbatik) +
                        (hargapramuka * jmlhpramuka) +
                        (hargaolahraga * jmlholahraga);
  cout << "Total biaya pembelian seragam : " << total_harga_seragam << endl;
  menu_seragam();
}

void Manajemen::menu_perlengkapan() {
perlengkapan:
  do {
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
    switch (pilihmenuperlengkapan) {
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

void Manajemen::tambah_depan_perlengkapan() {
  baruperlengkapan = new perlengkapan;
  baruperlengkapan->next = NULL;
  baruperlengkapan->prev = NULL;
  cout << "Nama lengkapan     : ";
  cin >> baruperlengkapan->namaperlengkapan;
  cout << "Jumlah beli  : ";
  cin >> baruperlengkapan->jumlahperlengkapan;

  if (awalperlengkapan == NULL) {
    awalperlengkapan = akhirperlengkapan = baruperlengkapan;

  } else {
    baruperlengkapan->next = awalperlengkapan;
    awalperlengkapan->prev = baruperlengkapan;
    awalperlengkapan = baruperlengkapan;
  }
  tampil_perlengkapan();
  menu_perlengkapan();
}

void Manajemen::tambah_belakang_perlengkapan() {
  baruperlengkapan = new perlengkapan;
  baruperlengkapan->next = NULL;
  baruperlengkapan->prev = NULL;
  cout << "Nama perlengkapan     : ";
  cin >> baruperlengkapan->namaperlengkapan;
  cout << "Jumlah beli  : ";
  cin >> baruperlengkapan->jumlahperlengkapan;

  if (awalperlengkapan == NULL) {
    awalperlengkapan = akhirperlengkapan = baruperlengkapan;

  } else {
    akhirperlengkapan->next = baruperlengkapan;
    baruperlengkapan->prev = akhirperlengkapan;
    akhirperlengkapan = baruperlengkapan;
  }
  tampil_perlengkapan();
  menu_perlengkapan();
}

void Manajemen::hapus_depan_perlengkapan() {
  if (awalperlengkapan->next == NULL) {
    awalperlengkapan = akhirperlengkapan = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else {
    hapusperlengkapan = awalperlengkapan;
    awalperlengkapan = awalperlengkapan->next;
    awalperlengkapan->prev = NULL;
    delete hapusperlengkapan;
  }
  tampil_perlengkapan();
  menu_perlengkapan();
}

void Manajemen::tampil_perlengkapan() {
  ofstream dataperlengkapan;
  dataperlengkapan.open("daftarPerlengkapan.txt");
  bantuperlengkapan = awalperlengkapan;
  dataperlengkapan << "+-----------------------------------------------------+"
                   << endl;
  dataperlengkapan << " | " << setw(4) << " Nama perlengkapan " << setw(4)
                   << " | " << setw(4) << " Jumlah beli " << setw(4) << " | "
                   << endl;
  dataperlengkapan << "+-----------------------------------------------------+"
                   << endl;
  cout << "+-----------------------------------------------------+" << endl;
  cout << " | " << setw(4) << " Nama perlengkapan " << setw(4) << " | "
       << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;

  while (bantuperlengkapan != NULL) {
    cout << " | " << setw(4) << bantuperlengkapan->namaperlengkapan << setw(4)
         << " | " << bantuperlengkapan->jumlahperlengkapan << setw(4) << " | "
         << endl;
    cout << "+-----------------------------------------------------+" << endl;
    dataperlengkapan << " | " << setw(4) << bantuperlengkapan->namaperlengkapan
                     << setw(4) << " | "
                     << bantuperlengkapan->jumlahperlengkapan << setw(4)
                     << " | " << endl;
    dataperlengkapan
        << "+-----------------------------------------------------+" << endl;
    bantuperlengkapan = bantuperlengkapan->next;
  }
  dataperlengkapan.close();
  menu_perlengkapan();
}

void Manajemen::hitung_perlengkapan() {
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
  total_harga_perlengkapan = (hargatopi * jmlhtopi) + (hargasabuk * jmlhsabuk) +
                             (hargakaoskaki * jmlhkaoskaki) +
                             (hargaperlengkapanlain * jmlhperlengkapanlain);
  cout << "Total biaya pembelian perlengkapan : " << total_harga_perlengkapan
       << endl;
  menu_perlengkapan();
}

// KTP
struct data {
  string nik[17];
  string nama[30], jenis[20], status[20], pekerjaan[20], tempat[20];
  string tgl[20], bln[20], thn[20];
  string jalan[20], kec[20], kelurahan[20];
  string rt[10], rw[10];
};

class ktp {
private:
  int pilgoldar[10], pilagama[10], pilkewarganegaraan[10];

public:
  data KTP;
  void input(int);
  void output(int);

  ofstream dataktp;
};

void ktp::input(int n) {

  for (int i = 0; i < n; i++) {
    cout << "==========================================================="
         << endl;
    cout << "         ISIKAN DATA DIRI ANDA UNTUK MEMBUAT KTP" << endl;
    cout << "==========================================================="
         << endl;
    while (KTP.nik[i].length() != 16) {
      cout << "\nNIK                        : ";
      cin >> KTP.nik[i];

      if (KTP.nik[i].length() != 16) {
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
    cout << " 1. ISLAM\t\t 4. BUDHA\n 2. KRISTEN\t\t 5. HINDU\n 3. KATOLIK\t\t "
            "6. KONGHUCU\n";
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
  for (int i = 0; i < n; i++) {
    dataktp << KTP.nama[i] << endl;
    dataktp << KTP.nik[i] << endl;
  }
  dataktp.close();
}

void ktp::output(int n) {
  for (int i = 0; i < n; i++) {
    cout << endl;
    cout << "==========================================================="
         << endl;
    cout << "              PROVINSI DAERAH ISTIMEWA YOGYAKARTA" << endl;
    cout << "                        KABUPATEN BANTUL" << endl;
    cout << "==========================================================="
         << endl;
    cout << "NIK\t\t\t : " << KTP.nik[i] << endl;
    cout << "Nama\t\t\t : " << KTP.nama[i] << endl;
    cout << "Tempat/Tgl Lahir\t : " << KTP.tempat[i] << ", " << KTP.tgl[i]
         << "-" << KTP.bln[i] << "-" << KTP.thn[i] << endl;
    cout << "Jenis Kelamin\t\t : " << KTP.jenis[i] << setw(27)
         << "Gol. Darah : ";
    switch (pilgoldar[i]) {
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
    switch (pilagama[i]) {
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
    switch (pilkewarganegaraan[i]) {
    case 1:
      cout << "WNI";
      break;
    case 2:
      cout << "WNA";
      break;
    }
    cout << "\nBerlaku Hingga\t\t : SEUMUR HIDUP" << endl;
    cout << "==========================================================="
         << endl;
  }
}

int main() {
  cout << "Masukkan data KTP dahulu sebelum login Manajemen Keuangan Sekolah"
       << endl;
  cout << "Catatan : " << endl;
  cout << "- Untuk spasi gunakan '_' untuk dijadikan sebagai username" << endl;
  cout << "- Disarankan untuk mengisi 2 data, dimana 1 data akan dijadikan "
          "sebagai admin, dan data kedua akan dijadikan sebagai user"
       << endl;
  ktp KTP;
  int pil, banyak;
menu:
  cout << "\n\nMenu : " << endl;
  cout << "1. Input data\n2. Tampil data " << endl;
  cout << endl;
  cout << "Masukkan pilihan     : ";
  cin >> pil;

  if (pil == 1) {
    cout << "Masukkan banyak data : ";
    cin >> banyak;
    cin.ignore();
    KTP.input(banyak);
    goto menu;
  } else if (pil == 2) {
    KTP.output(banyak);
  } else {
    cout << "pilihan tidak tersedia" << endl;
  }

  cout << endl;
  cout << "Anda masuk ke Program Manajemen Keuangan Sekolah, Harap login "
          "dahulu ! "
       << endl
       << endl;

  Manajemen a;
  a.login();

  return 0;
}
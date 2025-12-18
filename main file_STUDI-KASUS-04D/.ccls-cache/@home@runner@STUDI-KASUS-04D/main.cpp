#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#define MAX 20
#define FULL 5
#define FULLSELEKSI 5
#include "191.h" //"211.h" & "213.h" telah  dipanggil pada library "191.h

using namespace std;

int main() {
  int awalmasuk;
  cout << "================================" << endl;
  cout << "|| Selamat Datang             ||" << endl;
  cout << "|| 1. Daftar                  ||" << endl;
  cout << "|| 2. Login                   ||" << endl;
  cout << "================================" << endl;
  cout << endl;
  cout << "Masukkan pilihan     : ";
  cin >> awalmasuk;

  if (awalmasuk == 1) {
    cout << "=================================================================="
            "================"
         << endl;
    cout << "|| Masukkan data KTP dahulu sebelum login Manajemen Keuangan "
            "Sekolah            ||"
         << endl;
    cout << "|| Catatan :                                                      "
            "              ||"
         << endl;
    cout << "|| - Untuk spasi gunakan '_' untuk dijadikan sebagai username     "
            "              ||"
         << endl;
    cout << "|| - Disarankan untuk mengisi 2 data, dimana 1 data akan "
            "dijadikan sebagai      ||"
         << endl;
    cout << "||   admin, dan data kedua akan dijadikan sebagai user            "
            "              ||"
         << endl;
    cout << "=================================================================="
            "================"
         << endl;

    ktp KTP;
    int pil, banyak;

    cout << endl;
  menu:
    cout << "================================" << endl;
    cout << "|| Menu Pendaftaran :         ||" << endl;
    cout << "|| 1. Input data ()           ||" << endl;
    cout << "|| 2. Tampil data             ||" << endl;
    cout << "================================" << endl;
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

      cout << endl;
      cout << "Anda masuk ke Program Manajemen Keuangan Sekolah, Harap login "
              "dahulu ! "
           << endl;
      Manajemen a;
      a.login();
    } else {
      cout << "pilihan tidak tersedia" << endl;
      goto menu;
    }
  } else {
    Manajemen a;
    a.login();
  }

  return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

class Manajemen{
public:
  void login();
  void menu();
  void halamanuser();
  void sumberdana();
  int rekursifBOS(int jumlahBOS);

  ifstream ambildata;
  string datafile[30];
  int index = 0;
  int index1 = 0;
  string username, pass;
private:
  int i, totaldana;
  int pmenu, psumber, semBOS, nilaiBOS, jumlahBOS;
  int jumlahsiswa, hargaspp, jumlahspp;
  int semLem, nilaiLem, jumlahLem;
  int *array =  new int;
};

void Manajemen::login(){
  cout << "======================================" << endl;
  cout << "==              LOGIN               ==" << endl;
  cout << "======================================" << endl;
  ambildata.open("login.txt");
  while(!ambildata.eof()){
    ambildata >> datafile[index1];
    index1 += 1;
  }
  ambildata.close();
  login:
  cout << "Masukkan username : "; cin >> username;
  cout << "Masukkan password : "; cin >> pass;
  if(username == datafile[0] && pass == datafile[1]){
  cout << "======================================" << endl;
  cout << "==        Anda adalah admin         ==" << endl;
  cout << "======================================" << endl;
  menu();
    
  }else if(username == datafile[2] && pass == datafile[3]){
    cout << "======================================" << endl;
    cout << "==         Anda adalah user         ==" << endl;
    cout << "======================================" << endl;
    halamanuser();
  }else{
    cout << "username atau password salah. silahkan login lagi" << endl;
    goto login;
  }
}

//Sementara
void Manajemen::halamanuser(){
  cout << "Halaman User akan diperbaharui diwaktu yang akan datang:)" << endl;
}

void Manajemen::menu(){
   menu:
   cout << "=======================================" << endl;
   cout << "== SISTEM MANAJEMEN KEUANGAN SEKOLAH ==" << endl;
   cout << "== Menu :                            ==" << endl;
   cout << "== 1) Sumber dana sekolah            ==" << endl;
   cout << "== 2) Pembelian LKS                  ==" << endl;
   cout << "== 3) Pembangunan                    ==" << endl;
   cout << "== 4) Penggajian guru dan karyawan   ==" << endl;
   cout << "== 5) pemeliharaan fasilitas sekolah ==" << endl;
   cout << "== 6) Keluar program                 ==" << endl;
   cout << "=======================================" << endl;
   cout << "pilihan menu : "; cin >> pmenu;
   switch(pmenu){
     case 1:
      sumberdana();
      break;
     //case 2:
     case 6:
      cout << "Program telah berhenti !" << endl;
     break;
     
     default:
       cout << "Inputan salah ! silahkan coba lagi!" << endl;
       goto menu;
       break;
   }
 }

void Manajemen::sumberdana(){
  sumber:
  cout << "=======================================" << endl;
  cout << "==   DANA SUMBER KEUANGAN SEKOLAH    ==" << endl;
  cout << "== 1) BOS                            ==" << endl;
  cout << "== 2) SPP                            ==" << endl;
  cout << "== 3) Lembaga Sosial                 ==" << endl;
  cout << "== 4) Total Sumber Dana              ==" << endl;
  cout << "== 5) Kembali                        ==" << endl;
  cout << "=======================================" << endl;
  cout << "pilihan : "; cin >> psumber;
  if(psumber == 1){
    cout << "Berapa semester telah menerima dana BOS : ";
    cin >> semBOS;
    cout << "Jumlah dana BOS yang masuk tiap semester : ";
    cin >> nilaiBOS;
    cout << "Jumlah dana BOS : ";
    jumlahBOS = semBOS * nilaiBOS;
    rekursifBOS(jumlahBOS);
    cout << endl;
    goto sumber;
    
  }else if(psumber == 2){
    cout << "Masukkan jumlah siswa : ";
    cin >> jumlahsiswa;
    cout << "Masukkan harga spp : ";
    cin >> hargaspp;
    cout << "catatan : siswa yang mendapat ranking 1-3 akan mendapat diskon spp sebesar Rp 40.000,-";
    jumlahspp = (jumlahsiswa * hargaspp) - (40000 * 9);
    cout << "Jumlah sumber dana dari SPP : " << jumlahspp;
    cout << endl;
    
    goto sumber;
    
  }else if(psumber == 3){
    //lembaga sosial
    cout << "telah berapa semester menerima dana dari lembaga sosial : ";
    cin >> semLem;
    cout << "Jumlah dana sumbangan lembaga sosial yang masuk tiap semester : ";
    cin >> nilaiLem;
    jumlahLem = semLem * nilaiLem;
    cout << "Jumlah dana sumbangan Lembaga Sosial : " << jumlahLem;
    goto sumber;
    
  }else if(psumber == 4){
    //total sumber dana
    totaldana = jumlahBOS + jumlahspp + jumlahLem;
    cout << "Total dana keuangan sekolah : " << totaldana;
    cout << endl;
    menu();
  }else if(psumber == 5){
    menu();
  }else{
    cout << "pilihan salah !";
    goto sumber;
  }
}

int Manajemen::rekursifBOS(int jumlahBOS){
  if(jumlahBOS > 0){
    cout << jumlahBOS;
    return jumlahBOS;
    }
}


int main(){
  Manajemen a;
  a.login();
}
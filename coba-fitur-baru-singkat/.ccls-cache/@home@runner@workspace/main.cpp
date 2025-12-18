#include <fstream>
#include <iomanip>
#include <iostream>
#define MAX 20
//#include "191.h"
//#include "211.h"
//#include "213.h"
//#include "ktp.h"
//#include "array1d.h"
using namespace std;

//referensi : https://www.youtube.com/watch?v=ltHE53Ux6xA

class Manajemen
{
public:
  void menuambil_LKS();
  void initLKS();
  void printStackLKS();
  void pushLKS();
  void popLKS();
  void ClearLKS();
  void HitungLKS();
  void SearchLKS();
  void EditLKS();
  void HapusLKS();
  bool isEmptyLKS();
  bool isFullLKS();

private:
int z, pilihanstack, dataStack;
int maksimum, minimum, total, ganti, hapusStack;
};

struct Stack
{
    int top, dataStack[MAX];
    //string dataStackString[MAX]; //COBA
} Tumpukan;

//Deklarasi void menuambil_LKS pada class manajemen
//untuk menampilkan menu pengambilan LKS
void Manajemen::menuambil_LKS()
{
  initLKS();
	do {
    LKS:
    printStackLKS();
    cout << "=============================================" << endl;
    cout << "==      MENU PENGAMBILAN LKS (Stack)       ==" << endl;
    cout << "== 1) Push Data (input)                    ==" << endl;
    cout << "== 2) Pop Data (Hapus)                     ==" << endl;
    cout << "== 3) Print (Cetak)                        ==" << endl;
    cout << "== 4) Clear Semua Stack                    ==" << endl;
    cout << "== 5) Hitung MAX, MIN, ANTRIAN             ==" << endl;
    cout << "== 6) Search Stack                         ==" << endl;
    cout << "== 7) Edit Data Stack                      ==" << endl;
    cout << "== 8) Hapus salah satu stack               ==" << endl;
    cout << "== 9) Kembali                              ==" << endl;
    cout << "=============================================" << endl;
		cout << "Masukkan Pilihan: ";
		cin >> pilihanstack;
    
		switch (pilihanstack) {
		case 1:
			pushLKS();
			break;
		case 2:
			popLKS();
			break;
		case 3:
			printStackLKS();
			break;
		case 4:
			ClearLKS();
			break;
		case 5:
			HitungLKS();
			break;
		case 6:
			SearchLKS();
			break;
		case 7:
			EditLKS();
			break;
		case 8:
			HapusLKS();
			break;
    // case 9:
    //   menu();
    //   break;
  
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
    
	} while (pilihanstack != 10);
}

//Deklarasi void iniLKS pada class manajemen
void Manajemen::initLKS(){
    Tumpukan.top = -1;
}

//Deklarasi bool isEmptyLKS pada class manajemen
bool Manajemen::isEmptyLKS() {
    return Tumpukan.top == -1;
}

//Deklarasi bool isFullLKS pada class manajemen
bool Manajemen::isFullLKS() {
    return Tumpukan.top == MAX -1;
}

//Deklarasi void pushLKS pada class manajemen
//untuk menambahkan data pengambil LKS
void Manajemen::pushLKS() {
    if (isFullLKS()) {
        cout<<"==================================="<<endl;
        cout << "\tAntrian Penuh !!!" << endl;
        cout<<"==================================="<<endl;
    } else {
        Tumpukan.top++;
        cout << "\nMasukkan data kode (kode siswa pengambil LKS) = ";
        cin >> Tumpukan.dataStack[Tumpukan.top];
      
        cout << "\n--- Kode '" << Tumpukan.dataStack[Tumpukan.top] << "' masuk ke Antrian (Stack) ---" << endl;
    }
}

//Deklarasi void popLKS pada class manajemen
//untuk menghapus data pengambil LKS
void Manajemen::popLKS() {
    if (isEmptyLKS()) {
        cout<<"==================================="<<endl;
        cout << "\tAntrian Kosong !! " << endl;
        cout<<"==================================="<<endl;
    } else {
        cout << "\n--- Kode '" << Tumpukan.dataStack[Tumpukan.top] << "' keluar dari antrian ---" << endl;
        Tumpukan.top--;
    }
}

//Deklarasi void printStackLKS pada class manajemen
//untuk menampilkan data seluruh pengambil LKS
void Manajemen::printStackLKS() {
    if (isEmptyLKS()) {
        cout<<"**************************************"<<endl;
        cout<< "\tBelum Ada antrian\n";
        cout<<"**************************************"<<endl;
    } else {
        cout<<"***********************************"<<endl;
        cout << "Data Tumpukan : ";
        for (z = Tumpukan.top; z >= 0; z--)
            cout << Tumpukan.dataStack[z] << ((z == 0) ? "" : ",");
        cout<<"\n***********************************"<<endl;
    }
}

//Deklarasi void clearLKS pada class manajemen
//untuk menhapus seluruh data pengambil LKS
void Manajemen::ClearLKS()
{
    if (isEmptyLKS()){
        cout<<"*****************************************************"<<endl;
        cout<< "\tTidak Ada Data Tumpukan Yang Akan Di CLEAR !\n";
        cout<<"*****************************************************"<<endl;
    }else{  
        Tumpukan.top=-1;
        cout<<"\nSemua Data Dalam Antrian Akan Di HAPUS, Silahkan Tekan 'Enter'\n";
    }
}

//Deklarasi void HitungLKS pada class manajemen
//untuk menampilkan kode data terbesar, terkecil & jumlah antrian pengambil LKS
void Manajemen::HitungLKS()
{
    total = 0;
    maksimum = Tumpukan.dataStack[0];
    minimum = Tumpukan.dataStack[0];
     
    for( z = 0; z < Tumpukan.dataStack[z]; z++) 
      {
        if (Tumpukan.dataStack[z] > maksimum)  
        {
            maksimum = Tumpukan.dataStack[z];
        }else if (Tumpukan.dataStack[z] < minimum)
        {
            minimum = Tumpukan.dataStack[z];     
        }
    }
    cout << "\n- Kode siswa tebesar Dalam antrian Adalah : " << maksimum << endl;
    cout << "- Kode siswa terkecil Dalam antrian Adalah  : "<< minimum << endl;
         
    for( z=0; z<=Tumpukan.dataStack[z]; z++)
        {
            total=total+Tumpukan.dataStack[z];
        }
        //cout << "-Total Data Dalam Stack Adalah       : "<< total <<endl;
  cout << "- Jumlah antrian (stack) saat ini sejumlah   : " << Tumpukan.top + 1 << endl;
}

//Deklarasi void searchLKS pada class manajemen
//untuk mencari data pengambil LKS
void Manajemen::SearchLKS()
{
    int caridata, ketemu = 0;
    if(isEmptyLKS())
    {
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada antrian !\n";
        cout<<"**************************************"<<endl;
    }else{
        cout << "\n\nMasukkan kode siswa yang akan dicari = ";
        cin >> caridata;
        for (z = 0; z<Tumpukan.top; z++) {
            if (caridata == Tumpukan.dataStack[z]) {
                cout << "\nKode siswa " << caridata << " ditemukan pada antrian ke- = " << z + 1<<endl;
                ketemu = 1; 
            }
        }
    if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada !!" << endl;
    }
}

//Deklarasi void editLKS pada class manajemen
//untuk mengedit data pengambil LKS
void Manajemen::EditLKS()
{
    if(isEmptyLKS())
    {
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada antrian !\n";
        cout<<"**************************************"<<endl;
    }else{
        cout << "\n\nMasukkan data kode siswa yang akan diubah = ";
        cin >> ganti;
        for (z = 0; z<Tumpukan.top; z++)
        {
            if (Tumpukan.dataStack[z] == ganti)
            {
              cout << "Masukkan kode siswa baru = ";
              cin >> Tumpukan.dataStack[z];
            }
        }
    }
}

//Deklarasi void hapusLKS pada class manajemen
//untuk menghapus data pengambil LKS yang dipilih
void Manajemen::HapusLKS()
{
    if (isEmptyLKS()){
        cout<<"**************************************"<<endl;
        cout<< "\tTidak Ada Antrian !\n";
        cout<<"**************************************"<<endl;
    }else{               
        cout<<"\nData kode siswa yang akan dihapus : ";
        cin>>hapusStack;
         
        for(z=0;z<=20;z++)
        {
            if(Tumpukan.dataStack[z]==hapusStack)
            {
                Tumpukan.dataStack[z]=(Tumpukan.dataStack[Tumpukan.top--]);
                cout << "\nYakin Ingin Menghapus Data '" << hapusStack << "' Dari antrian ?" <<endl;     
            }           
        }   
    }
}



int main() {
  Manajemen a;
  a.menuambil_LKS();

  return 0;
}
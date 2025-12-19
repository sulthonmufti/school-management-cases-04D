#include <fstream>
#include <iomanip>
#include<stdlib.h>
#include<string>
#include <iostream>
#define MAX 20
#define FULL 5
#define FULLSELEKSI 5

using namespace std;


//Struct KTP
struct data
{
  string nik[17];
  string nama[30], jenis[20], status[20], pekerjaan[20], tempat[20];
  string tgl[20], bln[20], thn[20];
  string jalan[20], kec[20], kelurahan[20];
  string rt[10], rw[10];
};

//Class KTP
class ktp
{
private:
  int pilgoldar[10], pilagama[10], pilkewarganegaraan[10];

public:
  data KTP;
  void input(int);
  void output(int);

  ofstream dataktp;
  ofstream ktptxt;
};

//Struct NodeKunjungan
struct NodeKUNJUNGAN{
      int nimKUNJUNGAN;
      string namaKUNJUNGAN;
      string kelasKUNJUNGAN;
      
      NodeKUNJUNGAN *kiriKUNJUNGAN;
      NodeKUNJUNGAN *kananKUNJUNGAN;
};

//Struct NodeKetua
struct Nodeketua{
      int nimketua;
      string namaketua;
      string kelasketua;
      
      Nodeketua *kiriketua;
      Nodeketua *kananketua;
};

//Struct nodePKELAS
struct nodePKELAS
{
    int elementPKELAS;
    string element_bPKELAS;
    string element_cPKELAS;
    nodePKELAS *leftPKELAS;
    nodePKELAS *rightPKELAS;
    int heightPKELAS;
};
typedef struct nodePKELAS *nodeptrPKELAS;

//Struct nodeOLAHRAGA
struct nodeOLAHRAGA
{
    int elementOLAHRAGA;
    string element_bOLAHRAGA;
    string element_cOLAHRAGA;
    nodeOLAHRAGA *leftOLAHRAGA;
    nodeOLAHRAGA *rightOLAHRAGA;
    int heightOLAHRAGA;
};
typedef struct nodeOLAHRAGA *nodeptrOLAHRAGA;

//Struct nodeSENI
struct nodeSENI
{
    int elementSENI;
    string element_bSENI;
    string element_cSENI;
    nodeSENI *leftSENI;
    nodeSENI *rightSENI;
    int heightSENI;
};
typedef struct nodeSENI *nodeptrSENI;

//Struct nodeTMBHN1
struct nodeTMBH1
{
    int elementTMBH1;
    string element_bTMBH1;
    string element_cTMBH1;
    nodeTMBH1 *leftTMBH1;
    nodeTMBH1 *rightTMBH1;
    int heightTMBH1;
};
typedef struct nodeTMBH1 *nodeptrTMBH1;

//Struct nodeTMBH2
struct nodeTMBH2
{
    int elementTMBH2;
    string element_bTMBH2;
    string element_cTMBH2;
    nodeTMBH2 *leftTMBH2;
    nodeTMBH2 *rightTMBH2;
    int heightTMBH2;
};
typedef struct nodeTMBH2 *nodeptrTMBH2;

//Struct nodeGURU
struct nodeGURU
{
    int elementGURU;
    string element_bGURU;
    string element_cGURU;
    nodeGURU *leftGURU;
    nodeGURU *rightGURU;
    int heightGURU;
};
typedef struct nodeGURU *nodeptrGURU;

//Struct nodeLAB
struct nodeLAB
{
    int elementLAB;
    string element_bLAB;
    string element_cLAB;
    nodeLAB *leftLAB;
    nodeLAB *rightLAB;
    int heightLAB;
};
typedef struct nodeLAB *nodeptrLAB;

//Struct nodeTMBH3
struct nodeTMBH3
{
    int elementTMBH3;
    string element_bTMBH3;
    string element_cTMBH3;
    nodeTMBH3 *leftTMBH3;
    nodeTMBH3 *rightTMBH3;
    int heightTMBH3;
};
typedef struct nodeTMBH3 *nodeptrTMBH3;

//Class NodePQ (Priority Queue)
class NodePQ{
	public:
		int PriorityFOTO;
		string ItemFOTO;
    string StatusFOTO;
		NodePQ *nextFOTO;
		NodePQ *previousFOTO;


    int PriorityBUKU;
		string ItemBUKU;
    string StatusBUKU;
		NodePQ *nextBUKU;
		NodePQ *previousBUKU;

		NodePQ(int prio, string item){
			PriorityFOTO=prio;
			ItemFOTO=item;
			nextFOTO = NULL;
			previousFOTO = NULL;

      PriorityBUKU=prio;
      ItemBUKU = item;
			nextBUKU = NULL;
			previousBUKU = NULL;
      
      if(prio == 1){
        StatusFOTO = "Kurang dari 10 lembar.";
        StatusBUKU = "Buku Pelajaran.";
      }else if(prio == 2){
        StatusFOTO = "Antara 11 - 20 lembar.";
        StatusBUKU = "Buku Soal Latihan.";
      }else{
        StatusFOTO = "Lebih dari 20 lembar.";
        StatusBUKU = "Buku NOvel.";
      }
		}
};

//class Manajemen
class Manajemen
{
public:
  void login();
  void menu();
  void halamanuser();
  void sumberdana();
  int rekursifBOS(int jumlahBOS);

  //tambahan
  void gurukaryawan();
  void inputdataguru();
  void deletedataguru();
  void caridataguru();
  void tampildataguru();
  void cek();
  void pindah_posisi_sebelumnya();
  void pindah_posisi_berikutnya();
  void tambah_tengah_list();
  void Hapus_tengah_list();

  void dataguru();
  void tambah_depan();
  void buat_baru();
  void tampil();
  void tambah_belakang();
  void hapus_depan();
  void hapus_belakang();
  void pidahguru_sebelum();  //tmbh
  void pidahguru_sesudah();
  void tambahguru_tengah();
  void Hapusguru_tengah();

  void hitunggaji();
  void rincian();
  void caridata();
  void tulisdata();
  void bacainvoice();
  void ascending();
  void descending();

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

  void menu_lomba();
  void tambahlomba_depan();
  void buatlomba_baru();
  void tampillomba();
  void tambahlomba_belakang();
  void hapuslomba_depan();
  void hapuslomba_belakang();
  void tulisdatalomba();
  void pidahlomba_sebelum();
  void pidahlomba_sesudah();
  void tambahlomba_tengah();
  void Hapuslomba_tengah();

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


  //Masuk pertemuan 6 fitur perlengkapan (stack)
  void menuambil_Perlengkapan();
  void initPerlengkapan();
  void printStackPerlengkapan();
  void pushPerlengkapan();
  void popPerlengkapan();
  void ClearPerlengkapan();
  void HitungPerlengkapan();
  void SearchPerlengkapan();
  void EditPerlengkapan();
  void HapusPerlengkapan();
  bool isEmptyPerlengkapan();
  bool isFullPerlengkapan();

  void menu_pendaftaran();
  void insertCQpendaftaran(int valpendaftaran);
  void insertCQ_Stringpendaftaran(string apendaftaran);
  void deleteCQpendaftaran();
  void deleteCQStringpendaftaran();
  void displayCQpendaftaran();

  void menu_SPP();
  void insertCQSPP(int valSPP);
  void insertCQ_StringSPP(string aSPP);
  void deleteCQSPP();
  void deleteCQStringSPP();
  void displayCQSPP();

  void menuFOTO();
  Manajemen(){
			firstFOTO = lastFOTO = NULL;

      firstBUKU = lastBUKU = NULL;
	}
  void insertFOTO(int prioFOTO, string itemFOTO);
  void popFOTO();
  void displayFOTO();

  void menuBUKU();
  void insertBUKU(int prioBUKU, string itemBUKU);
  void popBUKU();
  void displayBUKU();

  void menuPengunjungPerpus();
  void tambah_KUNJUNGAN(NodeKUNJUNGAN **rootKUNJUNGAN, int nimbaruKUNJUNGAN, string namabaruKUNJUNGAN, string kelasbaruKUNJUNGAN);
  void preOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN);
  void inOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN);
  void postOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN);

  void menupendataan();
  void tambah_data(Nodeketua **rootketua, int nimbaru, string namabaru, string kelasbaru);
  void preOrder_ketua(Nodeketua *rootketua);
  void inOrder_ketua(Nodeketua *rootketua);
  void postOrder_ketua(Nodeketua *rootketua);

  void menu_utamaPerencanaan();
  void menu_PerencanaanKelas();
  void insertPKELAS(int, string, string, nodeptrPKELAS &);
  void delPKELAS(int, string, string, nodeptrPKELAS &);
  int deleteminPKELAS(nodeptrPKELAS &);
  void findPKELAS(int,nodeptrPKELAS &);
  nodeptrPKELAS findminPKELAS(nodeptrPKELAS);
  nodeptrPKELAS findmaxPKELAS(nodeptrPKELAS);
  void makeemptyPKELAS(nodeptrPKELAS &);
  void copyPKELAS(nodeptrPKELAS &,nodeptrPKELAS &);
  nodeptrPKELAS nodecopyPKELAS(nodeptrPKELAS &);
  void preorderPKELAS(nodeptrPKELAS);
  void inorderPKELAS(nodeptrPKELAS);
  void postorderPKELAS(nodeptrPKELAS);
  int bsheightPKELAS(nodeptrPKELAS);
  nodeptrPKELAS srlPKELAS(nodeptrPKELAS &);
  nodeptrPKELAS drlPKELAS(nodeptrPKELAS &);
  nodeptrPKELAS srrPKELAS(nodeptrPKELAS &);
  nodeptrPKELAS drrPKELAS(nodeptrPKELAS &);
  int maxPKELAS(int,int);
  int nonodesPKELAS(nodeptrPKELAS);

  //perenanaan pembelian fasilitas ruang olahraga (fitur 2)
    void menu_PerencanaanOLAHRAGA();
    void insertOLAHRAGA(int, string, string, nodeptrOLAHRAGA &);
    void delOLAHRAGA(int, string, string, nodeptrOLAHRAGA &);
    int deleteminOLAHRAGA(nodeptrOLAHRAGA &);
    void findOLAHRAGA(int,nodeptrOLAHRAGA &);
    nodeptrOLAHRAGA findminOLAHRAGA(nodeptrOLAHRAGA);
    nodeptrOLAHRAGA findmaxOLAHRAGA(nodeptrOLAHRAGA);
    void makeemptyOLAHRAGA(nodeptrOLAHRAGA &);
    void copyOLAHRAGA(nodeptrOLAHRAGA &,nodeptrOLAHRAGA &);
    nodeptrOLAHRAGA nodecopyOLAHRAGA(nodeptrOLAHRAGA &);
    void preorderOLAHRAGA(nodeptrOLAHRAGA);
    void inorderOLAHRAGA(nodeptrOLAHRAGA);
    void postorderOLAHRAGA(nodeptrOLAHRAGA);
    int bsheightOLAHRAGA(nodeptrOLAHRAGA);
    nodeptrOLAHRAGA srlOLAHRAGA(nodeptrOLAHRAGA &);
    nodeptrOLAHRAGA drlOLAHRAGA(nodeptrOLAHRAGA &);
    nodeptrOLAHRAGA srrOLAHRAGA(nodeptrOLAHRAGA &);
    nodeptrOLAHRAGA drrOLAHRAGA(nodeptrOLAHRAGA &);
    int maxOLAHRAGA(int,int);
    int nonodesOLAHRAGA(nodeptrOLAHRAGA);

//perenanaan pembelian fasilitas ruang Seni (fitur 3)
    void menu_PerencanaanSENI();
    void insertSENI(int, string, string, nodeptrSENI &);
    void delSENI(int, string, string, nodeptrSENI &);
    int deleteminSENI(nodeptrSENI &);
    void findSENI(int,nodeptrSENI &);
    nodeptrSENI findminSENI(nodeptrSENI);
    nodeptrSENI findmaxSENI(nodeptrSENI);
    void makeemptySENI(nodeptrSENI &);
    void copySENI(nodeptrSENI &,nodeptrSENI &);
    nodeptrSENI nodecopySENI(nodeptrSENI &);
    void preorderSENI(nodeptrSENI);
    void inorderSENI(nodeptrSENI);
    void postorderSENI(nodeptrSENI);
    int bsheightSENI(nodeptrSENI);
    nodeptrSENI srlSENI(nodeptrSENI &);
    nodeptrSENI drlSENI(nodeptrSENI &);
    nodeptrSENI srrSENI(nodeptrSENI &);
    nodeptrSENI drrSENI(nodeptrSENI &);
    int maxSENI(int,int);
    int nonodesSENI(nodeptrSENI);

//perenanaan pembelian fasilitas ruang guru (fitur 4)
    void menu_PerencanaanGURU();
    void insertGURU(int, string, string, nodeptrGURU &);
    void delGURU(int, string, string, nodeptrGURU &);
    int deleteminGURU(nodeptrGURU &);
    void findGURU(int,nodeptrGURU &);
    nodeptrGURU findminGURU(nodeptrGURU);
    nodeptrGURU findmaxGURU(nodeptrGURU);
    void makeemptyGURU(nodeptrGURU &);
    void copyGURU(nodeptrGURU &,nodeptrGURU &);
    nodeptrGURU nodecopyGURU(nodeptrGURU &);
    void preorderGURU(nodeptrGURU);
    void inorderGURU(nodeptrGURU);
    void postorderGURU(nodeptrGURU);
    int bsheightGURU(nodeptrGURU);
    nodeptrGURU srlGURU(nodeptrGURU &);
    nodeptrGURU drlGURU(nodeptrGURU &);
    nodeptrGURU srrGURU(nodeptrGURU &);
    nodeptrGURU drrGURU(nodeptrGURU &);
    int maxGURU(int,int);
    int nonodesGURU(nodeptrGURU);

//perenanaan pembelian fasilitas ruang laboratorium (fitur 5)
    void menu_PerencanaanLAB();
    void insertLAB(int, string, string, nodeptrLAB &);
    void delLAB(int, string, string, nodeptrLAB &);
    int deleteminLAB(nodeptrLAB &);
    void findLAB(int,nodeptrLAB &);
    nodeptrLAB findminLAB(nodeptrLAB);
    nodeptrLAB findmaxLAB(nodeptrLAB);
    void makeemptyLAB(nodeptrLAB &);
    void copyLAB(nodeptrLAB &,nodeptrLAB &);
    nodeptrLAB nodecopyLAB(nodeptrLAB &);
    void preorderLAB(nodeptrLAB);
    void inorderLAB(nodeptrLAB);
    void postorderLAB(nodeptrLAB);
    int bsheightLAB(nodeptrLAB);
    nodeptrLAB srlLAB(nodeptrLAB &);
    nodeptrLAB drlLAB(nodeptrLAB &);
    nodeptrLAB srrLAB(nodeptrLAB &);
    nodeptrLAB drrLAB(nodeptrLAB &);
    int maxLAB(int,int);
    int nonodesLAB(nodeptrLAB);


//FITUR USER
  void menuuutama();
  void menu_SELEKSILOMBA();
  void insertCQSELEKSILOMBA(int valSELEKSILOMBA);
  void insertCQ_StringSELEKSILOMBA(string aSELEKSILOMBA);
  void deleteCQSELEKSILOMBA();
  void deleteCQStringSELEKSILOMBA();
  void displayCQSELEKSILOMBA();

  void menu_SELEKSIBEASISWA();
  void insertCQSELEKSIBEASISWA(int valSELEKBEASISWA);
  void insertCQ_StringSELEKSIBEASISWA(string aSELEKBEASISWA);
  void deleteCQSELEKSIBEASISWA();
  void deleteCQStringSELEKSIBEASISWA();
  void displayCQSELEKSIBEASISWA();


//FITUR ADMIN
  void menu_ADMINSELEKSILOMBA();
  void insertCQADMINSELEKSILOMBA(int valADMINSELEKSILOMBA);
  void insertCQ_StringADMINSELEKSILOMBA(string aADMINSELEKSILOMBA);
  void deleteCQADMINSELEKSILOMBA();
  void deleteCQStringADMINSELEKSILOMBA();
  void displayCQADMINSELEKSILOMBA();

  void menu_ADMINSELEKSIBEASISWA();
  void insertCQADMINSELEKSIBEASISWA(int valADMINSELEKSIBEASISWA);
  void insertCQ_StringADMINSELEKSIBEASISWA(string aADMINSELEKSIBEASISWA);
  void deleteCQADMINSELEKSIBEASISWA();
  void deleteCQStringADMINSELEKSIBEASISWA();
  void displayCQADMINSELEKSIBEASISWA();

//TMBH=========================================================================
void menu_PerencanaanTMBH1();
    void insertTMBH1(int, string, string, nodeptrTMBH1 &);
    void delTMBH1(int, string, string, nodeptrTMBH1 &);
    int deleteminTMBH1(nodeptrTMBH1 &);
    void findTMBH1(int,nodeptrTMBH1 &);
    nodeptrTMBH1 findminTMBH1(nodeptrTMBH1);
    nodeptrTMBH1 findmaxTMBH1(nodeptrTMBH1);
    void makeemptyTMBH1(nodeptrTMBH1 &);
    void copyTMBH1(nodeptrTMBH1 &,nodeptrTMBH1 &);
    nodeptrTMBH1 nodecopyTMBH1(nodeptrTMBH1 &);
    void preorderTMBH1(nodeptrTMBH1);
    void inorderTMBH1(nodeptrTMBH1);
    void postorderTMBH1(nodeptrTMBH1);
    int bsheightTMBH1(nodeptrTMBH1);
    nodeptrTMBH1 srlTMBH1(nodeptrTMBH1 &);
    nodeptrTMBH1 drlTMBH1(nodeptrTMBH1 &);
    nodeptrTMBH1 srrTMBH1(nodeptrTMBH1 &);
    nodeptrTMBH1 drrTMBH1(nodeptrTMBH1 &);
    int maxTMBH1(int,int);
    int nonodesTMBH1(nodeptrTMBH1);


    void menu_PerencanaanTMBH2();
    void insertTMBH2(int, string, string, nodeptrTMBH2 &);
    void delTMBH2(int, string, string, nodeptrTMBH2 &);
    int deleteminTMBH2(nodeptrTMBH2 &);
    void findTMBH2(int,nodeptrTMBH2 &);
    nodeptrTMBH2 findminTMBH2(nodeptrTMBH2);
    nodeptrTMBH2 findmaxTMBH2(nodeptrTMBH2);
    void makeemptyTMBH2(nodeptrTMBH2 &);
    void copyTMBH2(nodeptrTMBH2 &,nodeptrTMBH2 &);
    nodeptrTMBH2 nodecopyTMBH2(nodeptrTMBH2 &);
    void preorderTMBH2(nodeptrTMBH2);
    void inorderTMBH2(nodeptrTMBH2);
    void postorderTMBH2(nodeptrTMBH2);
    int bsheightTMBH2(nodeptrTMBH2);
    nodeptrTMBH2 srlTMBH2(nodeptrTMBH2 &);
    nodeptrTMBH2 drlTMBH2(nodeptrTMBH2 &);
    nodeptrTMBH2 srrTMBH2(nodeptrTMBH2 &);
    nodeptrTMBH2 drrTMBH2(nodeptrTMBH2 &);
    int maxTMBH2(int,int);
    int nonodesTMBH2(nodeptrTMBH2);



    void menu_PerencanaanTMBH3();
    void insertTMBH3(int, string, string, nodeptrTMBH3 &);
    void delTMBH3(int, string, string, nodeptrTMBH3 &);
    int deleteminTMBH3(nodeptrTMBH3 &);
    void findTMBH3(int,nodeptrTMBH3 &);
    nodeptrTMBH3 findminTMBH3(nodeptrTMBH3);
    nodeptrTMBH3 findmaxTMBH3(nodeptrTMBH3);
    void makeemptyTMBH3(nodeptrTMBH3 &);
    void copyTMBH3(nodeptrTMBH3 &,nodeptrTMBH3 &);
    nodeptrTMBH3 nodecopyTMBH3(nodeptrTMBH3 &);
    void preorderTMBH3(nodeptrTMBH3);
    void inorderTMBH3(nodeptrTMBH3);
    void postorderTMBH3(nodeptrTMBH3);
    int bsheightTMBH3(nodeptrTMBH3);
    nodeptrTMBH3 srlTMBH3(nodeptrTMBH3 &);
    nodeptrTMBH3 drlTMBH3(nodeptrTMBH3 &);
    nodeptrTMBH3 srrTMBH3(nodeptrTMBH3 &);
    nodeptrTMBH3 drrTMBH3(nodeptrTMBH3 &);
    int maxTMBH3(int,int);
    int nonodesTMBH3(nodeptrTMBH3);
//=========================================================================TMBH



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

  int pilsiswa, s, jsiswa, siswakode[8],siswaprestasi[8];
  string siswanama[8];
  ofstream siswaku;

  int pillomba, l, jlomba, lombakode[8],perwakilanlomba[8];
  string lombanama[8];
  ofstream lombaku;

  int z, pilihanstack, dataa;
  int maksimum, minimum, total, ganti, hapusStack;

  /*tambahan*/int ch, nr;


  //Masuk pertemuan 6 fitur perlengkapan (stack) ===================

  //int c, pilihanstack, dataStack;
  int c, pilihanstackperlengkapan;
  //int maksimum, minimum, total;
  string hapusStackPerlengkapan, gantiPPerlengkapan;

  int cqueuependaftaran[FULL];
  string cqueue_Stringpendaftaran[FULL];
  int frontpendaftaran = -1, rearpendaftaran= -1, npendaftaran =5;
  int front_Stringpendaftaran = -1, rear_Stringpendaftaran = -1;
  int chpendaftaran, valpendaftaran;
  string apendaftaran;
  ofstream Antre_pendaftaran;
  // int fpendaftaran = frontpendaftaran, rpendaftaran = rearpendaftaran;
  // int ffpendaftaran = front_Stringpendaftaran, rrpendaftaran = rear_Stringpendaftaran;

  int cqueueSPP[FULL];
  string cqueue_StringSPP[FULL];
  int frontSPP = -1, rearSPP = -1, nSPP =5;
  int front_StringSPP = -1, rear_StringSPP = -1;
  int chSPP, valSPP;
  string aSPP;
  ofstream Antre_SPP;
  // int fSPP = frontSPP, rSPP = rearSPP;
  // int ffSPP = front_StringSPP, rrSPP = rear_StringSPP;

int pil_utama;

  int pil_menuFOTO;
  NodePQ *firstFOTO;
	NodePQ *lastFOTO;
  ofstream data_foto;

  int prioFOTO; string itemFOTO;

  int pil_menuBUKU;
  NodePQ *firstBUKU;
	NodePQ *lastBUKU;
  ofstream data_buku;

  int prioBUKU; string itemBUKU;

  int pilKUNJUNGAN, nimKUNJUNGAN;// c;
  string namaKUNJUNGAN, kelasKUNJUNGAN;
  NodeKUNJUNGAN *pohonKUNJUNGAN = NULL; //*t;
  //pohon = NULL; //inisialisasi node pohon

  //deklarasikan variabel
  int pilketua, nimketua;// c;
  string namaketua, kelasketua;
  Nodeketua *pohonketua = NULL; //*t;
  //pohon = NULL; //inisialisasi node pohon

  int rencanaPerencanaan, rencana_menuPKELAS;

//perenanaan pembelian fasilitas ruang olahraga (fitur 2)
  int rencana_menuOLAHRAGA;

//perenanaan pembelian fasilitas ruang seni (fitur 3)
  int rencana_menuSENI;

//Perencanaan pembelelian fasilitas kelas
  int rencana_menuTMBH1;

//perenanaan pembelian fasilitas ruang olahraga (fitur 2)
  int rencana_menuTMBH2;

//perenanaan pembelian fasilitas ruang seni (fitur 3)
  int rencana_menuTMBH3;

//perenanaan pembelian fasilitas ruang seni (fitur 3)
  int rencana_menuGURU;

//perenanaan pembelian fasilitas ruang seni (fitur 3)
  int rencana_menuLAB;

//FITUR USER
  int cqueueSELEKSILOMBA[FULLSELEKSI];
  string cqueue_StringSELEKSILOMBA[FULLSELEKSI];
  int frontSELEKSILOMBA = -1, rearSELEKSILOMBA = -1, nSELEKSILOMBA =5;
  int front_StringSELEKSILOMBA = -1, rear_StringSELEKSILOMBA = -1;
  int chSELEKSILOMBA, valSELEKSILOMBA;
  string aSELEKSILOMBA;
  ofstream Antre_SELEKSILOMBA;

  int cqueueSELEKSIBEASISWA[FULLSELEKSI];
  string cqueue_StringSELEKSIBEASISWA[FULLSELEKSI];
  int frontSELEKSIBEASISWA = -1, rearSELEKSIBEASISWA = -1, nSELEKSIBEASISWA =5;
  int front_StringSELEKSIBEASISWA = -1, rear_StringSELEKSIBEASISWA = -1;
  int chSELEKSIBEASISWA, valSELEKSIBEASISWA;
  string aSELEKSIBEASISWA;
  ofstream Antre_SELEKSIBEASISWA;

//FITUR ADMIN
  int cqueueADMINSELEKSILOMBA[FULLSELEKSI];
  string cqueue_StringADMINSELEKSILOMBA[FULLSELEKSI];
  int frontADMINSELEKSILOMBA = -1, rearADMINSELEKSILOMBA = -1, nADMINSELEKSILOMBA =5;
  int front_StringADMINSELEKSILOMBA = -1, rear_StringADMINSELEKSILOMBA = -1;
  int chADMINSELEKSILOMBA, valADMINSELEKSILOMBA;
  string aADMINSELEKSILOMBA;
  ofstream Antre_ADMINSELEKSILOMBA;
  ifstream seleksilomba;

  int cqueueADMINSELEKSIBEASISWA[FULLSELEKSI];
  string cqueue_StringADMINSELEKSIBEASISWA[FULLSELEKSI];
  int frontADMINSELEKSIBEASISWA = -1, rearADMINSELEKSIBEASISWA = -1, nADMINSELEKSIBEASISWA =5;
  int front_StringADMINSELEKSIBEASISWA = -1, rear_StringADMINSELEKSIBEASISWA = -1;
  int chADMINSELEKSIBEASISWA, valADMINSELEKSIBEASISWA;
  string aADMINSELEKSIBEASISWA;
  ofstream Antre_ADMINSELEKSIBEASISWA;
  ifstream seleksibeasiswa;
};


//struct node (t)
struct nodeee
{
  int kodegurux;
  string namagurux;
  string alamatgurux;
  int nohpx;
  struct node *next;
}*depan=NULL, *belakang, *temp;

//struct simpul
struct simpul
{
  char kodeguru[8], namaguru[80];
  int umurguru;
  struct simpul *next;
} mhs, *baru, *awal = NULL, *akhir = NULL, *hapus, *bantu;

//struct siswa
struct siswa
{
  char kodesiswa[8], namasiswa[80];
  int prestasisiswa;
  struct siswa *next;
} sswa, *barusiswa, *awalsiswa = NULL, *akhirsiswa = NULL, *hapussiswa, *bantusiswa;

//struct lomba
struct lomba
{
  char kodelomba[8], namalomba[80];
  int perwakilanlomba;
  struct lomba *next;
} lmba, *barulomba, *awallomba = NULL, *akhirlomba = NULL, *hapuslomba, *bantulomba;

//struct lks
struct lks
{
  char namaLKS[50];
  char penerbit[50];
  char jumlah[500];
  lks *next, *prev;
} *awalLKS = NULL, *akhirLKS = NULL, *bantuLKS, *baruLKS, *hapusLKS;

//struct seragam
struct seragam
{
  char namaseragam[50];
  char jumlahseragam[500];
  seragam *next, *prev;
} *awalseragam = NULL, *akhirseragam = NULL, *bantuseragam, *baruseragam,
  *hapusseragam;

//struct perlengkapan
struct perlengkapan
{
  char namaperlengkapan[50];
  char jumlahperlengkapan[500];
  perlengkapan *next, *prev;
} *awalperlengkapan = NULL, *akhirperlengkapan = NULL, *bantuperlengkapan,
  *baruperlengkapan, *hapusperlengkapan;

struct Stack
{
    int top, dataStack[MAX];
} Tumpukan;

struct StackPerlengkapan
{
    int top;
    string dataStackString[MAX];
} Tumpukan_Perlengkapan;


//Deklarasi void login
//untuk menu login
void Manajemen::login()
{
  cout << "======================================" << endl;
  cout << "==              LOGIN               ==" << endl;
  cout << "======================================" << endl;
  
  ambildata.open("logindata.txt");
  while (!ambildata.eof())
  {
    
    ambildata >> datafile[index1];
    index1 += 1;
    
  }
  ambildata.close();
  
login:
  cout << "Masukkan username (Nama) : ";
  cin >> username;
  cout << "Masukkan password (NIK): ";
  cin >> pass;
  if (username == datafile[0] && pass == datafile[1])
  {
    cout << "======================================" << endl;
    cout << "==        Anda adalah admin         ==" << endl;
    cout << "======================================" << endl;
    cout << endl;
    menu();

  } else if (username == datafile[2] && pass == datafile[3])
  {
    cout << "======================================" << endl;
    cout << "==         Anda adalah user         ==" << endl;
    cout << "======================================" << endl;
    halamanuser();
  } else
  {
    cout << "username atau password salah. silahkan login lagi" << endl;
    goto login;
  }
}

//[SEMENTARA : Saat ini tampilan halaman user belum lengkap]
//Deklarasi void halamanuser pada class manajemen
//menu tampilan halaman user
void Manajemen::halamanuser()
{
  cout << endl;
  cout << "[ Halaman User akan diperbaharui diwaktu yang akan datang:) ]"
      << endl;
  cout << endl;
  
menuuser:
  cout << "============================================================" << endl;
  cout << "===       HALAMAN USER MANAJEMEN KEUANGAN SEKOLAH        ===" << endl;
  cout << "== 1) Daftar Guru & Karyawan                              ==" << endl;
  cout << "== 2) Daftar Lembaga Sosial yang menjadi donatur sekolah  ==" << endl;
  cout << "== 3) Pencarian Guru & Karyawan                           ==" << endl;
  cout << "== 4) Pengurutan data ascending data Guru & Karyawan      ==" << endl;
  cout << "== 5) Daftar pembelian LKS sekolah                        ==" << endl;
  cout << "== 6) Daftar pembelian Seragam sekolah                    ==" << endl;
  cout << "== 7) Daftar pembelian perlengkapan siswa                 ==" << endl;
  cout << "== 8) Rincian uang keluar/masuk sekolah                   ==" << endl;
  cout << "== 9) Pendaftaran Seleksi Lomba                           ==" << endl;
  cout << "== 10) Pendaftaran Seleksi kandidat penerima Beasiswa     ==" << endl;
  cout << "== 11) Kembali Login                                      ==" << endl;
  cout << "== 12) keluar program                                     ==" << endl;
  cout << "============================================================" << endl;
  
  cout << "Masukkan pilihan : ";
  cin >> pilihuser;
  cout << endl;

  switch (pilihuser)
  {
  case 1:
    tampil();
    halamanuser();
    break;
    
  case 2:
    for (i = 1; i <= bnykLem; i++)
    {
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
    //rincian();
    bacainvoice();
    halamanuser();
    break;

  case 9:
    menu_SELEKSILOMBA();
    halamanuser();
    break;

    case 10:
    menu_SELEKSIBEASISWA();
    halamanuser();
    break;
    
  case 11:
    cout << "Login ulang ? (y/n) : ";
    cin >> logulang;
    if (logulang == 'y')
    {
      login();
    } else
    {
      halamanuser();
    }
    break;
    
  case 12:
    cout << "Program telah berhenti !" << endl;
    exit(0);
    break;
    
  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    halamanuser();
    break;
  }
}


//Deklarasi void menu pada class manajemen
//tampilan menu admin
void Manajemen::menu()
{
menu:
  cout << "=======================================" << endl;
  cout << "== SISTEM MANAJEMEN KEUANGAN SEKOLAH ==" << endl;
  cout << "== Menu :                            ==" << endl;
  cout << "== 1) Sumber dana sekolah            ==" << endl;
  cout << "== 2) Penggajian guru dan karyawan   ==" << endl;
  cout << "== 3) Pembelian LKS                  ==" << endl;
  cout << "== 4) Pembelian Seragam              ==" << endl;
  cout << "== 5) Pembelian perlengkapan siswa   ==" << endl;
  cout << "== 6) Pendataan siswa ber prestasi   ==" << endl;
  cout << "== 7) Pendataan perlombaan siswa     ==" << endl;
  cout << "== 8) Pengambilan LKS                ==" << endl;
  cout << "== 9) Pengambilan Perlengkapan       ==" << endl;
  cout << "== 10) Pengambilangan Seragam        ==" << endl;
  cout << "== 11) Antrian Penerimaan Guru Baru  ==" << endl;
  cout << "== 12) Antrian Pembayaran SPP        ==" << endl;
  cout << "== 13) Antrian P. Pinjam Buku Perpus ==" << endl;
  cout << "== 14) Antrian P. Layanan Fotocopy   ==" << endl;
  cout << "== 15) Pendataan Anggota OSIS        ==" << endl;
  cout << "== 16) Pendataan Pengunjung Perpus   ==" << endl;
  cout << "== 17) Perencanaan beli fasilitas    ==" << endl;
  cout << "== 18) Seleksi pendaftar lomba       ==" << endl;
  cout << "== 19) Seleksi pendaftar beasiswa    ==" << endl;
  // cout << "== 4) Pembangunan                    ==" << endl;
  // cout << "== 5) Pemeliharaan fasilitas sekolah ==" << endl;
  cout << "== 20) Rincian dana masuk dan keluar ==" << endl;
  cout << "== 21) Login kembali                 ==" << endl;
  cout << "== 22) Login sebagai user            ==" << endl;
  cout << "== 23) Keluar program                ==" << endl;
  cout << "=======================================" << endl;
  cout << "pilihan menu : ";
  cin >> pmenu;
  cout << endl;
  
  switch (pmenu)
  {
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
    menusiswa_prestasi();
    break;
    
  case 7:
    menu_lomba();
    break;

  case 8:
    menuambil_LKS();
    break;

  case 9:
    menuambil_Perlengkapan();
    break;

  case 10:
    //Stack array - menu ambil seragam
    break;

  case 11:
    menu_pendaftaran();
    break;

  case 12:
    menu_SPP();
    break;

  case 13:
    menuBUKU();
    break;

  case 14:
    menuFOTO();
    break;

  case 15:
    menupendataan();
    break;

  case 16:
    menuPengunjungPerpus();
    break;

  case 17:
    menu_utamaPerencanaan();
    break;
    
  case 18:
    menu_ADMINSELEKSILOMBA();
    break;
    
  case 19:
    menu_ADMINSELEKSIBEASISWA();
    break;
    
  case 20:
    rincian();
    break;
    
  case 21:
    login();
    break;
    
  case 22:
    halamanuser();
    break;
    
  case 23:
    cout << "Program telah berhenti !" << endl;
    exit(0);
    break;

  default:
    cout << "Inputan salah ! silahkan coba lagi!" << endl;
    goto menu;
    break;
  }
}

//Deklarasi void sumberdana pada class manajemen
//tampilan pada sumberdana untuk menentukan jumlah sumber dana sekolah
void Manajemen::sumberdana()
{
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

  //menentukan sumber dana BOS
  if (psumber == 1)
  {
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

    //Menentukan sumber dana dari SPP
  } else if (psumber == 2)
  {
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

  } else if (psumber == 3)
  {
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

  } else if (psumber == 4)
  {
    //menentukan total sumber dana
    totaldana = jumlahBOS + jumlahspp + jumlahLem;
    cout << "Total dana keuangan sekolah : " << totaldana;
    cout << endl;
    menu();
    
  } else if (psumber == 5)
  {
    menu();
    
  } else
  {
    cout << "pilihan salah !";
    goto sumber;
  }
}

//Deklarasi rekursiBOS pada class manajemen
//menentukan jumlah sumber BOS
int Manajemen::rekursifBOS(int jumlahBOS)
{
  if (jumlahBOS > 0)
  {
    cout << jumlahBOS;
    return jumlahBOS;
  }
}


//Deklarasi void gurukaryawan pada class manajemen ====================================={
void Manajemen::gurukaryawan()
{
  cout << "1) Input data guru & karyawan" << endl;
  cout << "2) Hapus data guru & karyawan" << endl;
  cout << "3) Cari guru / karyawan" << endl;
  cout << "4) Tampil daftar guru & karyawan" << endl;
  cout << "5) Kembali ke menu" << endl;
  cout << "Masukkan pilihan anda : ";
  cin >> ch;
  cout << "=======================================" << endl;
  cout << endl;
  
  switch(ch)
  {
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

//Deklarasi void inputdataguru pada class manajemen
void Manajemen::inputdataguru()
{
  temp = new nodeee;
  string asalx;
  string namex;
  int hpx;
  
  cout << "Input kode guru / karyawan : ";
  cin >> nr;
  cin.ignore(1,'\n');
  cout << "Masukkan nama guru / karyawan : ";
  getline(cin, namex);
  cout << "Masukkan alamat guru / karyawan : ";
  getline(cin, asalx);
  cout << "no hp :";
  cin >> hpx;
  
  temp->kodegurux=nr;
  temp->namagurux=namex;
  temp->alamatgurux=asalx;
  temp->nohpx = hpx;
  temp->next = NULL;

  if(depan==NULL)
  {
    depan=belakang=temp;
  }else
  {
    //belakang->next=temp;   //mrh
    belakang=temp;
  }
  gurukaryawan();
}

//Deklarasi void deleteguru pada class manajemen
void Manajemen::deletedataguru()
{
  if(depan==NULL)
  {
    cout << "Belum ada data guru / karyawan." << endl;
  }else
  {
    temp = depan;
    //depan = depan->next;  //mrh
    cout << "Guru / karyawan dengan kode " << temp->kodegurux << "telah dihapus beserta datanya." << endl; delete(temp);
  }
  gurukaryawan();
}

//Deklarasi void cek pada class manajemen
void Manajemen::cek(){
  nodeee *temp;
    temp=depan;
    int caridata;
    int ketemu=0;
    if(depan != NULL)
    {
        cout<<"\n Input no.rekening yang dicari\t: ";
        cin>>caridata;
        while(temp!=NULL)
        {
            temp->kodegurux;
            if(caridata==temp->kodegurux)
            {
                cout<<"\n\n>>>  Data Yang Anda Cari Ditemukan  <<<"<<endl;
                cout<<" Nama\t: "<<temp->namagurux<<endl;
                cout<<" Kode\t: "<<temp->kodegurux<<endl;
                cout<<" ------------------------------"<<endl;
                cout<<"\n\n";
              ketemu=1;
            }
            //temp=temp->next;  //mrh
        }
        if(ketemu==0)
        {
            cout<<" Data tidak ditemukan";
        }
    }
    else cout<<" Belum ada nasabah!";
}

//Deklarasi caridataguru pada class manajemen
//untuk mencari data guru
void Manajemen::caridataguru()
{
  nodeee *temp;
  temp = depan;
  int ketemu = 0;
  
  if(depan != NULL)
  {
    cout << "Input kode guru / karyawan : ";
    cin >> nr;
    
    while(temp != NULL)
    {
      //temp->kodeguru;  //mrh
      if(nr == temp->kodegurux)
      {
        cout << "Nama guru / karyawan : " << temp->namagurux << endl;
        cout << "Alamat guru / karyawan : " << temp->alamatgurux << endl;
        ketemu = 1;
      }
      //temp =  temp->next;  //mrh
    }
    if(ketemu ==  0)
    {
      cout << "Data guru / karyawan tidak ditemukan." << endl;
    }
  }else
  {
    cout << "Belum ada data guru maupun karyawan." << endl;
  }
  gurukaryawan();
}

//Deklarasi pindah_posisi_sebelumnya pada class manajemen
//untuk memindahkan urutan data guru ke posisi sebelumya
void Manajemen::pindah_posisi_sebelumnya()
{
  if (temp->next == NULL)
  {
 		cout << "Kamu berada pada akhir list." << endl;
    }else
  {
 		//temp = temp->next;   /mrh
  }
}

//Deklarasi pindah_posisi_berikutnya pada class manajemen
//untuk memindahkan urutan data guru ke posisiberikutnya
void Manajemen::pindah_posisi_berikutnya()
{
 	if (temp == depan)
 		cout << "Kamu berada pada awal list" << endl;
 	else
 	{
 		nodeee *previous; // deklarasi pointer
 		previous = depan;
 		while (previous->next != depan->next)
 		{
 			//previous = previous->next;  //mrh
 		}
 		temp = previous;
 	}
}

//Deklarasi tambah_tengah_list pada class manajemen
//untuk menambahkan data di tengah daftar
void Manajemen::tambah_tengah_list()
{
 	nodeee *baru, *bantu;
 	int posisi_sisip;
 	if(depan != NULL)
 	{
 		cout<<"Akan disisip setelah Data Ke ? : ";
 		cin>>posisi_sisip;
 		bantu = depan;
 		baru =new nodeee;
 		for(int i=1; i<posisi_sisip-1; i++)
 		{
 			if(bantu->next != NULL)
      {
 			//bantu = bantu->next;  //mrh
      }else
 			break;
 		}
 		cout << "Masukkan Nama : "; cin >> baru->namagurux;
 		cout << "Masukkan kode : "; cin >> baru->kodegurux;
 		cout << "Masukkan alamat : "; cin >> baru->alamatgurux;
 		baru->next=bantu->next;
 		//bantu->next=baru;  //mrh
 	}
 	else
 	{
 		cout<<"Belum ada data !! silahkan isi data dulu....";
 	}
}

//Deklarasi hapus_tengah_list pada class manajemen
//untuk menghapus data di tengah daftar
void Manajemen::Hapus_tengah_list()
{
 	int banyakdata,posisi_hapus,poshapus;
 	nodeee *hapus, *bantu;
 	if(depan != NULL)
 	{
 		cout<<" Akan dihapus pada data ke : ";
 		cin>>posisi_hapus;
 		banyakdata=1;
 		bantu=depan;
 		while(bantu->next != NULL)
 		{
 			//bantu=bantu->next;  //mrh
 			banyakdata++;
 		}
 	if((posisi_hapus<1)||(posisi_hapus>banyakdata))
 	{
 		cout<<"Belum ada data !! masukkan Data dula aja...\n";
 	}
 	else
 	{
 		bantu=depan;
 		poshapus=1;
 		while(poshapus<(posisi_hapus-1))
 		{
 			//bantu=bantu->next;  //mrh
 			poshapus++;
 		}
 		//hapus=bantu->next;  //mrh
 		bantu->next=hapus->next;
 		delete hapus;
 	}
 	}
 	else
 	cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
}

//Deklarasi tampildataguru pada class manajemen  ======================================}
//untuk menampilkan data guru
void Manajemen::tampildataguru()
{
  if(depan == NULL)
  {
    cout << "Belum ada data guru maupun karyawan." << endl;
  }else
  {
    temp = depan;
    if(temp != NULL)
    {
      cout << "Kode guru / karyawan   : " << temp->kodegurux << endl;
      cout << "Nama guru / karyawan   : " << temp->namagurux << endl;
      cout << "Alamat guru / karyawan : " << temp->alamatgurux << endl;
      cout << "nohp                   : " << temp->nohpx << endl;
      cout << "---------------------------------------" << endl;
      //temp =  temp->next; //mrh
    }
  }
  gurukaryawan();
}


////Deklarasi dataguru pada class manajemen
//untuk menambahkan data guru guna pencarian nilai gaji
void Manajemen::dataguru()
{
guru:
  cout << "============================================" << endl;
  cout << "==    MENU PENGGAJIAN DAN DAFTAR GURU     ==" << endl;
  cout << "== 1) Tambah data guru ke daftar Depan    ==" << endl;
  cout << "== 2) Tambah data guru ke daftar Belakang ==" << endl;
  cout << "== 3) Hapus data guru di daftar Depan     ==" << endl;
  cout << "== 4) Hapus data guru di daftar Belakang  ==" << endl;
  cout << "== 5) Tampilan daftar guru dan karyawan   ==" << endl;
  cout << "== 6) Tulis data untuk user               ==" << endl;
  cout << "== 7) Perhitungan gaji guru dan karyawan  ==" << endl;
  cout << "== 8) kembali ke menu                     ==" << endl;
  cout << "============================================" << endl;
  cout << "Pilihan anda: ";
  cin >> pil;
  cout << "=======================================" << endl;
  
  switch (pil)
  {
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

//Deklarasi tambahdepan pada class manajemen
//untuk menambahkan data guru bagian depan daftar
void Manajemen::tambah_depan()
{
  buat_baru();
  if (awal == NULL)
  {
    awal = baru;
    akhir = baru;
    akhir->next = NULL;
  } else
  {
    baru->next = awal;
    awal = baru;
  }
  cout << endl << endl;
  tampil();
  dataguru();
}

//Deklarasi void buatbaru pada class manajemen
//untuk membuar daftar data guru baru
void Manajemen::buat_baru()
{
  baru = (simpul *)malloc(sizeof(struct simpul));
  cout << "Input Kode guru / karyawan : ";
  cin >> baru->kodeguru;
  cout << "Input Nama guru / karyawan : ";
  cin >> baru->namaguru;
  cout << "Input Umur guru / karyawan : ";
  cin >> baru->umurguru;
  baru->next = NULL;
}

//Deklarasi void tampil pada class manajemen
//untuk menampilkan daftar data guru sekaligus mencetak pada file .txt
void Manajemen::tampil()
{
  ofstream fileku;
  fileku.open("daftarguru.txt");
  
  if (awal == NULL)
  {
    cout << "Kosong" << endl;
    halamanuser();
    cout << endl;
  } else
  {
    bantu = awal;
    fileku << "+-----------------------------------------------+" << endl;
    fileku << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4) << " Nama  " << setw(4) << " | " << setw(4) << " Umur " << setw(4) << " |" << endl;
    fileku << "+-----------------------------------------------+" << endl;
    cout << "| " << setw(4) << " Kode " << setw(4) << " | " << setw(4) << " Nama  " << setw(4) << " | " << setw(4) << " Umur " << setw(4) << " |" << endl;
    cout << "+-----------------------------------------------+" << endl;
    
    while (bantu != NULL)
    {
      cout << "| " << setw(4) << bantu->kodeguru << setw(4) << " | " << setw(4) << bantu->namaguru << setw(4) << " | " << setw(4) << bantu->umurguru << setw(4) << " |" << endl;
      cout << "+-----------------------------------------------+" << endl;
      
      // cout << "Kode Guru / karyawan : " << bantu->kodeguru << endl;
      // fileku << "kode Guru / karyawan : " << bantu->kodeguru << endl;

      // cout << "Nama Guru / Karyawan : " << bantu->namaguru << endl;
      // fileku << "Nama Guru / Karyawan : " << bantu->namaguru << endl;

      // out << "Umur Guru / Karyawan : " << bantu->umurguru << endl;
      // fileku << "Umur Guru / Karyawan : " << bantu->umurguru << endl;

      fileku << "| " << setw(4) << bantu->kodeguru << setw(4) << " | " << setw(4) << bantu->namaguru << setw(4) << " | " << setw(4) << bantu->umurguru << setw(4) << " |" << endl;
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

//Deklarasi void tambah_belakang pada class manajemen
//untuk menambah data guru pada bagian belakang daftar
void Manajemen::tambah_belakang()
{
  buat_baru();
  if (awal == NULL)
  {
    awal = baru;
  } else
  {
    akhir->next = baru;
  }
  akhir = baru;
  akhir->next = NULL;
  cout << endl << endl;
  
  tampil();
  dataguru();
}

//Deklarasi void hapus_depan pada class manajemen
//untuk menghapus data guru dari daftar bagian depan
void Manajemen::hapus_depan()
{
  if (awal == NULL)
  {
    cout << "kosong";
  } else
  {
    hapus = awal;
    awal = awal->next;
    free(hapus);
  }
  cout << endl << endl;
  tampil();
  dataguru();
}

//Deklarasi void hapus_belakang pada class manajemen
//untuk menghapus data guru dari daftar bagian belakang
void Manajemen::hapus_belakang()
{
  if (awal == NULL)
  {
    cout << "Kosong";
  } else if (awal == akhir)
  {
    hapus = awal;
    awal = awal->next;
    free(hapus);
  } else
  {
    hapus = awal;
    while (hapus->next != akhir)
    {
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

//Deklarasi pindaguru_sebelum pada class manajemen
//untuk memindahkan urutan data guru ke posisi sebelumya========================={
void Manajemen::pidahguru_sebelum()
{
  if (bantu->next == NULL)
  {
 		cout << "Kamu berada pada akhir list." << endl;
    }else
  {
 		bantu =bantu->next;
  }
}

//Deklarasi pindahguru_sesudah pada class manajemen
//untuk memindahkan urutan data guru ke posisiberikutnya
void Manajemen::pidahguru_sesudah()
{
  if (bantu == awal)
 		cout << "Kamu berada pada awal list" << endl;
 	else
 	{
 		simpul *previous; // deklarasi pointer
 		previous = awal;
 		while (previous->next != awal->next)
 		{
 			previous = previous->next;  
 		}
 		bantu = previous;
 	}
}

//Deklarasi tambahguru_tengah pada class manajemen
//untuk menambahkan data di tengah daftar
void Manajemen::tambahguru_tengah()
{
  simpul *baru, *bantu;
 	int posisi_sisip;
 	if(awal != NULL)
 	{
 		cout<<"Akan disisip setelah Data Ke ? : ";
 		cin>>posisi_sisip;
 		bantu = awal;
 		baru =new simpul;
 		for(int i=1; i<posisi_sisip-1; i++)
 		{
 			if(bantu->next != NULL)
      {
 			bantu = bantu->next;
      }else
 			break;
 		}
 		cout << "Masukkan Nama : "; cin >> baru->namaguru;
 		cout << "Masukkan kode : "; cin >> baru->kodeguru;
 		cout << "Masukkan umur : "; cin >> baru->umurguru;
 		baru->next=bantu->next;
 		bantu->next=baru;
 	}
 	else
 	{
 		cout<<"Belum ada data !! silahkan isi data dulu....";
 	}
}

//Deklarasi hapusguru_tengah pada class manajemen
//untuk menghapus data di tengah daftar=========================================}
void Manajemen::Hapusguru_tengah()
{
  int banyakdata,posisi_hapus,poshapus;
 	simpul *hapus, *bantu;
 	if(awal != NULL)
 	{
 		cout<<" Akan dihapus pada data ke : ";
 		cin>>posisi_hapus;
 		banyakdata=1;
 		bantu=awal;
 		while(bantu->next != NULL)
 		{
 			bantu=bantu->next;
 			banyakdata++;
 		}
 	if((posisi_hapus<1)||(posisi_hapus>banyakdata))
 	{
 		cout<<"Belum ada data !! masukkan Data dula aja...\n";
 	}
 	else
 	{
 		bantu=awal;
 		poshapus=1;
 		while(poshapus<(posisi_hapus-1))
 		{
 			bantu=bantu->next;
 			poshapus++;
 		}
 		hapus=bantu->next;
 		bantu->next=hapus->next;
 		delete hapus;
 	}
 	}
 	else
 	cout<<"Data Masih kosong, tidak bisa hapus data dari tengah! ";
}

//Deklarasi void hitunggaji pada class manajemen
//untuk menghitung pengeluaran penggajian guru
void Manajemen::hitunggaji()
{
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

//Deklarasi void rincian pada class manajemen
//untuk menampilkan invoice atau rincian pemasukan dan pengeluaran dana sekolah
void Manajemen::rincian()
{
  danaSekolah = totaldana - totalgaji - total_harga_lks - total_harga_seragam -total_harga_perlengkapan; // pembangunan & pemelihara fasilitas
  
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

//Deklarasi void caridata pada class manajemen
//untuk mencari data guru yang telah dimasukkan
void Manajemen::caridata()
{
  bantu=awal;
  int ketemu = 0;
  if(awal != NULL)
  {
    cout << "Masukkan kode guru / karywan yang anda cari : ";
    cin >> pencariandata;
    while(bantu != NULL)
    {
      bantu->kodeguru;
      if(pencariandata == bantu->kodeguru)
      {
        cout << "Data yang anda cari ditemukan " << endl;
        cout << "Kode Guru / karyawan : " << bantu->kodeguru << endl;
        cout << "Nama Guru / Karyawan : " << bantu->namaguru << endl;
        cout << "Umur Guru / Karyawan : " << bantu->umurguru << endl;
        cout<<" ------------------------------"<<endl;
        ketemu = 1;
      }
      bantu = bantu->next;
    }
    if(ketemu == 0)
    {
      cout << "Data yang anda cari tidak ditemukan." << endl;
    }
  }
  //int ketemu = 0;
  cout << "Masukkan kode guru / karywan yang anda cari :";
  cin >> caricari;
  
  for (i = 0; i < jguru; i++)
  {
    if (caricari == gurukode[i])
    {
      cout << "Kode Guru / Karyawan : " << gurukode[i] << endl;
      cout << "Nama Guru / Karyawan : " << gurunama[i] << endl;
      cout << "Umur Guru / Karyawan : " << guruumur[i] << endl;
      cout << "---------------------------------------------" << endl;
    }
  }
  halamanuser();
}

//Deklarasi void bacainvoice pada class manajemen
//untuk menampilkan invoice dari pembacaan file invoive.txt guna untuk user
void Manajemen::bacainvoice()
{
  data.open("invoice.txt");
  while (!data.eof())
  {
    getline(data, isiinvoice);
    cout << isiinvoice << endl;
  }
  data.close();
}

//Deklarasi void tulisdata pada class manajemen
//untuk menulid data guru untuk sebagai tampilan user dan pencarian data guru
void Manajemen::tulisdata()
{
  cout << "Masukkann jumlah guru dan karyawan : ";
  cin >> jguru;
  for (i = 0; i < jguru; i++)
  {
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

//Deklarasi void ascending pada class manajemen
//untuk mengurutkan data guru secara ascending
void Manajemen::ascending()
{
  for (i = 0; i < jguru; i++)
  {
    for (j = i + 1; j < jguru; j++)
    {
      if (gurukode[i] > gurukode[j])
      {
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
  cout << " | " << setw(4) << " Kode Guru / Karyawan " << setw(4) << " | " << setw(4) << " Nama Guru / Karyawan " << setw(4) << " | " << setw(4)  << " Umur Guru / Karyawan " << setw(4) << " | " << endl;
  
  for (i = 0; i < jguru; i++)
  {
    cout << "+-----------------------------------------------------+" << endl;
    cout << " | " << setw(4) << gurukode[i] << setw(4) << " | " << setw(4) << gurunama[i] << setw(4) << " | " << setw(4) << guruumur[i] << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;

    // cout << "Kode Guru / Karyawan : " << gurukode[i] << endl;
    // cout << "Nama Guru / Karyawan : " << gurunama[i] << endl;
    // cout << "Umur Guru / Karyawan : " << guruumur[i] << endl;

    // cout << "---------------------------------------------" << endl;
  }
  
  halamanuser();
}

//Deklarasi void descending pada class manajemen
//untuk mengurutkan data guru secara descending
void Manajemen::descending()
{
   for (i = 0; i < jguru; i++)
  {
    for (j = i + 1; j < jguru; j++)
    {
      if (gurukode[i] < gurukode[j])
      {
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
  cout << " | " << setw(4) << " Kode Guru / Karyawan " << setw(4) << " | " << setw(4) << " Nama Guru / Karyawan " << setw(4) << " | " << setw(4)  << " Umur Guru / Karyawan " << setw(4) << " | " << endl;
  
  for (i = 0; i < jguru; i++)
  {
    cout << "+-----------------------------------------------------+" << endl;
    cout << " | " << setw(4) << gurukode[i] << setw(4) << " | " << setw(4) << gurunama[i] << setw(4) << " | " << setw(4) << guruumur[i] << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;

    // cout << "Kode Guru / Karyawan : " << gurukode[i] << endl;
    // cout << "Nama Guru / Karyawan : " << gurunama[i] << endl;
    // cout << "Umur Guru / Karyawan : " << guruumur[i] << endl;

    // cout << "---------------------------------------------" << endl;
  }
  
  halamanuser();
}

//Deklarasi void menu_lks pada class manajemen
//untuk menampilkan menu lks
void Manajemen::menu_lks()
{
lks:
  do
  {
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
    cout << "[Catatan : LKS wajib (B,Indonesia, B,Inggris, Matematika, IPA, ""Sejarah, Ekonomi)]"<< endl;
    
    cout << "pilihan menu : ";
    cin >> pilihmenulks;
    cout << endl;
    
    switch (pilihmenulks)
    {
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

//Deklarasi void tambah_depan_lks pada class manajemen
//untuk menambahkan data lks di depan daftar
void Manajemen::tambah_depan_lks()
{
  baruLKS = new lks;
  baruLKS->next = NULL;
  baruLKS->prev = NULL;
  
  cout << "Nama LKS     : ";
  cin >> baruLKS->namaLKS;
  cout << "Penerbit LKS : ";
  cin >> baruLKS->penerbit;
  cout << "Jumlah beli  : ";
  cin >> baruLKS->jumlah;

  if (awalLKS == NULL)
  {
    awalLKS = akhirLKS = baruLKS;

  } else
  {
    baruLKS->next = awalLKS;
    awalLKS->prev = baruLKS;
    awalLKS = baruLKS;
  }
  
  tampil_lks();
  menu_lks();
}

//Deklarasi void tambah_belakang_lks pada class manajemen
//untuk menambahkan data lks di belakang daftar
void Manajemen::tambah_belakang_lks()
{
  baruLKS = new lks;
  baruLKS->next = NULL;
  baruLKS->prev = NULL;
  
  cout << "Nama LKS     : ";
  cin >> baruLKS->namaLKS;
  cout << "Penerbit LKS : ";
  cin >> baruLKS->penerbit;
  cout << "Jumlah beli  : ";
  cin >> baruLKS->jumlah;

  if (awalLKS == NULL)
  {
    awalLKS = akhirLKS = baruLKS;

  } else {
    akhirLKS->next = baruLKS;
    baruLKS->prev = akhirLKS;
    akhirLKS = baruLKS;
  }
  
  tampil_lks();
  menu_lks();
}

//Deklarasi void hapus_depan_lks pada class manajemen
//untuk menghapus data lks di depan daftar
void Manajemen::hapus_depan_lks()
{
  if (awalLKS->next == NULL)
  {
    awalLKS = akhirLKS = NULL;
    cout << "Data sudah kosong" << endl << endl;
  } else
  {
    hapusLKS = awalLKS;
    awalLKS = awalLKS->next;
    awalLKS->prev = NULL;
    delete hapusLKS;
  }
  tampil_lks();
  menu_lks();
}

//Deklarasi void tampil_lks pada class manajemen
//untuk menampilkan daftar data lks serta mencetak pada file .txt
void Manajemen::tampil_lks()
{
  ofstream datalks;
  datalks.open("daftarLKS.txt");
  bantuLKS = awalLKS;
  datalks << "+-----------------------------------------------------+" << endl;
  datalks << " | " << setw(4) << " Nama LKS " << setw(4) << " | " << setw(4)  << " Penerbit " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  datalks << "+-----------------------------------------------------+" << endl;
  
  cout << " | " << setw(4) << " Nama LKS " << setw(4) << " | " << setw(4) << " Penerbit " << setw(4) << " | " << setw(4) << " Jumlah beli " << setw(4) << " | " << endl;
  cout << "+-----------------------------------------------------+" << endl;
  
  while (bantuLKS != NULL)
  {
    cout << " | " << setw(4) << bantuLKS->namaLKS << setw(4) << " | " << setw(4) << bantuLKS->penerbit << setw(4) << " | " << setw(4) << bantuLKS->jumlah << setw(4) << " | " << endl;
    cout << "+-----------------------------------------------------+" << endl;
    
    datalks << " | " << setw(4) << bantuLKS->namaLKS << setw(4) << " | " << setw(4) << bantuLKS->penerbit << setw(4) << " | " << setw(4) << bantuLKS->jumlah << setw(4) << " | " << endl;
    datalks << "+-----------------------------------------------------+" << endl;
    bantuLKS = bantuLKS->next;
  }
  
  datalks.close();
  menu_lks();
}

//Deklarasi void hitung_lks pada class manajemen
//untuk menghitung pengeluarandana sekolah dari pembelian lks
void Manajemen::hitung_lks()
{
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
  total_harga_lks = (hargabindo * jmlhbindo) + (hargabingg * jmlhbingg) + (hargamatematika * jmlhmatematika) + (hargaipa * jmlhipa) + (hargaips * jmlhips) + (hargalain * jmlhlain);
  
  cout << "Total biaya pembelian LKS : " << total_harga_lks << endl;
  menu_lks();
}

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
    case 9:
      menu();
      break;
  
		default:
			cout << "Pilihan tidak tersedia" << endl;
			break;
		}
    
	} while (pilihanstack != 10);
}

//Deklarasi void iniLKS pada class manajemen
void Manajemen::initLKS()
{
    Tumpukan.top = -1;
}

//Deklarasi bool isEmptyLKS pada class manajemen
bool Manajemen::isEmptyLKS()
{
    return Tumpukan.top == -1;
}

//Deklarasi bool isFullLKS pada class manajemen
bool Manajemen::isFullLKS()
{
    return Tumpukan.top == MAX -1;
}

//Deklarasi void pushLKS pada class manajemen
//untuk menambahkan data pengambil LKS
void Manajemen::pushLKS()
{
    if (isFullLKS()) {
        cout<<"==================================="<<endl;
        cout << "\tAntrian Penuh !!!" << endl;
        cout<<"==================================="<<endl;
    } else {
        Tumpukan.top++;
        cout << "\nMasukkan data (kode siswa pengambil LKS) = ";
        cin >> Tumpukan.dataStack[Tumpukan.top];
        cout << "\n--- Kode '" << Tumpukan.dataStack[Tumpukan.top] << "' masuk ke Antrian (Stack) ---" << endl;
    }
}

//Deklarasi void popLKS pada class manajemen
//untuk menghapus data pengambil LKS
void Manajemen::popLKS()
{
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
void Manajemen::printStackLKS()
{
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
    if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada !!";
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


//Deklarasi menu_SPP pada class manajemen
//untuk membuat menu pada fitur antrian pembayaran SPP
void Manajemen::menu_SPP()
{
  menu:
  cout << "=======================================" << endl;
  cout << "||    MENU ANTRIAN PEMBAYARAN SPP    ||" << endl;
  cout << "||              SEKOLAH              ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Mendaftar Antrian (insert)     ||" << endl;
  cout << "|| 2) Keluar Antrian (Delete)        ||" << endl;
  cout << "|| 3) Tampilkan Antrian              ||" << endl;
  cout << "|| 4) Keluar program                 ||" << endl;
  cout << "=======================================" << endl;
  do{
    cout << "Masukkan pilihan : ";
    cin >> chSPP;
    
    switch(chSPP)
    {
      case 1:
        cout << "Masukkan Nama Siswa : ";
        cin >> aSPP;
        
        cout << "Masukkan Nomor Induk Siswa : ";
        cin >> valSPP;
        
        cout << endl;
        cout << "- Nomor Induk " << valSPP << " masuk ke dalam antrian -" << endl;
        insertCQSPP(valSPP);
        insertCQ_StringSPP(aSPP);
        goto menu;
        break;
      
      case 2:
        deleteCQSPP();
        goto menu;
        break;
      
      case 3:
        displayCQSPP();
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
    }while(chSPP!= 4);
}

//Deklarasi insertCQSPP pada class manajemen
//untuk memasukkan data antrian
void Manajemen::insertCQSPP(int valSPP)
{
  if((frontSPP == 0 && rearSPP == nSPP-1) || (frontSPP == rearSPP+1))
  {
    cout << "Antrian Penuh " << endl;
    return;
  }
  if(frontSPP == -1)
  {
    frontSPP = 0;
    rearSPP = 0;
  }else
  {
    if(rearSPP == nSPP -1)
    {
      rearSPP = 0;
    }else
    {
      rearSPP = rearSPP + 1;
    }
  }
  cqueueSPP[rearSPP] = valSPP;
  
  cout << endl;
}

//Deklarasi insertCQ_StringSPP pada class manajemen
//untuk memasukkan data  antrian berupa string
void Manajemen::insertCQ_StringSPP(string aSPP)
{
  if((front_StringSPP == 0 && rear_StringSPP == nSPP - 1) || (front_StringSPP == rear_StringSPP + 1)){
    cout << "Antrian Penuh " << endl;
    return;
  }
  if(front_StringSPP == -1)
  {
    front_StringSPP = 0;
    rear_StringSPP = 0;
  }else
  {
    if(rear_StringSPP == nSPP -1)
    {
      rear_StringSPP = 0;
    }else{
      rear_StringSPP = rear_StringSPP + 1;
    }
  }
  cqueue_StringSPP[rear_StringSPP] = aSPP;

  cout << endl;
}

//Deklarasi deleteCQSPP pada class manajemen
//untuk menghapus data antrian
void Manajemen::deleteCQSPP()
{
  if(frontSPP == -1)
  {
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueueSPP[frontSPP] << endl;

  if(frontSPP == rearSPP)
  {
    frontSPP = -1;
    rearSPP = -1;
  }else
  {
    if(frontSPP == nSPP -1)
    {
      frontSPP = 0;
    }else{
      frontSPP = frontSPP+ 1;
    }
  }
  cout << endl;
}

//Deklarasi deleteCQString pada class manajemen
//untuk menghapus data antrian berupa string
void Manajemen::deleteCQStringSPP(){
  if(front_StringSPP == -1){
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Siswa dengan Nomor Induk " << cqueueSPP[frontSPP] << " Keluar Antrian " << endl;

  if(front_StringSPP == rear_StringSPP){
    front_StringSPP = -1;
    rear_StringSPP = -1;
  }else{
    if(front_StringSPP == nSPP -1){
      front_StringSPP = 0;
    }else{
      front_StringSPP = front_StringSPP + 1;
    }
  }
  cout << endl;
}

//Deklarasi displayCQSPP pada class manajemen
//untuk menampilkan data data antrian yang tersedia
//serta untuk memasukkan data pada file .txt
void Manajemen::displayCQSPP()
{
  int fSPP = frontSPP, rSPP = rearSPP;
  int ffSPP = front_StringSPP, rrSPP = rear_StringSPP;
  ofstream Antre_SPP;
  Antre_SPP.open("Antre_SPP.txt");
  
  if(frontSPP == -1)
  {
    cout << endl;
    cout << "Antrian Kosong" << endl << endl;
    Antre_SPP << "Antrian Kosong" << endl;
    return;
  }
  
  cout << endl;
  cout << "Antrian yang Ada :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama Siswa " << setw(12) << " | " << setw(12) << " Nomor Induk " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_SPP << "Antrian yang Ada :" << endl;
  Antre_SPP << "------------------------------------------------------------------------------------------------" << endl;
  Antre_SPP << "| " << setw(12) << "Nama Siswa " << setw(12) << " | " << setw(12) << " Nomor Induk " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_SPP << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fSPP <= rSPP)
  {
    while(fSPP <= rSPP)
    {
      cout <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP)
      {
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        cout <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_SPP <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP)
      {
        Antre_SPP <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        Antre_SPP <<setw(12) << " Antrian paling belakang  |" << endl;
      }else
      {
       Antre_SPP << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SPP << "------------------------------------------------------------------------------------------------" << endl;
      fSPP++;
    }
  }else
  {
    while(fSPP <= nSPP - 1)
    {
      cout <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP)
      {
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        cout <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SPP <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP){
        Antre_SPP <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        Antre_SPP <<setw(12) << " Antrian paling belakang |" << endl;
      }else
      {
        Antre_SPP << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SPP << "------------------------------------------------------------------------------------------------" << endl;
      fSPP++;
    }
    fSPP = 0;
    while(fSPP <= rSPP)
    {
      cout <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP)
      {
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else
      {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SPP <<"| "<< setw(12) << cqueue_StringSPP[fSPP] << setw(12) << " | " << setw(12) << cqueueSPP[fSPP] << setw(12) << " |" << setw(12) << fSPP << setw(12) << " | ";
      if(fSPP == frontSPP)
      {
        Antre_SPP <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSPP == rearSPP)
      {
        Antre_SPP <<setw(12) << " Antrian paling belakang |"<< endl;
      }else
      {
        Antre_SPP << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SPP << "------------------------------------------------------------------------------------------------" << endl;
      fSPP++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_SPP.close();
}


//Deklarasi menuFOTO pada class manajemen
//untuk membuat menu pilihan pada fitur priority queue pelayanan fotocopy sekolah
void Manajemen::menuFOTO()
{
  cout <<"===============================================" << endl;
  cout <<"||           MENU ANTRIAN PRIORITAS          ||" << endl;
  cout <<"||         PELAYANAN FOTOCOPY SEKOLAH        ||" << endl;
  cout <<"||-------------------------------------------||" << endl;
  cout <<"|| 1) Tambah antrian                         ||" << endl;
  cout <<"|| 2) Hapus antrian                          ||" << endl;
  cout <<"|| 3) Tampilkan antrian                      ||" << endl;
  cout <<"|| 4) Kembali                                ||" << endl;
  cout <<"===============================================" << endl;
  cout << "Pilih : ";
  cin >> pil_menuFOTO;

  switch(pil_menuFOTO)
  {
    case 1:
      insertFOTO(prioFOTO, itemFOTO);
      menuFOTO();
    break;
    
    case 2:
      popFOTO();
      menuFOTO();
    break;
    
    case 3:
      displayFOTO();
      menuFOTO();
    break;
    
    case 4:
      menu();
    break;
  }
}

//Deklarasi insertFOTO pada class manajemen
//untuk memasukkan data pilihan untuk menentukan prioritas
void Manajemen::insertFOTO(int prioFOTO, string itemFOTO)
{
    cout <<"===============================================" << endl;
    cout <<"||             PILIH KATEGORI (1)            ||" << endl;
    cout <<"||-------------------------------------------||" << endl;
    cout <<"|| 1) Kurang dari 10 lembar                  ||" << endl;
    cout <<"|| 2) Antara 11 - 20 lembar                  ||" << endl;
    cout <<"|| 3) Lebih dari 20 lembar                   ||" << endl;
    cout <<"===============================================" << endl;
    cout << "Pilih Kategori: ";
    cin >> prioFOTO;
  
    cout << "Atas nama : ";
    cin >> itemFOTO;
  
    cout << endl;
    cout << " - " << itemFOTO << " Masuk dalam antrian -" << endl;
    cout << endl;
  
		NodePQ *newNodeFOTO = new NodePQ(prioFOTO, itemFOTO);
		NodePQ *currFOTO = firstFOTO;
		NodePQ *prevFOTO = currFOTO;
		if(currFOTO == NULL)
    {
			firstFOTO = lastFOTO = newNodeFOTO;
			delete currFOTO;
			delete prevFOTO;
		}
		else
    {
			while(currFOTO != NULL && currFOTO->PriorityFOTO <= prioFOTO)
      {
				prevFOTO = currFOTO;
				currFOTO = currFOTO->nextFOTO;
			}
			prevFOTO->nextFOTO = newNodeFOTO;
			newNodeFOTO->previousFOTO = prevFOTO;
			newNodeFOTO->nextFOTO = currFOTO;
		}
	}

//Deklarasi popFOTO pada class manajemen
//untuk menghapus data antrian sesuai uturan tertentu
void Manajemen::popFOTO()
{
		NodePQ *tmpFOTO = firstFOTO;
		while(tmpFOTO->nextFOTO->nextFOTO != NULL)
    {
			tmpFOTO = tmpFOTO->nextFOTO;
		}
		tmpFOTO->nextFOTO = NULL;
		lastFOTO = tmpFOTO;
  
	}

//Deklarasi displayFOTO pada class manajemen
//untuk menampilkan data antrian prioritas yang tersedia
void Manajemen::displayFOTO()
{
  ofstream data_foto;
  data_foto.open("Antrian_Fotocopy.txt");
	NodePQ *tmpFOTO = firstFOTO;
  
  cout << "========================================================================================" << endl;
  cout << "|| " << setw(12) << "Nomor Kategori Antrian " << setw(12) << "|| " << setw(12) << "Atas Nama " << setw(12) << "|| " << setw(12) << "Jumlah lembar " << setw(12) << "||" << endl;
  cout << "========================================================================================" << endl;
  
  data_foto << "========================================================================================" << endl;
  data_foto << "|| " << setw(12) << "Nomor Kategori Antrian " << setw(12) << "|| " << setw(12) << "Atas Nama " << setw(12) << "|| " << setw(12) << "Jumlah lembar " << setw(12) << "||" << endl;
  data_foto << "========================================================================================" << endl;

if(tmpFOTO == NULL)
{
    cout << "Tidak ada antrian" << endl;
    data_foto << "Tidak ada antrian" << endl;
  }
  
	while(tmpFOTO != NULL)
  {
    cout << "|| " << setw(12) << tmpFOTO->PriorityFOTO << setw(12) << "|| " << setw(12) << tmpFOTO->ItemFOTO << setw(12) << "|| " << setw(12) << tmpFOTO->StatusFOTO << setw(12) << "||" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    data_foto << "|| " << setw(12) << tmpFOTO->PriorityFOTO << setw(12) << "|| " << setw(12) << tmpFOTO->ItemFOTO << setw(12) << "|| " << setw(12) << tmpFOTO->StatusFOTO << setw(12) << "||" << endl;
    data_foto << "--------------------------------------------------------------------------------------" << endl;
		tmpFOTO = tmpFOTO->nextFOTO;
	}
  cout << "========================================================================================" << endl;
  data_foto << "========================================================================================" << endl;
  data_foto.close();
  cout << endl;
}

//Deklarasi menuPengunungPerpus pada class manajemen
//untuk membuat menu pilihan pada fitur pendataan pengunjung perpustakaan
void Manajemen::menuPengunjungPerpus()
{
  do
      {
        int pilKUNJUNGAN, nimKUNJUNGAN;// c;
        string namaKUNJUNGAN, kelasKUNJUNGAN;
        cout <<"===============================================" << endl;
        cout <<"||              DAFTAR PENDATAAN             ||" << endl;
        cout <<"||          PENGUNJUNG PERPUSTAKAAN          ||" << endl;
        cout <<"||-------------------------------------------||" << endl;
        cout <<"|| 1) Tambah data                            ||" << endl;
        cout <<"|| 2) Lihat kunjungan pre-order              ||" << endl;
        cout <<"|| 3) Lihat kunjungan in-order               ||" << endl;
        cout <<"|| 4) Lihat kunjungan post-order             ||" << endl;
        cout <<"|| 5) keluar                                 ||" << endl;
        cout <<"===============================================" << endl;
            cout << "Pilihan : ";
            cin >>  pilKUNJUNGAN;
        
            switch(pilKUNJUNGAN)
            {
            //jika pil bernilai 1
            case 1 :
                  cout << endl;
                  cout << "INPUT : " << endl;
                  cout << "-----------------" << endl;
              
                  cout << "NIM : ";
                 cin >> nimKUNJUNGAN;
              
                  cout << "Nama : ";
                  cin >> namaKUNJUNGAN;
              
                  cout << "Kelas : ";
                  cin >>kelasKUNJUNGAN;
              
                  //panggil fungsi untuk menambah node yang berisi data pada tree
                  tambah_KUNJUNGAN(&pohonKUNJUNGAN, nimKUNJUNGAN, namaKUNJUNGAN, kelasKUNJUNGAN);
                  break;
                 
            //jika pil bernilai 2
            case 2 :
                  cout << "OUTPUT PRE ORDER : " << endl;
                  cout << "------------------" << endl;
              
                cout<<"=============================================================="<<endl;
                  cout<<"|| " <<setw(10)<< "NIM " <<setw(10)<< "| "<<setw(10)<<"Nama "<<setw(10)<<"| "<<setw(10)<<"Kelas "<<setw(10)<< "||"<< endl;
                cout<<"||==========================================================||"<<endl;
                  if(pohonKUNJUNGAN!=NULL)
                       //panggil fungsi untuk mencetak data secara preOrder
                        preOrder_KUNJUNGAN(pohonKUNJUNGAN);
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
                  if(pohonKUNJUNGAN!=NULL)
                       //panggil fungsi untuk mencetak data secara inOrder
                        inOrder_KUNJUNGAN(pohonKUNJUNGAN);
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
                  if(pohonKUNJUNGAN!=NULL)
                       //panggil fungsi untuk mencetak data secara postOrder
                        postOrder_KUNJUNGAN(pohonKUNJUNGAN);
                  else
                        cout << "Masih kosong!" << endl;
              cout<<"=============================================================="<<endl;
                  break;
            }
      }while(pilKUNJUNGAN != 5); //akan diulang jika input tidak samadengan 5
}

//Deklarasi tambah_KUNJUNGAN pada class manajemen
//fungsi untuk menambahkan node baru
void Manajemen::tambah_KUNJUNGAN(NodeKUNJUNGAN **rootKUNJUNGAN, int nimbaruKUNJUNGAN, string namabaruKUNJUNGAN, string kelasbaruKUNJUNGAN)
{
      //jika root masih kosong
      if((*rootKUNJUNGAN) == NULL)
      {
            //pembuatan node baru
            NodeKUNJUNGAN *baruKUNJUNGAN;
            //pengalokasian memori dari node yang telah dibuat
            baruKUNJUNGAN = new NodeKUNJUNGAN;
            //inisialisasi awal node yang baru dibuat
            baruKUNJUNGAN->nimKUNJUNGAN = nimbaruKUNJUNGAN;
            baruKUNJUNGAN->namaKUNJUNGAN = namabaruKUNJUNGAN;
            baruKUNJUNGAN->kelasKUNJUNGAN = kelasbaruKUNJUNGAN;
            baruKUNJUNGAN->kiriKUNJUNGAN = NULL;
            baruKUNJUNGAN->kananKUNJUNGAN = NULL;
            (*rootKUNJUNGAN) = baruKUNJUNGAN;
            (*rootKUNJUNGAN)->kiriKUNJUNGAN = NULL;
            (*rootKUNJUNGAN)->kananKUNJUNGAN = NULL;
           cout << "Data bertambah!" << endl;
      }
     //jika data yang akan dimasukkan lebih kecil daripada elemen root, maka akan diletakkan di node sebelah kiri.
      else if(nimbaruKUNJUNGAN<(*rootKUNJUNGAN)->nimKUNJUNGAN)
            tambah_KUNJUNGAN(&(*rootKUNJUNGAN)->kiriKUNJUNGAN, nimbaruKUNJUNGAN, namabaruKUNJUNGAN, kelasbaruKUNJUNGAN);
     //jika data yang akan dimasukkan lebih besar daripada elemen root, maka akan diletakkan di node sebelah kanan
      else if(nimbaruKUNJUNGAN>(*rootKUNJUNGAN)->nimKUNJUNGAN)
            tambah_KUNJUNGAN(&(*rootKUNJUNGAN)->kananKUNJUNGAN, nimbaruKUNJUNGAN, namabaruKUNJUNGAN, kelasbaruKUNJUNGAN);
     //jika saat dicek data yang akan dimasukkan memiliki nilai yang sama dengan data pada root
      else if(nimbaruKUNJUNGAN == (*rootKUNJUNGAN)->nimKUNJUNGAN)
            cout << "Data sudah ada!" << endl;
}

//Deklarasi preOrder_KUNJUNGAN pada class manajemen
//fungsi yang digunakan untuk mencetak tree secara preOrder
void Manajemen::preOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN)
{ 
      if(rootKUNJUNGAN != NULL)
      {
        cout<<"|| " <<setw(10)<< rootKUNJUNGAN->nimKUNJUNGAN <<setw(10)<< "| "<<setw(10)<<rootKUNJUNGAN->namaKUNJUNGAN<<setw(10)<<"| "<<setw(10)<<rootKUNJUNGAN->kelasKUNJUNGAN <<setw(10)<< "||"<< endl;
            preOrder_KUNJUNGAN(rootKUNJUNGAN->kiriKUNJUNGAN);
            preOrder_KUNJUNGAN(rootKUNJUNGAN->kananKUNJUNGAN);
      }
}

//Deklarasi inOrder_KUNJUNGAN
//fungsi yang digunakan untuk mencetak tree secara inOrder
void Manajemen::inOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN)
{
  
      if(rootKUNJUNGAN != NULL)
      {
            inOrder_KUNJUNGAN(rootKUNJUNGAN->kiriKUNJUNGAN);
            cout<<"|| " <<setw(10)<< rootKUNJUNGAN->nimKUNJUNGAN <<setw(10)<< "| "<<setw(10)<<rootKUNJUNGAN->namaKUNJUNGAN<<setw(10)<<"| "<<setw(10)<<rootKUNJUNGAN->kelasKUNJUNGAN <<setw(10)<< "||"<< endl;
            inOrder_KUNJUNGAN(rootKUNJUNGAN->kananKUNJUNGAN);
      }
}

//Deklarasi posOrder_KUNJUNGAN pada class manajemen
//fungsi yang digunakan untuk mencetak tree secara postOrder
void Manajemen::postOrder_KUNJUNGAN(NodeKUNJUNGAN *rootKUNJUNGAN)
{
  
      if(rootKUNJUNGAN != NULL){
            postOrder_KUNJUNGAN(rootKUNJUNGAN->kiriKUNJUNGAN);
            postOrder_KUNJUNGAN(rootKUNJUNGAN->kananKUNJUNGAN);
            cout<<"|| " <<setw(10)<< rootKUNJUNGAN->nimKUNJUNGAN <<setw(10)<< "| "<<setw(10)<<rootKUNJUNGAN->namaKUNJUNGAN<<setw(10)<<"| "<<setw(10)<<rootKUNJUNGAN->kelasKUNJUNGAN <<setw(10)<< "||"<< endl;
            //inOrder(root->kanan);
      }
}

void Manajemen::menu_utamaPerencanaan(){
  rencana:
  cout << "===============================================" << endl;
  cout << "||             FITUR PERENCANAAN             ||" << endl;
  cout << "||        PEMBELIAN FASILITAS SEKOLAH        ||" << endl;
  cout << "||-------------------------------------------||" << endl;
  cout << "|| 1) Perencanaan Pembelian Fasilitas Kelas  ||" << endl;
  cout << "|| 2) Perancanaan Fasilitas Ruang Olahraga   ||" << endl;
  cout << "|| 3) perencanaan Fasilitas Ruang Seni       ||" << endl;
  cout << "|| 4) Perencanaan Fasilitas Ruang Guru       ||" << endl;
  cout << "|| 5) Perencanaan Fasilitas R. Laboratotium  ||" << endl;
  cout << "|| 6) keluar                                 ||" << endl;
  cout << "===============================================" << endl;

  cout << "Pilih : ";
  cin >> rencanaPerencanaan;

  if(rencanaPerencanaan == 1){
    menu_PerencanaanKelas();
    
  }else if(rencanaPerencanaan == 2){
    menu_PerencanaanOLAHRAGA();
    
  }else if(rencanaPerencanaan == 3){
    menu_PerencanaanSENI();
    
  }else if(rencanaPerencanaan == 4){
    menu_PerencanaanGURU();
  }else if(rencanaPerencanaan == 5){
    menu_PerencanaanLAB();
  }else{
    cout << "program berhenti" << endl;
    menu();
  }
}

//Deklarasi menu_PerencanaanKelas pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanKelas(){
  nodeptrPKELAS rootPKELAS = NULL, root1PKELAS = NULL,minPKELAS, maxPKELAS;//,flag;
  int aPKELAS,choicePKELAS,findelePKELAS, delete_aPKELAS;
  string delete_bPKELAS, delete_cPKELAS;
  char chPKELAS = 'y';
  string bPKELAS, cPKELAS;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||             PEMBELIAN FASILITAS KELAS             ||"<<endl;
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
        cin>>choicePKELAS;

        cout << endl;

        switch(choicePKELAS)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bPKELAS;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cPKELAS;
            cout<<"Masukkan jumlah barang : ";
            cin>>aPKELAS;
            insertPKELAS(aPKELAS, bPKELAS, cPKELAS, rootPKELAS);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootPKELAS !=NULL)
            {
                cout << endl;
                minPKELAS=findminPKELAS(rootPKELAS);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minPKELAS->elementPKELAS<<endl;
            }
            break;
          
        case 3:
            if (rootPKELAS !=NULL)
            {
                cout << endl;
                maxPKELAS=findmaxPKELAS(rootPKELAS);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxPKELAS->elementPKELAS<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findelePKELAS;
            if (rootPKELAS != NULL)
            {
                findPKELAS(findelePKELAS,rootPKELAS);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bPKELAS;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cPKELAS;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aPKELAS;
            delPKELAS(delete_aPKELAS, delete_bPKELAS, delete_cPKELAS, rootPKELAS);
            inorderPKELAS(rootPKELAS);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderPKELAS(rootPKELAS);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderPKELAS(rootPKELAS);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderPKELAS(rootPKELAS);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightPKELAS(rootPKELAS)<< " ||"<<endl;
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
    while(choicePKELAS != 10);
}

//Deklasrasi insertPKELAS pada class manajemen
// Inserting a node
void Manajemen::insertPKELAS(int xPKELAS, string yPKELAS, string zPKELAS, nodeptrPKELAS &pPKELAS)
{
    if (pPKELAS == NULL)
    {
        pPKELAS = new nodePKELAS;
        pPKELAS->elementPKELAS = xPKELAS;
        pPKELAS->element_bPKELAS = yPKELAS;
        pPKELAS->element_cPKELAS = zPKELAS;
        pPKELAS->leftPKELAS = NULL;
        pPKELAS->rightPKELAS = NULL;
        pPKELAS->heightPKELAS = 0;
        if (pPKELAS == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xPKELAS < pPKELAS->elementPKELAS)
        {
            insertPKELAS(xPKELAS, yPKELAS, zPKELAS, pPKELAS->leftPKELAS);
            if ((bsheightPKELAS(pPKELAS->leftPKELAS) - bsheightPKELAS(pPKELAS->rightPKELAS)) == 2)
            {
                if (xPKELAS < pPKELAS->leftPKELAS->elementPKELAS)
                {
                    pPKELAS = srlPKELAS(pPKELAS);
                }
                else
                {
                    pPKELAS = drlPKELAS(pPKELAS);
                }
            }
        }
        else if (xPKELAS > pPKELAS->elementPKELAS)
        {
            insertPKELAS(xPKELAS, yPKELAS, zPKELAS, pPKELAS->rightPKELAS);
            if ((bsheightPKELAS(pPKELAS->rightPKELAS) - bsheightPKELAS(pPKELAS->leftPKELAS)) == 2)
            {
                if (xPKELAS > pPKELAS->rightPKELAS->elementPKELAS)
                {
                    pPKELAS = srrPKELAS(pPKELAS);
                }
                else
                {
                    pPKELAS = drrPKELAS(pPKELAS);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mPKELAS, nPKELAS, dPKELAS;
    mPKELAS = bsheightPKELAS(pPKELAS->leftPKELAS);
    nPKELAS = bsheightPKELAS(pPKELAS->rightPKELAS);
    dPKELAS = maxPKELAS(mPKELAS, nPKELAS);
    pPKELAS->heightPKELAS = dPKELAS + 1;
}

//Deklasrasi FinminPKELAS pada class manajemen
// Finding the Smallest
nodeptrPKELAS Manajemen::findminPKELAS(nodeptrPKELAS pPKELAS)
{
    if (pPKELAS == NULL)
    {
        cout<<"Data kosong" << endl;
        return pPKELAS;
    }
    else
    {
        while(pPKELAS->leftPKELAS !=NULL)
        {
            pPKELAS = pPKELAS->leftPKELAS;
            //return p;
        }
        return pPKELAS;
    }
}

//Deklasrasi finmaxPKELAS pada class manajemen
// Finding the Largest node
nodeptrPKELAS Manajemen::findmaxPKELAS(nodeptrPKELAS pPKELAS)
{
    if (pPKELAS == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pPKELAS;
    }
    else
    {
        while(pPKELAS->rightPKELAS !=NULL)
        {
            pPKELAS = pPKELAS->rightPKELAS;
            //return p;
        }
        return pPKELAS;
    }
}

//Deklasrasi findPKELAS pada class manajemen
// Finding an element
void Manajemen::findPKELAS(int xPKELAS,nodeptrPKELAS &pPKELAS)
{
    if (pPKELAS == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xPKELAS < pPKELAS->elementPKELAS)
        {
            findPKELAS(xPKELAS, pPKELAS->leftPKELAS);
        }
        else
        {
            if (xPKELAS > pPKELAS->elementPKELAS)
            {
                findPKELAS(xPKELAS, pPKELAS->rightPKELAS);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyPKELAS pada class manajemen
// Copy a tree
void Manajemen::copyPKELAS(nodeptrPKELAS &pPKELAS,nodeptrPKELAS &p1PKELAS)
{
    makeemptyPKELAS(p1PKELAS);
    p1PKELAS = nodecopyPKELAS(pPKELAS);
}

//Deklasrasi makeempyuPKELAS pada class manajemen
// Make a tree empty
void Manajemen::makeemptyPKELAS(nodeptrPKELAS &pPKELAS)
{
    nodeptrPKELAS dPKELAS;
    if (pPKELAS != NULL)
    {
        makeemptyPKELAS(pPKELAS->leftPKELAS);
        makeemptyPKELAS(pPKELAS->rightPKELAS);
        dPKELAS = pPKELAS;
        free(dPKELAS);
        pPKELAS = NULL;
    }
}

//Deklasrasi nodecopyPKELAS pada class manajemen
// Copy the nodes
nodeptrPKELAS Manajemen::nodecopyPKELAS(nodeptrPKELAS &pPKELAS)
{
    nodeptrPKELAS tempPKELAS;
    if (pPKELAS == NULL)
    {
        return pPKELAS;
    }
    else
    {
        tempPKELAS = new nodePKELAS;
        tempPKELAS->elementPKELAS = pPKELAS->elementPKELAS;
        tempPKELAS->leftPKELAS = nodecopyPKELAS(pPKELAS->leftPKELAS);
        tempPKELAS->rightPKELAS = nodecopyPKELAS(pPKELAS->rightPKELAS);
        return tempPKELAS;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delPKELAS(int xPKELAS, string yPKELAS, string zPKELAS, nodeptrPKELAS &pPKELAS)
{
    nodeptrPKELAS dPKELAS;
    if (pPKELAS == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xPKELAS < pPKELAS->elementPKELAS)
    {
        delPKELAS(xPKELAS, yPKELAS, zPKELAS, pPKELAS->leftPKELAS);
    }
    else if (xPKELAS > pPKELAS->elementPKELAS)
    {
        delPKELAS(xPKELAS, yPKELAS, zPKELAS, pPKELAS->rightPKELAS);
    }
    else if ((pPKELAS->leftPKELAS == NULL) && (pPKELAS->rightPKELAS == NULL))
    {
        dPKELAS = pPKELAS;
        free(dPKELAS);
        pPKELAS = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pPKELAS->leftPKELAS == NULL)
    {
        dPKELAS = pPKELAS;
        free(dPKELAS);
        pPKELAS = pPKELAS->rightPKELAS;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pPKELAS->rightPKELAS == NULL)
    {
        dPKELAS = pPKELAS;
        pPKELAS = pPKELAS->leftPKELAS;
        free(dPKELAS);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pPKELAS->elementPKELAS = deleteminPKELAS(pPKELAS->rightPKELAS);
    }
}

//Deklasrasi deleteminPKELAS pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminPKELAS(nodeptrPKELAS &pPKELAS)
{
    int cPKELAS;
    cout<<"inside deltemin\n"<<endl;
    if (pPKELAS->leftPKELAS == NULL)
    {
        cPKELAS = pPKELAS->elementPKELAS;
        pPKELAS = pPKELAS->rightPKELAS;
        return cPKELAS;
    }
    else
    {
        cPKELAS = deleteminPKELAS(pPKELAS->leftPKELAS);
        return cPKELAS;
    }
}

//Deklasrasi prorderPKELAS pada class manajemen
//untuk mencari preorder
void Manajemen::preorderPKELAS(nodeptrPKELAS pPKELAS)
{
    if (pPKELAS != NULL)
    {
      cout<<"|| " <<setw(10)<< pPKELAS->element_bPKELAS << setw(10) << "| " << setw(10)<<pPKELAS->element_cPKELAS << setw(10) << "| " <<setw(10)<< pPKELAS->elementPKELAS << setw(10) << "||"<< endl;
        preorderPKELAS(pPKELAS->leftPKELAS);
        preorderPKELAS(pPKELAS->rightPKELAS);
    }
}

//Deklasrasi inrderPKELAS pada class manajemen
// Inorder Printing
void Manajemen::inorderPKELAS(nodeptrPKELAS pPKELAS)
{
    if (pPKELAS != NULL)
    {
        inorderPKELAS(pPKELAS->leftPKELAS);
      
        cout<<"|| " <<setw(10)<< pPKELAS->element_bPKELAS << setw(10) << "| " << setw(10)<<pPKELAS->element_cPKELAS << setw(10) << "| " <<setw(10)<< pPKELAS->elementPKELAS << setw(10) << "||"<< endl;
      
        inorderPKELAS(pPKELAS->rightPKELAS);
    }
}

//Deklasrasi postorderPKELAS pada class manajemen
// PostOrder Printing
void Manajemen::postorderPKELAS(nodeptrPKELAS pPKELAS)
{
    if (pPKELAS != NULL)
    {
        postorderPKELAS(pPKELAS->leftPKELAS);
        postorderPKELAS(pPKELAS->rightPKELAS);
        
        cout<<"|| " <<setw(10)<< pPKELAS->element_bPKELAS << setw(10) << "| " << setw(10)<<pPKELAS->element_cPKELAS << setw(10) << "| " <<setw(10)<< pPKELAS->elementPKELAS << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macPKELAS pada class manajemen
//untuk mencari max
int Manajemen::maxPKELAS(int value1PKELAS, int value2PKELAS)
{
    return ((value1PKELAS > value2PKELAS) ? value1PKELAS : value2PKELAS);
}

//Deklasrasi bsheightPKELAS pada class manajemen
//untuk mencari hight
int Manajemen::bsheightPKELAS(nodeptrPKELAS pPKELAS)
{
    int tPKELAS;
    if (pPKELAS == NULL)
    {
        return -1;
    }
    else
    {
        tPKELAS = pPKELAS->heightPKELAS;
        return tPKELAS;
    }
}

//Deklasrasi srlPKELAS pada class manajemen
//untuk fungsi srl
nodeptrPKELAS Manajemen::srlPKELAS(nodeptrPKELAS &p1PKELAS)
{
    nodeptrPKELAS p2PKELAS;
    p2PKELAS = p1PKELAS->leftPKELAS;
    p1PKELAS->leftPKELAS = p2PKELAS->rightPKELAS;
    p2PKELAS->rightPKELAS = p1PKELAS;
    p1PKELAS->heightPKELAS = maxPKELAS(bsheightPKELAS(p1PKELAS->leftPKELAS), bsheightPKELAS(p1PKELAS->rightPKELAS)) + 1;
    p2PKELAS->heightPKELAS = maxPKELAS(bsheightPKELAS(p2PKELAS->leftPKELAS), p1PKELAS->heightPKELAS) + 1;
    return p2PKELAS;
}

//Deklasrasi srrPKELAS pada class manajemen
//untuk fungsi srr
nodeptrPKELAS Manajemen:: srrPKELAS(nodeptrPKELAS &p1PKELAS)
{
    nodeptrPKELAS p2PKELAS;
    p2PKELAS = p1PKELAS->rightPKELAS;
    p1PKELAS->rightPKELAS = p2PKELAS->leftPKELAS;
    p2PKELAS->leftPKELAS = p1PKELAS;
    p1PKELAS->heightPKELAS = maxPKELAS(bsheightPKELAS(p1PKELAS->leftPKELAS), bsheightPKELAS(p1PKELAS->rightPKELAS)) + 1;
    p2PKELAS->heightPKELAS = maxPKELAS(p1PKELAS->heightPKELAS, bsheightPKELAS(p2PKELAS->rightPKELAS)) + 1;
    return p2PKELAS;
}

//Deklasrasi drlPKELAS pada class manajemen
//untuk fungsi drl
nodeptrPKELAS Manajemen:: drlPKELAS(nodeptrPKELAS &p1PKELAS)
{
    p1PKELAS->leftPKELAS=srrPKELAS(p1PKELAS->leftPKELAS);
    return srlPKELAS(p1PKELAS);
}

//Deklasrasi drrPKELAS pada class manajemen
//untuk fungsi drr
nodeptrPKELAS Manajemen::drrPKELAS(nodeptrPKELAS &p1PKELAS)
{
    p1PKELAS->rightPKELAS = srlPKELAS(p1PKELAS->rightPKELAS);
    return srrPKELAS(p1PKELAS);
}

//Deklasrasi nonodesPKELAS pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesPKELAS(nodeptrPKELAS pPKELAS)
{
    int countPKELAS=0;
    if (pPKELAS!=NULL)
    {
        nonodesPKELAS(pPKELAS->leftPKELAS);
        nonodesPKELAS(pPKELAS->rightPKELAS);
        countPKELAS++;
    }
    return countPKELAS;
}


//Deklarasi menu_PerencanaanKelas pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanOLAHRAGA(){
  nodeptrOLAHRAGA rootOLAHRAGA = NULL, root1OLAHRAGA = NULL,minOLAHRAGA, maxOLAHRAGA;//,flag;
  int aOLAHRAGA,choiceOLAHRAGA,findeleOLAHRAGA, delete_aOLAHRAGA;
  string delete_bOLAHRAGA, delete_cOLAHRAGA;
  char chOLAHRAGA = 'y';
  string bOLAHRAGA, cOLAHRAGA;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||         PEMBELIAN FASILITAS RUANG OLAHRAGA        ||"<<endl;
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
        cin>>choiceOLAHRAGA;

        cout << endl;

        switch(choiceOLAHRAGA)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bOLAHRAGA;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cOLAHRAGA;
            cout<<"Masukkan jumlah barang : ";
            cin>>aOLAHRAGA;
            insertOLAHRAGA(aOLAHRAGA, bOLAHRAGA, cOLAHRAGA, rootOLAHRAGA);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootOLAHRAGA !=NULL)
            {
                cout << endl;
                minOLAHRAGA=findminOLAHRAGA(rootOLAHRAGA);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minOLAHRAGA->elementOLAHRAGA<<endl;
            }
            break;
          
        case 3:
            if (rootOLAHRAGA !=NULL)
            {
                cout << endl;
                maxOLAHRAGA=findmaxOLAHRAGA(rootOLAHRAGA);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxOLAHRAGA->elementOLAHRAGA<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleOLAHRAGA;
            if (rootOLAHRAGA != NULL)
            {
                findOLAHRAGA(findeleOLAHRAGA,rootOLAHRAGA);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bOLAHRAGA;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cOLAHRAGA;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aOLAHRAGA;
            delOLAHRAGA(delete_aOLAHRAGA, delete_bOLAHRAGA, delete_cOLAHRAGA, rootOLAHRAGA);
            inorderOLAHRAGA(rootOLAHRAGA);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderOLAHRAGA(rootOLAHRAGA);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderOLAHRAGA(rootOLAHRAGA);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderOLAHRAGA(rootOLAHRAGA);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightOLAHRAGA(rootOLAHRAGA)<< " ||"<<endl;
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
    while(choiceOLAHRAGA != 10);
}

//Deklasrasi insertOLAHRAGA pada class manajemen
// Inserting a node
void Manajemen::insertOLAHRAGA(int xOLAHRAGA, string yOLAHRAGA, string zOLAHRAGA, nodeptrOLAHRAGA &pOLAHRAGA)
{
    if (pOLAHRAGA == NULL)
    {
        pOLAHRAGA = new nodeOLAHRAGA;
        pOLAHRAGA->elementOLAHRAGA = xOLAHRAGA;
        pOLAHRAGA->element_bOLAHRAGA = yOLAHRAGA;
        pOLAHRAGA->element_cOLAHRAGA = zOLAHRAGA;
        pOLAHRAGA->leftOLAHRAGA = NULL;
        pOLAHRAGA->rightOLAHRAGA = NULL;
        pOLAHRAGA->heightOLAHRAGA = 0;
        if (pOLAHRAGA == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xOLAHRAGA < pOLAHRAGA->elementOLAHRAGA)
        {
            insertOLAHRAGA(xOLAHRAGA, yOLAHRAGA, zOLAHRAGA, pOLAHRAGA->leftOLAHRAGA);
            if ((bsheightOLAHRAGA(pOLAHRAGA->leftOLAHRAGA) - bsheightOLAHRAGA(pOLAHRAGA->rightOLAHRAGA)) == 2)
            {
                if (xOLAHRAGA < pOLAHRAGA->leftOLAHRAGA->elementOLAHRAGA)
                {
                    pOLAHRAGA = srlOLAHRAGA(pOLAHRAGA);
                }
                else
                {
                    pOLAHRAGA = drlOLAHRAGA(pOLAHRAGA);
                }
            }
        }
        else if (xOLAHRAGA > pOLAHRAGA->elementOLAHRAGA)
        {
            insertOLAHRAGA(xOLAHRAGA, yOLAHRAGA, zOLAHRAGA, pOLAHRAGA->rightOLAHRAGA);
            if ((bsheightOLAHRAGA(pOLAHRAGA->rightOLAHRAGA) - bsheightOLAHRAGA(pOLAHRAGA->leftOLAHRAGA)) == 2)
            {
                if (xOLAHRAGA > pOLAHRAGA->rightOLAHRAGA->elementOLAHRAGA)
                {
                    pOLAHRAGA = srrOLAHRAGA(pOLAHRAGA);
                }
                else
                {
                    pOLAHRAGA = drrOLAHRAGA(pOLAHRAGA);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mOLAHRAGA, nOLAHRAGA, dOLAHRAGA;
    mOLAHRAGA = bsheightOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
    nOLAHRAGA = bsheightOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
    dOLAHRAGA = maxOLAHRAGA(mOLAHRAGA, nOLAHRAGA);
    pOLAHRAGA->heightOLAHRAGA = dOLAHRAGA + 1;
}

//Deklasrasi FinminOLAHRAGA pada class manajemen
// Finding the Smallest
nodeptrOLAHRAGA Manajemen::findminOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    if (pOLAHRAGA == NULL)
    {
        cout<<"Data kosong" << endl;
        return pOLAHRAGA;
    }
    else
    {
        while(pOLAHRAGA->leftOLAHRAGA !=NULL)
        {
            pOLAHRAGA = pOLAHRAGA->leftOLAHRAGA;
            //return p;
        }
        return pOLAHRAGA;
    }
}

//Deklasrasi finmaxOLAHRAGA pada class manajemen
// Finding the Largest node
nodeptrOLAHRAGA Manajemen::findmaxOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    if (pOLAHRAGA == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pOLAHRAGA;
    }
    else
    {
        while(pOLAHRAGA->rightOLAHRAGA !=NULL)
        {
            pOLAHRAGA = pOLAHRAGA->rightOLAHRAGA;
            //return p;
        }
        return pOLAHRAGA;
    }
}

//Deklasrasi findOLAHRAGA pada class manajemen
// Finding an element
void Manajemen::findOLAHRAGA(int xOLAHRAGA,nodeptrOLAHRAGA &pOLAHRAGA)
{
    if (pOLAHRAGA == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xOLAHRAGA < pOLAHRAGA->elementOLAHRAGA)
        {
            findOLAHRAGA(xOLAHRAGA, pOLAHRAGA->leftOLAHRAGA);
        }
        else
        {
            if (xOLAHRAGA > pOLAHRAGA->elementOLAHRAGA)
            {
                findOLAHRAGA(xOLAHRAGA, pOLAHRAGA->rightOLAHRAGA);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyOLAHRAGA pada class manajemen
// Copy a tree
void Manajemen::copyOLAHRAGA(nodeptrOLAHRAGA &pOLAHRAGA,nodeptrOLAHRAGA &p1OLAHRAGA)
{
    makeemptyOLAHRAGA(p1OLAHRAGA);
    p1OLAHRAGA = nodecopyOLAHRAGA(pOLAHRAGA);
}

//Deklasrasi makeempyuOLAHRAGA pada class manajemen
// Make a tree empty
void Manajemen::makeemptyOLAHRAGA(nodeptrOLAHRAGA &pOLAHRAGA)
{
    nodeptrOLAHRAGA dOLAHRAGA;
    if (pOLAHRAGA != NULL)
    {
        makeemptyOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        makeemptyOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
        dOLAHRAGA = pOLAHRAGA;
        free(dOLAHRAGA);
        pOLAHRAGA = NULL;
    }
}

//Deklasrasi nodecopyOLAHRAGA pada class manajemen
// Copy the nodes
nodeptrOLAHRAGA Manajemen::nodecopyOLAHRAGA(nodeptrOLAHRAGA &pOLAHRAGA)
{
    nodeptrOLAHRAGA tempOLAHRAGA;
    if (pOLAHRAGA == NULL)
    {
        return pOLAHRAGA;
    }
    else
    {
        tempOLAHRAGA = new nodeOLAHRAGA;
        tempOLAHRAGA->elementOLAHRAGA = pOLAHRAGA->elementOLAHRAGA;
        tempOLAHRAGA->leftOLAHRAGA = nodecopyOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        tempOLAHRAGA->rightOLAHRAGA = nodecopyOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
        return tempOLAHRAGA;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delOLAHRAGA(int xOLAHRAGA, string yOLAHRAGA, string zOLAHRAGA, nodeptrOLAHRAGA &pOLAHRAGA)
{
    nodeptrOLAHRAGA dOLAHRAGA;
    if (pOLAHRAGA == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xOLAHRAGA < pOLAHRAGA->elementOLAHRAGA)
    {
        delOLAHRAGA(xOLAHRAGA, yOLAHRAGA, zOLAHRAGA, pOLAHRAGA->leftOLAHRAGA);
    }
    else if (xOLAHRAGA > pOLAHRAGA->elementOLAHRAGA)
    {
        delOLAHRAGA(xOLAHRAGA, yOLAHRAGA, zOLAHRAGA, pOLAHRAGA->rightOLAHRAGA);
    }
    else if ((pOLAHRAGA->leftOLAHRAGA == NULL) && (pOLAHRAGA->rightOLAHRAGA == NULL))
    {
        dOLAHRAGA = pOLAHRAGA;
        free(dOLAHRAGA);
        pOLAHRAGA = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pOLAHRAGA->leftOLAHRAGA == NULL)
    {
        dOLAHRAGA = pOLAHRAGA;
        free(dOLAHRAGA);
        pOLAHRAGA = pOLAHRAGA->rightOLAHRAGA;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pOLAHRAGA->rightOLAHRAGA == NULL)
    {
        dOLAHRAGA = pOLAHRAGA;
        pOLAHRAGA = pOLAHRAGA->leftOLAHRAGA;
        free(dOLAHRAGA);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pOLAHRAGA->elementOLAHRAGA = deleteminOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
    }
}

//Deklasrasi deleteminOLAHRAGA pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminOLAHRAGA(nodeptrOLAHRAGA &pOLAHRAGA)
{
    int cOLAHRAGA;
    cout<<"inside deltemin\n"<<endl;
    if (pOLAHRAGA->leftOLAHRAGA == NULL)
    {
        cOLAHRAGA = pOLAHRAGA->elementOLAHRAGA;
        pOLAHRAGA = pOLAHRAGA->rightOLAHRAGA;
        return cOLAHRAGA;
    }
    else
    {
        cOLAHRAGA = deleteminOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        return cOLAHRAGA;
    }
}

//Deklasrasi prorderOLAHRAGA pada class manajemen
//untuk mencari preorder
void Manajemen::preorderOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    if (pOLAHRAGA != NULL)
    {
      cout<<"|| " <<setw(10)<< pOLAHRAGA->element_bOLAHRAGA << setw(10) << "| " << setw(10)<<pOLAHRAGA->element_cOLAHRAGA << setw(10) << "| " <<setw(10)<< pOLAHRAGA->elementOLAHRAGA << setw(10) << "||"<< endl;
        preorderOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        preorderOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
    }
}

//Deklasrasi inrderOLAHRAGA pada class manajemen
// Inorder Printing
void Manajemen::inorderOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    if (pOLAHRAGA != NULL)
    {
        inorderOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
      
        cout<<"|| " <<setw(10)<< pOLAHRAGA->element_bOLAHRAGA << setw(10) << "| " << setw(10)<<pOLAHRAGA->element_cOLAHRAGA << setw(10) << "| " <<setw(10)<< pOLAHRAGA->elementOLAHRAGA << setw(10) << "||"<< endl;
      
        inorderOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
    }
}

//Deklasrasi postorderOLAHRAGA pada class manajemen
// PostOrder Printing
void Manajemen::postorderOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    if (pOLAHRAGA != NULL)
    {
        postorderOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        postorderOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
        
        cout<<"|| " <<setw(10)<< pOLAHRAGA->element_bOLAHRAGA << setw(10) << "| " << setw(10)<<pOLAHRAGA->element_cOLAHRAGA << setw(10) << "| " <<setw(10)<< pOLAHRAGA->elementOLAHRAGA << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macOLAHRAGA pada class manajemen
//untuk mencari max
int Manajemen::maxOLAHRAGA(int value1OLAHRAGA, int value2OLAHRAGA)
{
    return ((value1OLAHRAGA > value2OLAHRAGA) ? value1OLAHRAGA : value2OLAHRAGA);
}

//Deklasrasi bsheightOLAHRAGA pada class manajemen
//untuk mencari hight
int Manajemen::bsheightOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    int tOLAHRAGA;
    if (pOLAHRAGA == NULL)
    {
        return -1;
    }
    else
    {
        tOLAHRAGA = pOLAHRAGA->heightOLAHRAGA;
        return tOLAHRAGA;
    }
}

//Deklasrasi srlOLAHRAGA pada class manajemen
//untuk fungsi srl
nodeptrOLAHRAGA Manajemen::srlOLAHRAGA(nodeptrOLAHRAGA &p1OLAHRAGA)
{
    nodeptrOLAHRAGA p2OLAHRAGA;
    p2OLAHRAGA = p1OLAHRAGA->leftOLAHRAGA;
    p1OLAHRAGA->leftOLAHRAGA = p2OLAHRAGA->rightOLAHRAGA;
    p2OLAHRAGA->rightOLAHRAGA = p1OLAHRAGA;
    p1OLAHRAGA->heightOLAHRAGA = maxOLAHRAGA(bsheightOLAHRAGA(p1OLAHRAGA->leftOLAHRAGA), bsheightOLAHRAGA(p1OLAHRAGA->rightOLAHRAGA)) + 1;
    p2OLAHRAGA->heightOLAHRAGA = maxOLAHRAGA(bsheightOLAHRAGA(p2OLAHRAGA->leftOLAHRAGA), p1OLAHRAGA->heightOLAHRAGA) + 1;
    return p2OLAHRAGA;
}

//Deklasrasi srrOLAHRAGA pada class manajemen
//untuk fungsi srr
nodeptrOLAHRAGA Manajemen:: srrOLAHRAGA(nodeptrOLAHRAGA &p1OLAHRAGA)
{
    nodeptrOLAHRAGA p2OLAHRAGA;
    p2OLAHRAGA = p1OLAHRAGA->rightOLAHRAGA;
    p1OLAHRAGA->rightOLAHRAGA = p2OLAHRAGA->leftOLAHRAGA;
    p2OLAHRAGA->leftOLAHRAGA = p1OLAHRAGA;
    p1OLAHRAGA->heightOLAHRAGA = maxOLAHRAGA(bsheightOLAHRAGA(p1OLAHRAGA->leftOLAHRAGA), bsheightOLAHRAGA(p1OLAHRAGA->rightOLAHRAGA)) + 1;
    p2OLAHRAGA->heightOLAHRAGA = maxOLAHRAGA(p1OLAHRAGA->heightOLAHRAGA, bsheightOLAHRAGA(p2OLAHRAGA->rightOLAHRAGA)) + 1;
    return p2OLAHRAGA;
}

//Deklasrasi drlOLAHRAGA pada class manajemen
//untuk fungsi drl
nodeptrOLAHRAGA Manajemen:: drlOLAHRAGA(nodeptrOLAHRAGA &p1OLAHRAGA)
{
    p1OLAHRAGA->leftOLAHRAGA=srrOLAHRAGA(p1OLAHRAGA->leftOLAHRAGA);
    return srlOLAHRAGA(p1OLAHRAGA);
}

//Deklasrasi drrOLAHRAGA pada class manajemen
//untuk fungsi drr
nodeptrOLAHRAGA Manajemen::drrOLAHRAGA(nodeptrOLAHRAGA &p1OLAHRAGA)
{
    p1OLAHRAGA->rightOLAHRAGA = srlOLAHRAGA(p1OLAHRAGA->rightOLAHRAGA);
    return srrOLAHRAGA(p1OLAHRAGA);
}

//Deklasrasi nonodesOLAHRAGA pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesOLAHRAGA(nodeptrOLAHRAGA pOLAHRAGA)
{
    int countOLAHRAGA=0;
    if (pOLAHRAGA!=NULL)
    {
        nonodesOLAHRAGA(pOLAHRAGA->leftOLAHRAGA);
        nonodesOLAHRAGA(pOLAHRAGA->rightOLAHRAGA);
        countOLAHRAGA++;
    }
    return countOLAHRAGA;
}


//Deklarasi menu_PerencanaanKelas pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanSENI(){
  nodeptrSENI rootSENI = NULL, root1SENI = NULL,minSENI, maxSENI;//,flag;
  int aSENI,choiceSENI,findeleSENI, delete_aSENI;
  string delete_bSENI, delete_cSENI;
  char chSENI = 'y';
  string bSENI, cSENI;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||          PEMBELIAN FASILITAS RUANG SENI           ||"<<endl;
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
        cin>>choiceSENI;

        cout << endl;

        switch(choiceSENI)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bSENI;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cSENI;
            cout<<"Masukkan jumlah barang : ";
            cin>>aSENI;
            insertSENI(aSENI, bSENI, cSENI, rootSENI);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootSENI !=NULL)
            {
                cout << endl;
                minSENI=findminSENI(rootSENI);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minSENI->elementSENI<<endl;
            }
            break;
          
        case 3:
            if (rootSENI !=NULL)
            {
                cout << endl;
                maxSENI=findmaxSENI(rootSENI);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxSENI->elementSENI<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleSENI;
            if (rootSENI != NULL)
            {
                findSENI(findeleSENI,rootSENI);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bSENI;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cSENI;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aSENI;
            delSENI(delete_aSENI, delete_bSENI, delete_cSENI, rootSENI);
            inorderSENI(rootSENI);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderSENI(rootSENI);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderSENI(rootSENI);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderSENI(rootSENI);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightSENI(rootSENI)<< " ||"<<endl;
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
    while(choiceSENI != 10);
}

//Deklasrasi insertSENI pada class manajemen
// Inserting a node
void Manajemen::insertSENI(int xSENI, string ySENI, string zSENI, nodeptrSENI &pSENI)
{
    if (pSENI == NULL)
    {
        pSENI = new nodeSENI;
        pSENI->elementSENI = xSENI;
        pSENI->element_bSENI = ySENI;
        pSENI->element_cSENI = zSENI;
        pSENI->leftSENI = NULL;
        pSENI->rightSENI = NULL;
        pSENI->heightSENI = 0;
        if (pSENI == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xSENI < pSENI->elementSENI)
        {
            insertSENI(xSENI, ySENI, zSENI, pSENI->leftSENI);
            if ((bsheightSENI(pSENI->leftSENI) - bsheightSENI(pSENI->rightSENI)) == 2)
            {
                if (xSENI < pSENI->leftSENI->elementSENI)
                {
                    pSENI = srlSENI(pSENI);
                }
                else
                {
                    pSENI = drlSENI(pSENI);
                }
            }
        }
        else if (xSENI > pSENI->elementSENI)
        {
            insertSENI(xSENI, ySENI, zSENI, pSENI->rightSENI);
            if ((bsheightSENI(pSENI->rightSENI) - bsheightSENI(pSENI->leftSENI)) == 2)
            {
                if (xSENI > pSENI->rightSENI->elementSENI)
                {
                    pSENI = srrSENI(pSENI);
                }
                else
                {
                    pSENI = drrSENI(pSENI);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mSENI, nSENI, dSENI;
    mSENI = bsheightSENI(pSENI->leftSENI);
    nSENI = bsheightSENI(pSENI->rightSENI);
    dSENI = maxSENI(mSENI, nSENI);
    pSENI->heightSENI = dSENI + 1;
}

//Deklasrasi FinminSENI pada class manajemen
// Finding the Smallest
nodeptrSENI Manajemen::findminSENI(nodeptrSENI pSENI)
{
    if (pSENI == NULL)
    {
        cout<<"Data kosong" << endl;
        return pSENI;
    }
    else
    {
        while(pSENI->leftSENI !=NULL)
        {
            pSENI = pSENI->leftSENI;
            //return p;
        }
        return pSENI;
    }
}

//Deklasrasi finmaxSENI pada class manajemen
// Finding the Largest node
nodeptrSENI Manajemen::findmaxSENI(nodeptrSENI pSENI)
{
    if (pSENI == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pSENI;
    }
    else
    {
        while(pSENI->rightSENI !=NULL)
        {
            pSENI = pSENI->rightSENI;
            //return p;
        }
        return pSENI;
    }
}

//Deklasrasi findSENI pada class manajemen
// Finding an element
void Manajemen::findSENI(int xSENI,nodeptrSENI &pSENI)
{
    if (pSENI == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xSENI < pSENI->elementSENI)
        {
            findSENI(xSENI, pSENI->leftSENI);
        }
        else
        {
            if (xSENI > pSENI->elementSENI)
            {
                findSENI(xSENI, pSENI->rightSENI);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copySENI pada class manajemen
// Copy a tree
void Manajemen::copySENI(nodeptrSENI &pSENI,nodeptrSENI &p1SENI)
{
    makeemptySENI(p1SENI);
    p1SENI = nodecopySENI(pSENI);
}

//Deklasrasi makeempyuSENI pada class manajemen
// Make a tree empty
void Manajemen::makeemptySENI(nodeptrSENI &pSENI)
{
    nodeptrSENI dSENI;
    if (pSENI != NULL)
    {
        makeemptySENI(pSENI->leftSENI);
        makeemptySENI(pSENI->rightSENI);
        dSENI = pSENI;
        free(dSENI);
        pSENI = NULL;
    }
}

//Deklasrasi nodecopySENI pada class manajemen
// Copy the nodes
nodeptrSENI Manajemen::nodecopySENI(nodeptrSENI &pSENI)
{
    nodeptrSENI tempSENI;
    if (pSENI == NULL)
    {
        return pSENI;
    }
    else
    {
        tempSENI = new nodeSENI;
        tempSENI->elementSENI = pSENI->elementSENI;
        tempSENI->leftSENI = nodecopySENI(pSENI->leftSENI);
        tempSENI->rightSENI = nodecopySENI(pSENI->rightSENI);
        return tempSENI;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delSENI(int xSENI, string ySENI, string zSENI, nodeptrSENI &pSENI)
{
    nodeptrSENI dSENI;
    if (pSENI == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xSENI < pSENI->elementSENI)
    {
        delSENI(xSENI, ySENI, zSENI, pSENI->leftSENI);
    }
    else if (xSENI > pSENI->elementSENI)
    {
        delSENI(xSENI, ySENI, zSENI, pSENI->rightSENI);
    }
    else if ((pSENI->leftSENI == NULL) && (pSENI->rightSENI == NULL))
    {
        dSENI = pSENI;
        free(dSENI);
        pSENI = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pSENI->leftSENI == NULL)
    {
        dSENI = pSENI;
        free(dSENI);
        pSENI = pSENI->rightSENI;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pSENI->rightSENI == NULL)
    {
        dSENI = pSENI;
        pSENI = pSENI->leftSENI;
        free(dSENI);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pSENI->elementSENI = deleteminSENI(pSENI->rightSENI);
    }
}

//Deklasrasi deleteminSENI pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminSENI(nodeptrSENI &pSENI)
{
    int cSENI;
    cout<<"inside deltemin\n"<<endl;
    if (pSENI->leftSENI == NULL)
    {
        cSENI = pSENI->elementSENI;
        pSENI = pSENI->rightSENI;
        return cSENI;
    }
    else
    {
        cSENI = deleteminSENI(pSENI->leftSENI);
        return cSENI;
    }
}

//Deklasrasi prorderSENI pada class manajemen
//untuk mencari preorder
void Manajemen::preorderSENI(nodeptrSENI pSENI)
{
    if (pSENI != NULL)
    {
      cout<<"|| " <<setw(10)<< pSENI->element_bSENI << setw(10) << "| " << setw(10)<<pSENI->element_cSENI << setw(10) << "| " <<setw(10)<< pSENI->elementSENI << setw(10) << "||"<< endl;
        preorderSENI(pSENI->leftSENI);
        preorderSENI(pSENI->rightSENI);
    }
}

//Deklasrasi inrderSENI pada class manajemen
// Inorder Printing
void Manajemen::inorderSENI(nodeptrSENI pSENI)
{
    if (pSENI != NULL)
    {
        inorderSENI(pSENI->leftSENI);
      
        cout<<"|| " <<setw(10)<< pSENI->element_bSENI << setw(10) << "| " << setw(10)<<pSENI->element_cSENI << setw(10) << "| " <<setw(10)<< pSENI->elementSENI << setw(10) << "||"<< endl;
      
        inorderSENI(pSENI->rightSENI);
    }
}

//Deklasrasi postorderSENI pada class manajemen
// PostOrder Printing
void Manajemen::postorderSENI(nodeptrSENI pSENI)
{
    if (pSENI != NULL)
    {
        postorderSENI(pSENI->leftSENI);
        postorderSENI(pSENI->rightSENI);
        
        cout<<"|| " <<setw(10)<< pSENI->element_bSENI << setw(10) << "| " << setw(10)<<pSENI->element_cSENI << setw(10) << "| " <<setw(10)<< pSENI->elementSENI << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macSENI pada class manajemen
//untuk mencari max
int Manajemen::maxSENI(int value1SENI, int value2SENI)
{
    return ((value1SENI > value2SENI) ? value1SENI : value2SENI);
}

//Deklasrasi bsheightSENI pada class manajemen
//untuk mencari hight
int Manajemen::bsheightSENI(nodeptrSENI pSENI)
{
    int tSENI;
    if (pSENI == NULL)
    {
        return -1;
    }
    else
    {
        tSENI = pSENI->heightSENI;
        return tSENI;
    }
}

//Deklasrasi srlSENI pada class manajemen
//untuk fungsi srl
nodeptrSENI Manajemen::srlSENI(nodeptrSENI &p1SENI)
{
    nodeptrSENI p2SENI;
    p2SENI = p1SENI->leftSENI;
    p1SENI->leftSENI = p2SENI->rightSENI;
    p2SENI->rightSENI = p1SENI;
    p1SENI->heightSENI = maxSENI(bsheightSENI(p1SENI->leftSENI), bsheightSENI(p1SENI->rightSENI)) + 1;
    p2SENI->heightSENI = maxSENI(bsheightSENI(p2SENI->leftSENI), p1SENI->heightSENI) + 1;
    return p2SENI;
}

//Deklasrasi srrSENI pada class manajemen
//untuk fungsi srr
nodeptrSENI Manajemen:: srrSENI(nodeptrSENI &p1SENI)
{
    nodeptrSENI p2SENI;
    p2SENI = p1SENI->rightSENI;
    p1SENI->rightSENI = p2SENI->leftSENI;
    p2SENI->leftSENI = p1SENI;
    p1SENI->heightSENI = maxSENI(bsheightSENI(p1SENI->leftSENI), bsheightSENI(p1SENI->rightSENI)) + 1;
    p2SENI->heightSENI = maxSENI(p1SENI->heightSENI, bsheightSENI(p2SENI->rightSENI)) + 1;
    return p2SENI;
}

//Deklasrasi drlSENI pada class manajemen
//untuk fungsi drl
nodeptrSENI Manajemen:: drlSENI(nodeptrSENI &p1SENI)
{
    p1SENI->leftSENI=srrSENI(p1SENI->leftSENI);
    return srlSENI(p1SENI);
}

//Deklasrasi drrSENI pada class manajemen
//untuk fungsi drr
nodeptrSENI Manajemen::drrSENI(nodeptrSENI &p1SENI)
{
    p1SENI->rightSENI = srlSENI(p1SENI->rightSENI);
    return srrSENI(p1SENI);
}

//Deklasrasi nonodesSENI pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesSENI(nodeptrSENI pSENI)
{
    int countSENI=0;
    if (pSENI!=NULL)
    {
        nonodesSENI(pSENI->leftSENI);
        nonodesSENI(pSENI->rightSENI);
        countSENI++;
    }
    return countSENI;
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

//TMBH=======================================================================================
//Deklarasi menu_PerencanaanTMBH1 pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanTMBH1(){
  nodeptrTMBH1 rootTMBH1 = NULL, root1TMBH1 = NULL,minTMBH1, maxTMBH1;//,flag;
  int aTMBH1,choiceTMBH1,findeleTMBH1, delete_aTMBH1;
  string delete_bTMBH1, delete_cTMBH1;
  char chTMBH1 = 'y';
  string bTMBH1, cTMBH1;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||             PEMBELIAN FASILITAS KELAS             ||"<<endl;
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
        cin>>choiceTMBH1;

        cout << endl;

        switch(choiceTMBH1)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bTMBH1;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cTMBH1;
            cout<<"Masukkan jumlah barang : ";
            cin>>aTMBH1;
            insertTMBH1(aTMBH1, bTMBH1, cTMBH1, rootTMBH1);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootTMBH1 !=NULL)
            {
                cout << endl;
                minTMBH1=findminTMBH1(rootTMBH1);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minTMBH1->elementTMBH1<<endl;
            }
            break;
          
        case 3:
            if (rootTMBH1 !=NULL)
            {
                cout << endl;
                maxTMBH1=findmaxTMBH1(rootTMBH1);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxTMBH1->elementTMBH1<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleTMBH1;
            if (rootTMBH1 != NULL)
            {
                findTMBH1(findeleTMBH1,rootTMBH1);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bTMBH1;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cTMBH1;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aTMBH1;
            delTMBH1(delete_aTMBH1, delete_bTMBH1, delete_cTMBH1, rootTMBH1);
            inorderTMBH1(rootTMBH1);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderTMBH1(rootTMBH1);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderTMBH1(rootTMBH1);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderTMBH1(rootTMBH1);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightTMBH1(rootTMBH1)<< " ||"<<endl;
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
    while(choiceTMBH1 != 10);
}

//Deklasrasi insertTMBH1 pada class manajemen
// Inserting a node
void Manajemen::insertTMBH1(int xTMBH1, string yTMBH1, string zTMBH1, nodeptrTMBH1 &pTMBH1)
{
    if (pTMBH1 == NULL)
    {
        pTMBH1 = new nodeTMBH1;
        pTMBH1->elementTMBH1 = xTMBH1;
        pTMBH1->element_bTMBH1 = yTMBH1;
        pTMBH1->element_cTMBH1 = zTMBH1;
        pTMBH1->leftTMBH1 = NULL;
        pTMBH1->rightTMBH1 = NULL;
        pTMBH1->heightTMBH1 = 0;
        if (pTMBH1 == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xTMBH1 < pTMBH1->elementTMBH1)
        {
            insertTMBH1(xTMBH1, yTMBH1, zTMBH1, pTMBH1->leftTMBH1);
            if ((bsheightTMBH1(pTMBH1->leftTMBH1) - bsheightTMBH1(pTMBH1->rightTMBH1)) == 2)
            {
                if (xTMBH1 < pTMBH1->leftTMBH1->elementTMBH1)
                {
                    pTMBH1 = srlTMBH1(pTMBH1);
                }
                else
                {
                    pTMBH1 = drlTMBH1(pTMBH1);
                }
            }
        }
        else if (xTMBH1 > pTMBH1->elementTMBH1)
        {
            insertTMBH1(xTMBH1, yTMBH1, zTMBH1, pTMBH1->rightTMBH1);
            if ((bsheightTMBH1(pTMBH1->rightTMBH1) - bsheightTMBH1(pTMBH1->leftTMBH1)) == 2)
            {
                if (xTMBH1 > pTMBH1->rightTMBH1->elementTMBH1)
                {
                    pTMBH1 = srrTMBH1(pTMBH1);
                }
                else
                {
                    pTMBH1 = drrTMBH1(pTMBH1);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mTMBH1, nTMBH1, dTMBH1;
    mTMBH1 = bsheightTMBH1(pTMBH1->leftTMBH1);
    nTMBH1 = bsheightTMBH1(pTMBH1->rightTMBH1);
    dTMBH1 = maxTMBH1(mTMBH1, nTMBH1);
    pTMBH1->heightTMBH1 = dTMBH1 + 1;
}

//Deklasrasi FinminTMBH1 pada class manajemen
// Finding the Smallest
nodeptrTMBH1 Manajemen::findminTMBH1(nodeptrTMBH1 pTMBH1)
{
    if (pTMBH1 == NULL)
    {
        cout<<"Data kosong" << endl;
        return pTMBH1;
    }
    else
    {
        while(pTMBH1->leftTMBH1 !=NULL)
        {
            pTMBH1 = pTMBH1->leftTMBH1;
            //return p;
        }
        return pTMBH1;
    }
}

//Deklasrasi finmaxTMBH1 pada class manajemen
// Finding the Largest node
nodeptrTMBH1 Manajemen::findmaxTMBH1(nodeptrTMBH1 pTMBH1)
{
    if (pTMBH1 == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pTMBH1;
    }
    else
    {
        while(pTMBH1->rightTMBH1 !=NULL)
        {
            pTMBH1 = pTMBH1->rightTMBH1;
            //return p;
        }
        return pTMBH1;
    }
}

//Deklasrasi findTMBH1 pada class manajemen
// Finding an element
void Manajemen::findTMBH1(int xTMBH1,nodeptrTMBH1 &pTMBH1)
{
    if (pTMBH1 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xTMBH1 < pTMBH1->elementTMBH1)
        {
            findTMBH1(xTMBH1, pTMBH1->leftTMBH1);
        }
        else
        {
            if (xTMBH1 > pTMBH1->elementTMBH1)
            {
                findTMBH1(xTMBH1, pTMBH1->rightTMBH1);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyTMBH1 pada class manajemen
// Copy a tree
void Manajemen::copyTMBH1(nodeptrTMBH1 &pTMBH1,nodeptrTMBH1 &p1TMBH1)
{
    makeemptyTMBH1(p1TMBH1);
    p1TMBH1 = nodecopyTMBH1(pTMBH1);
}

//Deklasrasi makeempyuTMBH1 pada class manajemen
// Make a tree empty
void Manajemen::makeemptyTMBH1(nodeptrTMBH1 &pTMBH1)
{
    nodeptrTMBH1 dTMBH1;
    if (pTMBH1 != NULL)
    {
        makeemptyTMBH1(pTMBH1->leftTMBH1);
        makeemptyTMBH1(pTMBH1->rightTMBH1);
        dTMBH1 = pTMBH1;
        free(dTMBH1);
        pTMBH1 = NULL;
    }
}

//Deklasrasi nodecopyTMBH1 pada class manajemen
// Copy the nodes
nodeptrTMBH1 Manajemen::nodecopyTMBH1(nodeptrTMBH1 &pTMBH1)
{
    nodeptrTMBH1 tempTMBH1;
    if (pTMBH1 == NULL)
    {
        return pTMBH1;
    }
    else
    {
        tempTMBH1 = new nodeTMBH1;
        tempTMBH1->elementTMBH1 = pTMBH1->elementTMBH1;
        tempTMBH1->leftTMBH1 = nodecopyTMBH1(pTMBH1->leftTMBH1);
        tempTMBH1->rightTMBH1 = nodecopyTMBH1(pTMBH1->rightTMBH1);
        return tempTMBH1;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delTMBH1(int xTMBH1, string yTMBH1, string zTMBH1, nodeptrTMBH1 &pTMBH1)
{
    nodeptrTMBH1 dTMBH1;
    if (pTMBH1 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xTMBH1 < pTMBH1->elementTMBH1)
    {
        delTMBH1(xTMBH1, yTMBH1, zTMBH1, pTMBH1->leftTMBH1);
    }
    else if (xTMBH1 > pTMBH1->elementTMBH1)
    {
        delTMBH1(xTMBH1, yTMBH1, zTMBH1, pTMBH1->rightTMBH1);
    }
    else if ((pTMBH1->leftTMBH1 == NULL) && (pTMBH1->rightTMBH1 == NULL))
    {
        dTMBH1 = pTMBH1;
        free(dTMBH1);
        pTMBH1 = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH1->leftTMBH1 == NULL)
    {
        dTMBH1 = pTMBH1;
        free(dTMBH1);
        pTMBH1 = pTMBH1->rightTMBH1;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH1->rightTMBH1 == NULL)
    {
        dTMBH1 = pTMBH1;
        pTMBH1 = pTMBH1->leftTMBH1;
        free(dTMBH1);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pTMBH1->elementTMBH1 = deleteminTMBH1(pTMBH1->rightTMBH1);
    }
}

//Deklasrasi deleteminTMBH1 pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminTMBH1(nodeptrTMBH1 &pTMBH1)
{
    int cTMBH1;
    cout<<"inside deltemin\n"<<endl;
    if (pTMBH1->leftTMBH1 == NULL)
    {
        cTMBH1 = pTMBH1->elementTMBH1;
        pTMBH1 = pTMBH1->rightTMBH1;
        return cTMBH1;
    }
    else
    {
        cTMBH1 = deleteminTMBH1(pTMBH1->leftTMBH1);
        return cTMBH1;
    }
}

//Deklasrasi prorderTMBH1 pada class manajemen
//untuk mencari preorder
void Manajemen::preorderTMBH1(nodeptrTMBH1 pTMBH1)
{
    if (pTMBH1 != NULL)
    {
      cout<<"|| " <<setw(10)<< pTMBH1->element_bTMBH1 << setw(10) << "| " << setw(10)<<pTMBH1->element_cTMBH1 << setw(10) << "| " <<setw(10)<< pTMBH1->elementTMBH1 << setw(10) << "||"<< endl;
        preorderTMBH1(pTMBH1->leftTMBH1);
        preorderTMBH1(pTMBH1->rightTMBH1);
    }
}

//Deklasrasi inrderTMBH1 pada class manajemen
// Inorder Printing
void Manajemen::inorderTMBH1(nodeptrTMBH1 pTMBH1)
{
    if (pTMBH1 != NULL)
    {
        inorderTMBH1(pTMBH1->leftTMBH1);
      
        cout<<"|| " <<setw(10)<< pTMBH1->element_bTMBH1 << setw(10) << "| " << setw(10)<<pTMBH1->element_cTMBH1 << setw(10) << "| " <<setw(10)<< pTMBH1->elementTMBH1 << setw(10) << "||"<< endl;
      
        inorderTMBH1(pTMBH1->rightTMBH1);
    }
}

//Deklasrasi postorderTMBH1 pada class manajemen
// PostOrder Printing
void Manajemen::postorderTMBH1(nodeptrTMBH1 pTMBH1)
{
    if (pTMBH1 != NULL)
    {
        postorderTMBH1(pTMBH1->leftTMBH1);
        postorderTMBH1(pTMBH1->rightTMBH1);
        
        cout<<"|| " <<setw(10)<< pTMBH1->element_bTMBH1 << setw(10) << "| " << setw(10)<<pTMBH1->element_cTMBH1 << setw(10) << "| " <<setw(10)<< pTMBH1->elementTMBH1 << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macTMBH1 pada class manajemen
//untuk mencari max
int Manajemen::maxTMBH1(int value1TMBH1, int value2TMBH1)
{
    return ((value1TMBH1 > value2TMBH1) ? value1TMBH1 : value2TMBH1);
}

//Deklasrasi bsheightTMBH1 pada class manajemen
//untuk mencari hight
int Manajemen::bsheightTMBH1(nodeptrTMBH1 pTMBH1)
{
    int tTMBH1;
    if (pTMBH1 == NULL)
    {
        return -1;
    }
    else
    {
        tTMBH1 = pTMBH1->heightTMBH1;
        return tTMBH1;
    }
}

//Deklasrasi srlTMBH1 pada class manajemen
//untuk fungsi srl
nodeptrTMBH1 Manajemen::srlTMBH1(nodeptrTMBH1 &p1TMBH1)
{
    nodeptrTMBH1 p2TMBH1;
    p2TMBH1 = p1TMBH1->leftTMBH1;
    p1TMBH1->leftTMBH1 = p2TMBH1->rightTMBH1;
    p2TMBH1->rightTMBH1 = p1TMBH1;
    p1TMBH1->heightTMBH1 = maxTMBH1(bsheightTMBH1(p1TMBH1->leftTMBH1), bsheightTMBH1(p1TMBH1->rightTMBH1)) + 1;
    p2TMBH1->heightTMBH1 = maxTMBH1(bsheightTMBH1(p2TMBH1->leftTMBH1), p1TMBH1->heightTMBH1) + 1;
    return p2TMBH1;
}

//Deklasrasi srrTMBH1 pada class manajemen
//untuk fungsi srr
nodeptrTMBH1 Manajemen:: srrTMBH1(nodeptrTMBH1 &p1TMBH1)
{
    nodeptrTMBH1 p2TMBH1;
    p2TMBH1 = p1TMBH1->rightTMBH1;
    p1TMBH1->rightTMBH1 = p2TMBH1->leftTMBH1;
    p2TMBH1->leftTMBH1 = p1TMBH1;
    p1TMBH1->heightTMBH1 = maxTMBH1(bsheightTMBH1(p1TMBH1->leftTMBH1), bsheightTMBH1(p1TMBH1->rightTMBH1)) + 1;
    p2TMBH1->heightTMBH1 = maxTMBH1(p1TMBH1->heightTMBH1, bsheightTMBH1(p2TMBH1->rightTMBH1)) + 1;
    return p2TMBH1;
}

//Deklasrasi drlTMBH1 pada class manajemen
//untuk fungsi drl
nodeptrTMBH1 Manajemen:: drlTMBH1(nodeptrTMBH1 &p1TMBH1)
{
    p1TMBH1->leftTMBH1=srrTMBH1(p1TMBH1->leftTMBH1);
    return srlTMBH1(p1TMBH1);
}

//Deklasrasi drrTMBH1 pada class manajemen
//untuk fungsi drr
nodeptrTMBH1 Manajemen::drrTMBH1(nodeptrTMBH1 &p1TMBH1)
{
    p1TMBH1->rightTMBH1 = srlTMBH1(p1TMBH1->rightTMBH1);
    return srrTMBH1(p1TMBH1);
}

//Deklasrasi nonodesTMBH1 pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesTMBH1(nodeptrTMBH1 pTMBH1)
{
    int countTMBH1=0;
    if (pTMBH1!=NULL)
    {
        nonodesTMBH1(pTMBH1->leftTMBH1);
        nonodesTMBH1(pTMBH1->rightTMBH1);
        countTMBH1++;
    }
    return countTMBH1;
}


//Deklarasi menu_PerencanaanKelas pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanTMBH2(){
  nodeptrTMBH2 rootTMBH2 = NULL, root1TMBH2 = NULL,minTMBH2, maxTMBH2;//,flag;
  int aTMBH2,choiceTMBH2,findeleTMBH2, delete_aTMBH2;
  string delete_bTMBH2, delete_cTMBH2;
  char chTMBH2 = 'y';
  string bTMBH2, cTMBH2;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||         PEMBELIAN FASILITAS RUANG TMBH2           ||"<<endl;
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
        cin>>choiceTMBH2;

        cout << endl;

        switch(choiceTMBH2)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bTMBH2;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cTMBH2;
            cout<<"Masukkan jumlah barang : ";
            cin>>aTMBH2;
            insertTMBH2(aTMBH2, bTMBH2, cTMBH2, rootTMBH2);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootTMBH2 !=NULL)
            {
                cout << endl;
                minTMBH2=findminTMBH2(rootTMBH2);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minTMBH2->elementTMBH2<<endl;
            }
            break;
          
        case 3:
            if (rootTMBH2 !=NULL)
            {
                cout << endl;
                maxTMBH2=findmaxTMBH2(rootTMBH2);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxTMBH2->elementTMBH2<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleTMBH2;
            if (rootTMBH2 != NULL)
            {
                findTMBH2(findeleTMBH2,rootTMBH2);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bTMBH2;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cTMBH2;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aTMBH2;
            delTMBH2(delete_aTMBH2, delete_bTMBH2, delete_cTMBH2, rootTMBH2);
            inorderTMBH2(rootTMBH2);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderTMBH2(rootTMBH2);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderTMBH2(rootTMBH2);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderTMBH2(rootTMBH2);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightTMBH2(rootTMBH2)<< " ||"<<endl;
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
    while(choiceTMBH2 != 10);
}

//Deklasrasi insertTMBH2 pada class manajemen
// Inserting a node
void Manajemen::insertTMBH2(int xTMBH2, string yTMBH2, string zTMBH2, nodeptrTMBH2 &pTMBH2)
{
    if (pTMBH2 == NULL)
    {
        pTMBH2 = new nodeTMBH2;
        pTMBH2->elementTMBH2 = xTMBH2;
        pTMBH2->element_bTMBH2 = yTMBH2;
        pTMBH2->element_cTMBH2 = zTMBH2;
        pTMBH2->leftTMBH2 = NULL;
        pTMBH2->rightTMBH2 = NULL;
        pTMBH2->heightTMBH2 = 0;
        if (pTMBH2 == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xTMBH2 < pTMBH2->elementTMBH2)
        {
            insertTMBH2(xTMBH2, yTMBH2, zTMBH2, pTMBH2->leftTMBH2);
            if ((bsheightTMBH2(pTMBH2->leftTMBH2) - bsheightTMBH2(pTMBH2->rightTMBH2)) == 2)
            {
                if (xTMBH2 < pTMBH2->leftTMBH2->elementTMBH2)
                {
                    pTMBH2 = srlTMBH2(pTMBH2);
                }
                else
                {
                    pTMBH2 = drlTMBH2(pTMBH2);
                }
            }
        }
        else if (xTMBH2 > pTMBH2->elementTMBH2)
        {
            insertTMBH2(xTMBH2, yTMBH2, zTMBH2, pTMBH2->rightTMBH2);
            if ((bsheightTMBH2(pTMBH2->rightTMBH2) - bsheightTMBH2(pTMBH2->leftTMBH2)) == 2)
            {
                if (xTMBH2 > pTMBH2->rightTMBH2->elementTMBH2)
                {
                    pTMBH2 = srrTMBH2(pTMBH2);
                }
                else
                {
                    pTMBH2 = drrTMBH2(pTMBH2);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mTMBH2, nTMBH2, dTMBH2;
    mTMBH2 = bsheightTMBH2(pTMBH2->leftTMBH2);
    nTMBH2 = bsheightTMBH2(pTMBH2->rightTMBH2);
    dTMBH2 = maxTMBH2(mTMBH2, nTMBH2);
    pTMBH2->heightTMBH2 = dTMBH2 + 1;
}

//Deklasrasi FinminTMBH2 pada class manajemen
// Finding the Smallest
nodeptrTMBH2 Manajemen::findminTMBH2(nodeptrTMBH2 pTMBH2)
{
    if (pTMBH2 == NULL)
    {
        cout<<"Data kosong" << endl;
        return pTMBH2;
    }
    else
    {
        while(pTMBH2->leftTMBH2 !=NULL)
        {
            pTMBH2 = pTMBH2->leftTMBH2;
            //return p;
        }
        return pTMBH2;
    }
}

//Deklasrasi finmaxTMBH2 pada class manajemen
// Finding the Largest node
nodeptrTMBH2 Manajemen::findmaxTMBH2(nodeptrTMBH2 pTMBH2)
{
    if (pTMBH2 == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pTMBH2;
    }
    else
    {
        while(pTMBH2->rightTMBH2 !=NULL)
        {
            pTMBH2 = pTMBH2->rightTMBH2;
            //return p;
        }
        return pTMBH2;
    }
}

//Deklasrasi findTMBH2 pada class manajemen
// Finding an element
void Manajemen::findTMBH2(int xTMBH2,nodeptrTMBH2 &pTMBH2)
{
    if (pTMBH2 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xTMBH2 < pTMBH2->elementTMBH2)
        {
            findTMBH2(xTMBH2, pTMBH2->leftTMBH2);
        }
        else
        {
            if (xTMBH2 > pTMBH2->elementTMBH2)
            {
                findTMBH2(xTMBH2, pTMBH2->rightTMBH2);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyTMBH2 pada class manajemen
// Copy a tree
void Manajemen::copyTMBH2(nodeptrTMBH2 &pTMBH2,nodeptrTMBH2 &p1TMBH2)
{
    makeemptyTMBH2(p1TMBH2);
    p1TMBH2 = nodecopyTMBH2(pTMBH2);
}

//Deklasrasi makeempyuTMBH2 pada class manajemen
// Make a tree empty
void Manajemen::makeemptyTMBH2(nodeptrTMBH2 &pTMBH2)
{
    nodeptrTMBH2 dTMBH2;
    if (pTMBH2 != NULL)
    {
        makeemptyTMBH2(pTMBH2->leftTMBH2);
        makeemptyTMBH2(pTMBH2->rightTMBH2);
        dTMBH2 = pTMBH2;
        free(dTMBH2);
        pTMBH2 = NULL;
    }
}

//Deklasrasi nodecopyTMBH2 pada class manajemen
// Copy the nodes
nodeptrTMBH2 Manajemen::nodecopyTMBH2(nodeptrTMBH2 &pTMBH2)
{
    nodeptrTMBH2 tempTMBH2;
    if (pTMBH2 == NULL)
    {
        return pTMBH2;
    }
    else
    {
        tempTMBH2 = new nodeTMBH2;
        tempTMBH2->elementTMBH2 = pTMBH2->elementTMBH2;
        tempTMBH2->leftTMBH2 = nodecopyTMBH2(pTMBH2->leftTMBH2);
        tempTMBH2->rightTMBH2 = nodecopyTMBH2(pTMBH2->rightTMBH2);
        return tempTMBH2;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delTMBH2(int xTMBH2, string yTMBH2, string zTMBH2, nodeptrTMBH2 &pTMBH2)
{
    nodeptrTMBH2 dTMBH2;
    if (pTMBH2 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xTMBH2 < pTMBH2->elementTMBH2)
    {
        delTMBH2(xTMBH2, yTMBH2, zTMBH2, pTMBH2->leftTMBH2);
    }
    else if (xTMBH2 > pTMBH2->elementTMBH2)
    {
        delTMBH2(xTMBH2, yTMBH2, zTMBH2, pTMBH2->rightTMBH2);
    }
    else if ((pTMBH2->leftTMBH2 == NULL) && (pTMBH2->rightTMBH2 == NULL))
    {
        dTMBH2 = pTMBH2;
        free(dTMBH2);
        pTMBH2 = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH2->leftTMBH2 == NULL)
    {
        dTMBH2 = pTMBH2;
        free(dTMBH2);
        pTMBH2 = pTMBH2->rightTMBH2;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH2->rightTMBH2 == NULL)
    {
        dTMBH2 = pTMBH2;
        pTMBH2 = pTMBH2->leftTMBH2;
        free(dTMBH2);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pTMBH2->elementTMBH2 = deleteminTMBH2(pTMBH2->rightTMBH2);
    }
}

//Deklasrasi deleteminTMBH2 pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminTMBH2(nodeptrTMBH2 &pTMBH2)
{
    int cTMBH2;
    cout<<"inside deltemin\n"<<endl;
    if (pTMBH2->leftTMBH2 == NULL)
    {
        cTMBH2 = pTMBH2->elementTMBH2;
        pTMBH2 = pTMBH2->rightTMBH2;
        return cTMBH2;
    }
    else
    {
        cTMBH2 = deleteminTMBH2(pTMBH2->leftTMBH2);
        return cTMBH2;
    }
}

//Deklasrasi prorderTMBH2 pada class manajemen
//untuk mencari preorder
void Manajemen::preorderTMBH2(nodeptrTMBH2 pTMBH2)
{
    if (pTMBH2 != NULL)
    {
      cout<<"|| " <<setw(10)<< pTMBH2->element_bTMBH2 << setw(10) << "| " << setw(10)<<pTMBH2->element_cTMBH2 << setw(10) << "| " <<setw(10)<< pTMBH2->elementTMBH2 << setw(10) << "||"<< endl;
        preorderTMBH2(pTMBH2->leftTMBH2);
        preorderTMBH2(pTMBH2->rightTMBH2);
    }
}

//Deklasrasi inrderTMBH2 pada class manajemen
// Inorder Printing
void Manajemen::inorderTMBH2(nodeptrTMBH2 pTMBH2)
{
    if (pTMBH2 != NULL)
    {
        inorderTMBH2(pTMBH2->leftTMBH2);
      
        cout<<"|| " <<setw(10)<< pTMBH2->element_bTMBH2 << setw(10) << "| " << setw(10)<<pTMBH2->element_cTMBH2 << setw(10) << "| " <<setw(10)<< pTMBH2->elementTMBH2 << setw(10) << "||"<< endl;
      
        inorderTMBH2(pTMBH2->rightTMBH2);
    }
}

//Deklasrasi postorderTMBH2 pada class manajemen
// PostOrder Printing
void Manajemen::postorderTMBH2(nodeptrTMBH2 pTMBH2)
{
    if (pTMBH2 != NULL)
    {
        postorderTMBH2(pTMBH2->leftTMBH2);
        postorderTMBH2(pTMBH2->rightTMBH2);
        
        cout<<"|| " <<setw(10)<< pTMBH2->element_bTMBH2 << setw(10) << "| " << setw(10)<<pTMBH2->element_cTMBH2 << setw(10) << "| " <<setw(10)<< pTMBH2->elementTMBH2 << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macTMBH2 pada class manajemen
//untuk mencari max
int Manajemen::maxTMBH2(int value1TMBH2, int value2TMBH2)
{
    return ((value1TMBH2 > value2TMBH2) ? value1TMBH2 : value2TMBH2);
}

//Deklasrasi bsheightTMBH2 pada class manajemen
//untuk mencari hight
int Manajemen::bsheightTMBH2(nodeptrTMBH2 pTMBH2)
{
    int tTMBH2;
    if (pTMBH2 == NULL)
    {
        return -1;
    }
    else
    {
        tTMBH2 = pTMBH2->heightTMBH2;
        return tTMBH2;
    }
}

//Deklasrasi srlTMBH2 pada class manajemen
//untuk fungsi srl
nodeptrTMBH2 Manajemen::srlTMBH2(nodeptrTMBH2 &p1TMBH2)
{
    nodeptrTMBH2 p2TMBH2;
    p2TMBH2 = p1TMBH2->leftTMBH2;
    p1TMBH2->leftTMBH2 = p2TMBH2->rightTMBH2;
    p2TMBH2->rightTMBH2 = p1TMBH2;
    p1TMBH2->heightTMBH2 = maxTMBH2(bsheightTMBH2(p1TMBH2->leftTMBH2), bsheightTMBH2(p1TMBH2->rightTMBH2)) + 1;
    p2TMBH2->heightTMBH2 = maxTMBH2(bsheightTMBH2(p2TMBH2->leftTMBH2), p1TMBH2->heightTMBH2) + 1;
    return p2TMBH2;
}

//Deklasrasi srrTMBH2 pada class manajemen
//untuk fungsi srr
nodeptrTMBH2 Manajemen:: srrTMBH2(nodeptrTMBH2 &p1TMBH2)
{
    nodeptrTMBH2 p2TMBH2;
    p2TMBH2 = p1TMBH2->rightTMBH2;
    p1TMBH2->rightTMBH2 = p2TMBH2->leftTMBH2;
    p2TMBH2->leftTMBH2 = p1TMBH2;
    p1TMBH2->heightTMBH2 = maxTMBH2(bsheightTMBH2(p1TMBH2->leftTMBH2), bsheightTMBH2(p1TMBH2->rightTMBH2)) + 1;
    p2TMBH2->heightTMBH2 = maxTMBH2(p1TMBH2->heightTMBH2, bsheightTMBH2(p2TMBH2->rightTMBH2)) + 1;
    return p2TMBH2;
}

//Deklasrasi drlTMBH2 pada class manajemen
//untuk fungsi drl
nodeptrTMBH2 Manajemen:: drlTMBH2(nodeptrTMBH2 &p1TMBH2)
{
    p1TMBH2->leftTMBH2=srrTMBH2(p1TMBH2->leftTMBH2);
    return srlTMBH2(p1TMBH2);
}

//Deklasrasi drrTMBH2 pada class manajemen
//untuk fungsi drr
nodeptrTMBH2 Manajemen::drrTMBH2(nodeptrTMBH2 &p1TMBH2)
{
    p1TMBH2->rightTMBH2 = srlTMBH2(p1TMBH2->rightTMBH2);
    return srrTMBH2(p1TMBH2);
}

//Deklasrasi nonodesTMBH2 pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesTMBH2(nodeptrTMBH2 pTMBH2)
{
    int countTMBH2=0;
    if (pTMBH2!=NULL)
    {
        nonodesTMBH2(pTMBH2->leftTMBH2);
        nonodesTMBH2(pTMBH2->rightTMBH2);
        countTMBH2++;
    }
    return countTMBH2;
}


//Deklarasi menu_PerencanaanTMBH3 pada class manajemen
//untuk membuat menu pilihan fitur perancanaan apa yang ingin dipilih
void Manajemen::menu_PerencanaanTMBH3(){
  nodeptrTMBH3 rootTMBH3 = NULL, root1TMBH3 = NULL,minTMBH3, maxTMBH3;//,flag;
  int aTMBH3,choiceTMBH3,findeleTMBH3, delete_aTMBH3;
  string delete_bTMBH3, delete_cTMBH3;
  char chTMBH3 = 'y';
  string bTMBH3, cTMBH3;
  
    do
    {
      fasilitas_kelas:
      cout << "======================================================="<< endl;
      cout << "||           SELAMAT DATANG DI PERENCANAAN           ||"<<endl;
      cout << "||          PEMBELIAN FASILITAS RUANG TMBH3           ||"<<endl;
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
        cin>>choiceTMBH3;

        cout << endl;

        switch(choiceTMBH3)
        {
        case 1:
            cout<<"Inpus data :"<<endl;
            cout<<"==================================="<<endl;
            cout<<"Masukkan nama barang   : ";
            cin>>bTMBH3;
            cout<<"Masukkan kelas tujuan  : ";
            cin>>cTMBH3;
            cout<<"Masukkan jumlah barang : ";
            cin>>aTMBH3;
            insertTMBH3(aTMBH3, bTMBH3, cTMBH3, rootTMBH3);

            cout << endl;
            cout<<"Barang Berhasil ditambahkan dalam perencanaan"<<endl;
            break;
          
        case 2:
            if (rootTMBH3 !=NULL)
            {
                cout << endl;
                minTMBH3=findminTMBH3(rootTMBH3);
                cout<<"Jumlah barang minimum dalam perencanaan : "<<minTMBH3->elementTMBH3<<endl;
            }
            break;
          
        case 3:
            if (rootTMBH3 !=NULL)
            {
                cout << endl;
                maxTMBH3=findmaxTMBH3(rootTMBH3);
                cout<<"Jumlah barang maximum dalam perencanaan : "<<maxTMBH3->elementTMBH3<<endl;
            }
            break;
          
        case 4:
            cout<<"Masukkan jumlah barang yang ingin dicari : ";
            cin>>findeleTMBH3;
            if (rootTMBH3 != NULL)
            {
                findTMBH3(findeleTMBH3,rootTMBH3);
            }
            break;
          
        case 5:
            cout << endl;
            cout<<"Masukkan nama data yang ingin di hapus         : ";
            cin>>delete_bTMBH3;
            cout<<"Masukkan data kelas tujuan yang ingin di hapus : ";
            cin>>delete_cTMBH3;
            cout<<"Masukkan jumlah barang yang ingin dihapus      : ";
            cin>>delete_aTMBH3;
            delTMBH3(delete_aTMBH3, delete_bTMBH3, delete_cTMBH3, rootTMBH3);
            inorderTMBH3(rootTMBH3);
            cout<<endl;
            break;
          
        case 6:
            cout<<"TAMPILAN DATA PRE-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            preorderTMBH3(rootTMBH3);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 7:
            cout<<"TAMPILAN DATA IN-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            inorderTMBH3(rootTMBH3);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 8:
            cout<<"TAMPILAN DATA POST-ORDER :"<<endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| " <<setw(10)<< "Nama barang " <<setw(10)<< "| "<<setw(10)<<"Kelas Tujuan "<<setw(10)<<"| "<<setw(10)<<"Jumlah barang "<<setw(10)<< "||"<< endl;
            cout<<"||==========================================================||"<<endl;
          
            postorderTMBH3(rootTMBH3);

            cout<<"=============================================================="<<endl;
            cout<<endl;
            break;
          
        case 9:
            cout << endl;
            cout<<"=============================================================="<<endl;
            cout<<"|| HEIGHT :                                                 ||"<<endl;
            cout<<"|| The height of the tree is: "<< bsheightTMBH3(rootTMBH3)<< " ||"<<endl;
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
    while(choiceTMBH3 != 10);
}

//Deklasrasi insertTMBH3 pada class manajemen
// Inserting a node
void Manajemen::insertTMBH3(int xTMBH3, string yTMBH3, string zTMBH3, nodeptrTMBH3 &pTMBH3)
{
    if (pTMBH3 == NULL)
    {
        pTMBH3 = new nodeTMBH3;
        pTMBH3->elementTMBH3 = xTMBH3;
        pTMBH3->element_bTMBH3 = yTMBH3;
        pTMBH3->element_cTMBH3 = zTMBH3;
        pTMBH3->leftTMBH3 = NULL;
        pTMBH3->rightTMBH3 = NULL;
        pTMBH3->heightTMBH3 = 0;
        if (pTMBH3 == NULL)
        {
            cout<<"Out of Space\n"<<endl;
        }
    }
    else
    {
        if (xTMBH3 < pTMBH3->elementTMBH3)
        {
            insertTMBH3(xTMBH3, yTMBH3, zTMBH3, pTMBH3->leftTMBH3);
            if ((bsheightTMBH3(pTMBH3->leftTMBH3) - bsheightTMBH3(pTMBH3->rightTMBH3)) == 2)
            {
                if (xTMBH3 < pTMBH3->leftTMBH3->elementTMBH3)
                {
                    pTMBH3 = srlTMBH3(pTMBH3);
                }
                else
                {
                    pTMBH3 = drlTMBH3(pTMBH3);
                }
            }
        }
        else if (xTMBH3 > pTMBH3->elementTMBH3)
        {
            insertTMBH3(xTMBH3, yTMBH3, zTMBH3, pTMBH3->rightTMBH3);
            if ((bsheightTMBH3(pTMBH3->rightTMBH3) - bsheightTMBH3(pTMBH3->leftTMBH3)) == 2)
            {
                if (xTMBH3 > pTMBH3->rightTMBH3->elementTMBH3)
                {
                    pTMBH3 = srrTMBH3(pTMBH3);
                }
                else
                {
                    pTMBH3 = drrTMBH3(pTMBH3);
                }
            }
        }
        else
        {
            cout<<"Data sudah ada !\n"<<endl;
        }
    }
    int mTMBH3, nTMBH3, dTMBH3;
    mTMBH3 = bsheightTMBH3(pTMBH3->leftTMBH3);
    nTMBH3 = bsheightTMBH3(pTMBH3->rightTMBH3);
    dTMBH3 = maxTMBH3(mTMBH3, nTMBH3);
    pTMBH3->heightTMBH3 = dTMBH3 + 1;
}

//Deklasrasi FinminTMBH3 pada class manajemen
// Finding the Smallest
nodeptrTMBH3 Manajemen::findminTMBH3(nodeptrTMBH3 pTMBH3)
{
    if (pTMBH3 == NULL)
    {
        cout<<"Data kosong" << endl;
        return pTMBH3;
    }
    else
    {
        while(pTMBH3->leftTMBH3 !=NULL)
        {
            pTMBH3 = pTMBH3->leftTMBH3;
            //return p;
        }
        return pTMBH3;
    }
}

//Deklasrasi finmaxTMBH3 pada class manajemen
// Finding the Largest node
nodeptrTMBH3 Manajemen::findmaxTMBH3(nodeptrTMBH3 pTMBH3)
{
    if (pTMBH3 == NULL)
    {
        cout<<"Datang kosong !"<<endl;
        return pTMBH3;
    }
    else
    {
        while(pTMBH3->rightTMBH3 !=NULL)
        {
            pTMBH3 = pTMBH3->rightTMBH3;
            //return p;
        }
        return pTMBH3;
    }
}

//Deklasrasi findTMBH3 pada class manajemen
// Finding an element
void Manajemen::findTMBH3(int xTMBH3,nodeptrTMBH3 &pTMBH3)
{
    if (pTMBH3 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else
    {
        if (xTMBH3 < pTMBH3->elementTMBH3)
        {
            findTMBH3(xTMBH3, pTMBH3->leftTMBH3);
        }
        else
        {
            if (xTMBH3 > pTMBH3->elementTMBH3)
            {
                findTMBH3(xTMBH3, pTMBH3->rightTMBH3);
            }
            else
            {
                cout<<"Data berada pada tabel perencanaan!\n"<<endl;
            }
        }
    }
}

//Deklasrasi copyTMBH3 pada class manajemen
// Copy a tree
void Manajemen::copyTMBH3(nodeptrTMBH3 &pTMBH3,nodeptrTMBH3 &p1TMBH3)
{
    makeemptyTMBH3(p1TMBH3);
    p1TMBH3 = nodecopyTMBH3(pTMBH3);
}

//Deklasrasi makeempyuTMBH3 pada class manajemen
// Make a tree empty
void Manajemen::makeemptyTMBH3(nodeptrTMBH3 &pTMBH3)
{
    nodeptrTMBH3 dTMBH3;
    if (pTMBH3 != NULL)
    {
        makeemptyTMBH3(pTMBH3->leftTMBH3);
        makeemptyTMBH3(pTMBH3->rightTMBH3);
        dTMBH3 = pTMBH3;
        free(dTMBH3);
        pTMBH3 = NULL;
    }
}

//Deklasrasi nodecopyTMBH3 pada class manajemen
// Copy the nodes
nodeptrTMBH3 Manajemen::nodecopyTMBH3(nodeptrTMBH3 &pTMBH3)
{
    nodeptrTMBH3 tempTMBH3;
    if (pTMBH3 == NULL)
    {
        return pTMBH3;
    }
    else
    {
        tempTMBH3 = new nodeTMBH3;
        tempTMBH3->elementTMBH3 = pTMBH3->elementTMBH3;
        tempTMBH3->leftTMBH3 = nodecopyTMBH3(pTMBH3->leftTMBH3);
        tempTMBH3->rightTMBH3 = nodecopyTMBH3(pTMBH3->rightTMBH3);
        return tempTMBH3;
    }
}

//Deklasrasi DELpkelas pada class manajemen
// Deleting a node
void Manajemen::delTMBH3(int xTMBH3, string yTMBH3, string zTMBH3, nodeptrTMBH3 &pTMBH3)
{
    nodeptrTMBH3 dTMBH3;
    if (pTMBH3 == NULL)
    {
        cout<<"Maaf! Data tidak ditemukan pada tabel perencanaan\n"<<endl;
    }
    else if ( xTMBH3 < pTMBH3->elementTMBH3)
    {
        delTMBH3(xTMBH3, yTMBH3, zTMBH3, pTMBH3->leftTMBH3);
    }
    else if (xTMBH3 > pTMBH3->elementTMBH3)
    {
        delTMBH3(xTMBH3, yTMBH3, zTMBH3, pTMBH3->rightTMBH3);
    }
    else if ((pTMBH3->leftTMBH3 == NULL) && (pTMBH3->rightTMBH3 == NULL))
    {
        dTMBH3 = pTMBH3;
        free(dTMBH3);
        pTMBH3 = NULL;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH3->leftTMBH3 == NULL)
    {
        dTMBH3 = pTMBH3;
        free(dTMBH3);
        pTMBH3 = pTMBH3->rightTMBH3;
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else if (pTMBH3->rightTMBH3 == NULL)
    {
        dTMBH3 = pTMBH3;
        pTMBH3 = pTMBH3->leftTMBH3;
        free(dTMBH3);
        cout<<"Data telah sukses terhapus\n"<<endl;
    }
    else
    {
        pTMBH3->elementTMBH3 = deleteminTMBH3(pTMBH3->rightTMBH3);
    }
}

//Deklasrasi deleteminTMBH3 pada class manajemen
//untuk menghapus terkecil
int Manajemen::deleteminTMBH3(nodeptrTMBH3 &pTMBH3)
{
    int cTMBH3;
    cout<<"inside deltemin\n"<<endl;
    if (pTMBH3->leftTMBH3 == NULL)
    {
        cTMBH3 = pTMBH3->elementTMBH3;
        pTMBH3 = pTMBH3->rightTMBH3;
        return cTMBH3;
    }
    else
    {
        cTMBH3 = deleteminTMBH3(pTMBH3->leftTMBH3);
        return cTMBH3;
    }
}

//Deklasrasi prorderTMBH3 pada class manajemen
//untuk mencari preorder
void Manajemen::preorderTMBH3(nodeptrTMBH3 pTMBH3)
{
    if (pTMBH3 != NULL)
    {
      cout<<"|| " <<setw(10)<< pTMBH3->element_bTMBH3 << setw(10) << "| " << setw(10)<<pTMBH3->element_cTMBH3 << setw(10) << "| " <<setw(10)<< pTMBH3->elementTMBH3 << setw(10) << "||"<< endl;
        preorderTMBH3(pTMBH3->leftTMBH3);
        preorderTMBH3(pTMBH3->rightTMBH3);
    }
}

//Deklasrasi inrderTMBH3 pada class manajemen
// Inorder Printing
void Manajemen::inorderTMBH3(nodeptrTMBH3 pTMBH3)
{
    if (pTMBH3 != NULL)
    {
        inorderTMBH3(pTMBH3->leftTMBH3);
      
        cout<<"|| " <<setw(10)<< pTMBH3->element_bTMBH3 << setw(10) << "| " << setw(10)<<pTMBH3->element_cTMBH3 << setw(10) << "| " <<setw(10)<< pTMBH3->elementTMBH3 << setw(10) << "||"<< endl;
      
        inorderTMBH3(pTMBH3->rightTMBH3);
    }
}

//Deklasrasi postorderTMBH3 pada class manajemen
// PostOrder Printing
void Manajemen::postorderTMBH3(nodeptrTMBH3 pTMBH3)
{
    if (pTMBH3 != NULL)
    {
        postorderTMBH3(pTMBH3->leftTMBH3);
        postorderTMBH3(pTMBH3->rightTMBH3);
        
        cout<<"|| " <<setw(10)<< pTMBH3->element_bTMBH3 << setw(10) << "| " << setw(10)<<pTMBH3->element_cTMBH3 << setw(10) << "| " <<setw(10)<< pTMBH3->elementTMBH3 << setw(10) << "||"<< endl;
    }
}

//Deklasrasi macTMBH3 pada class manajemen
//untuk mencari max
int Manajemen::maxTMBH3(int value1TMBH3, int value2TMBH3)
{
    return ((value1TMBH3 > value2TMBH3) ? value1TMBH3 : value2TMBH3);
}

//Deklasrasi bsheightTMBH3 pada class manajemen
//untuk mencari hight
int Manajemen::bsheightTMBH3(nodeptrTMBH3 pTMBH3)
{
    int tTMBH3;
    if (pTMBH3 == NULL)
    {
        return -1;
    }
    else
    {
        tTMBH3 = pTMBH3->heightTMBH3;
        return tTMBH3;
    }
}

//Deklasrasi srlTMBH3 pada class manajemen
//untuk fungsi srl
nodeptrTMBH3 Manajemen::srlTMBH3(nodeptrTMBH3 &p1TMBH3)
{
    nodeptrTMBH3 p2TMBH3;
    p2TMBH3 = p1TMBH3->leftTMBH3;
    p1TMBH3->leftTMBH3 = p2TMBH3->rightTMBH3;
    p2TMBH3->rightTMBH3 = p1TMBH3;
    p1TMBH3->heightTMBH3 = maxTMBH3(bsheightTMBH3(p1TMBH3->leftTMBH3), bsheightTMBH3(p1TMBH3->rightTMBH3)) + 1;
    p2TMBH3->heightTMBH3 = maxTMBH3(bsheightTMBH3(p2TMBH3->leftTMBH3), p1TMBH3->heightTMBH3) + 1;
    return p2TMBH3;
}

//Deklasrasi srrTMBH3 pada class manajemen
//untuk fungsi srr
nodeptrTMBH3 Manajemen:: srrTMBH3(nodeptrTMBH3 &p1TMBH3)
{
    nodeptrTMBH3 p2TMBH3;
    p2TMBH3 = p1TMBH3->rightTMBH3;
    p1TMBH3->rightTMBH3 = p2TMBH3->leftTMBH3;
    p2TMBH3->leftTMBH3 = p1TMBH3;
    p1TMBH3->heightTMBH3 = maxTMBH3(bsheightTMBH3(p1TMBH3->leftTMBH3), bsheightTMBH3(p1TMBH3->rightTMBH3)) + 1;
    p2TMBH3->heightTMBH3 = maxTMBH3(p1TMBH3->heightTMBH3, bsheightTMBH3(p2TMBH3->rightTMBH3)) + 1;
    return p2TMBH3;
}

//Deklasrasi drlTMBH3 pada class manajemen
//untuk fungsi drl
nodeptrTMBH3 Manajemen:: drlTMBH3(nodeptrTMBH3 &p1TMBH3)
{
    p1TMBH3->leftTMBH3=srrTMBH3(p1TMBH3->leftTMBH3);
    return srlTMBH3(p1TMBH3);
}

//Deklasrasi drrTMBH3 pada class manajemen
//untuk fungsi drr
nodeptrTMBH3 Manajemen::drrTMBH3(nodeptrTMBH3 &p1TMBH3)
{
    p1TMBH3->rightTMBH3 = srlTMBH3(p1TMBH3->rightTMBH3);
    return srrTMBH3(p1TMBH3);
}

//Deklasrasi nonodesTMBH3 pada class manajemen
//untuk fungsi nonode
int Manajemen::nonodesTMBH3(nodeptrTMBH3 pTMBH3)
{
    int countTMBH3=0;
    if (pTMBH3!=NULL)
    {
        nonodesTMBH3(pTMBH3->leftTMBH3);
        nonodesTMBH3(pTMBH3->rightTMBH3);
        countTMBH3++;
    }
    return countTMBH3;
}
//=======================================================================================TMBH

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

void Manajemen::menu_SELEKSILOMBA(){
  menu:
  cout << "=======================================" << endl;
  cout << "||      MENU ANTRIAN PENDAFTARAN     ||" << endl;
  cout << "||           SELEKSI LOMBA           ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Mendaftar (insert)             ||" << endl;
  cout << "|| 2) Hapus data pendaftaran (Delete)||" << endl;
  cout << "|| 3) Tampilkan Antrian seleksi      ||" << endl;
  cout << "|| 4) Kembali                        ||" << endl;
  cout << "=======================================" << endl;
  do{
    cout << "Masukkan pilihan : ";
    cin >> chSELEKSILOMBA;
    switch(chSELEKSILOMBA){
      case 1:
        cout << "Masukkan Nama_NIM : ";
        cin >> aSELEKSILOMBA;
        cout << "Masukkan Jumlah pengalaman mengikuti lomba : ";
        cin >> valSELEKSILOMBA;
        cout << endl;
        cout << aSELEKSILOMBA << " masuk ke dalam antrian -" << endl;
        cout << "Terimakasih Telah mendaftar, data akan diseleksi oleh ADMIN " << endl;
        insertCQSELEKSILOMBA(valSELEKSILOMBA);
        insertCQ_StringSELEKSILOMBA(aSELEKSILOMBA);
        goto menu;
        break;
      case 2:
        deleteCQSELEKSILOMBA();
        goto menu;
        break;
      case 3:
        displayCQSELEKSILOMBA();
        goto menu;
        break;
      case 4:
        cout << "Terima Kasih " << endl;
        halamanuser(); //======================================================================================
        break;
      default:
        cout << "Incorrect !" << endl;
      }
    }while(chSELEKSILOMBA!= 4);
}

void Manajemen::insertCQSELEKSILOMBA(int valSELEKSILOMBA){
  if((frontSELEKSILOMBA == 0 && rearSELEKSILOMBA == nSELEKSILOMBA-1) || (frontSELEKSILOMBA == rearSELEKSILOMBA+1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(frontSELEKSILOMBA == -1){
    frontSELEKSILOMBA = 0;
    rearSELEKSILOMBA = 0;
  }else{
    if(rearSELEKSILOMBA == nSELEKSILOMBA -1){
      rearSELEKSILOMBA = 0;
    }else{
      rearSELEKSILOMBA = rearSELEKSILOMBA + 1;
    }
  }
  cqueueSELEKSILOMBA[rearSELEKSILOMBA] = valSELEKSILOMBA;
  
  cout << endl;
}

void Manajemen::insertCQ_StringSELEKSILOMBA(string aSELEKSILOMBA){
  if((front_StringSELEKSILOMBA == 0 && rear_StringSELEKSILOMBA == nSELEKSILOMBA - 1) || (front_StringSELEKSILOMBA == rear_StringSELEKSILOMBA + 1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(front_StringSELEKSILOMBA == -1){
    front_StringSELEKSILOMBA = 0;
    rear_StringSELEKSILOMBA = 0;
  }else{
    if(rear_StringSELEKSILOMBA == nSELEKSILOMBA -1){
      rear_StringSELEKSILOMBA = 0;
    }else{
      rear_StringSELEKSILOMBA = rear_StringSELEKSILOMBA + 1;
    }
  }
  cqueue_StringSELEKSILOMBA[rear_StringSELEKSILOMBA] = aSELEKSILOMBA;

  cout << endl;
}

void Manajemen::deleteCQSELEKSILOMBA(){
  if(frontSELEKSILOMBA == -1){
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueueSELEKSILOMBA[frontSELEKSILOMBA] << endl;

  if(frontSELEKSILOMBA == rearSELEKSILOMBA){
    frontSELEKSILOMBA = -1;
    rearSELEKSILOMBA = -1;
  }else{
    if(frontSELEKSILOMBA == nSELEKSILOMBA -1){
      frontSELEKSILOMBA = 0;
    }else{
      frontSELEKSILOMBA = frontSELEKSILOMBA+ 1;
    }
  }
  cout << endl;
}

void Manajemen::deleteCQStringSELEKSILOMBA(){
  if(front_StringSELEKSILOMBA == -1){
    cout << "Tidak ada data pendaftar seleksi " << endl;
    return;
  }
  cout << cqueueSELEKSILOMBA[frontSELEKSILOMBA] << " Keluar Antrian " << endl;

  if(front_StringSELEKSILOMBA == rear_StringSELEKSILOMBA){
    front_StringSELEKSILOMBA = -1;
    rear_StringSELEKSILOMBA = -1;
  }else{
    if(front_StringSELEKSILOMBA == nSELEKSILOMBA -1){
      front_StringSELEKSILOMBA = 0;
    }else{
      front_StringSELEKSILOMBA = front_StringSELEKSILOMBA + 1;
    }
  }
  cout << endl;
}

void Manajemen::displayCQSELEKSILOMBA(){
  int fSELEKSILOMBA = frontSELEKSILOMBA, rSELEKSILOMBA = rearSELEKSILOMBA;
  int ffSELEKSILOMBA = front_StringSELEKSILOMBA, rrSELEKSILOMBA = rear_StringSELEKSILOMBA;
  ofstream Antre_SELEKSILOMBA;
  Antre_SELEKSILOMBA.open("Antre_SELEKSILOMBA.txt");
  
  if(frontSELEKSILOMBA == -1){
    cout << endl;
    cout << "Data kosong Kosong" << endl << endl;
    Antre_SELEKSILOMBA << "Data Kosong" << endl;
    return;
  }
  cout << endl;
  cout << "Data pendaftar seleksi lomba :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Jmlh pengalaman lomba " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_SELEKSILOMBA << "Data pendaftar seleksi lomba :" << endl;
  Antre_SELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
  Antre_SELEKSILOMBA << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Jmlh pengalaman lomba " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_SELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fSELEKSILOMBA <= rSELEKSILOMBA){
    while(fSELEKSILOMBA <= rSELEKSILOMBA){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling awal |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_SELEKSILOMBA <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Pendaftar paling belakang  |" << endl;
      }else{
       Antre_SELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSILOMBA++;
    }
  }else{
    while(fSELEKSILOMBA <= nSELEKSILOMBA - 1){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SELEKSILOMBA <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        Antre_SELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSILOMBA++;
    }
    fSELEKSILOMBA = 0;
    while(fSELEKSILOMBA <= rSELEKSILOMBA){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SELEKSILOMBA <<"| "<< setw(12) << cqueue_StringSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueSELEKSILOMBA[fSELEKSILOMBA] << setw(12) << " |" << setw(12) << fSELEKSILOMBA << setw(12) << " | ";
      if(fSELEKSILOMBA == frontSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSELEKSILOMBA == rearSELEKSILOMBA){
        Antre_SELEKSILOMBA <<setw(12) << " Antrian paling belakang |"<< endl;
      }else{
        Antre_SELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSILOMBA++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_SELEKSILOMBA.close();
}


void Manajemen::menu_SELEKSIBEASISWA(){
  menu:
  cout << "=======================================" << endl;
  cout << "||      MENU ANTRIAN PENDAFTARAN     ||" << endl;
  cout << "||          SELEKSI BEASISWA         ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Mendaftar (insert)             ||" << endl;
  cout << "|| 2) Hapus data pendaftaran (Delete)||" << endl;
  cout << "|| 3) Tampilkan Antrian seleksi      ||" << endl;
  cout << "|| 4) Kembali                        ||" << endl;
  cout << "=======================================" << endl;
  do{
    cout << "Masukkan pilihan : ";
    cin >> chSELEKSIBEASISWA;
    switch(chSELEKSIBEASISWA){
      case 1:
        cout << "Masukkan Nama_NIM : ";
        cin >> aSELEKSIBEASISWA;
        cout << "Masukkan Ranking saat ini : ";
        cin >> valSELEKSIBEASISWA;
        cout << endl;
        cout << aSELEKSIBEASISWA << " masuk ke dalam antrian -" << endl;
        cout << "Terimakasih Telah mendaftar, data akan diseleksi oleh ADMIN " << endl;
        insertCQSELEKSIBEASISWA(valSELEKSIBEASISWA);
        insertCQ_StringSELEKSIBEASISWA(aSELEKSIBEASISWA);
        goto menu;
        break;
      case 2:
        deleteCQSELEKSIBEASISWA();
        goto menu;
        break;
      case 3:
        displayCQSELEKSIBEASISWA();
        goto menu;
        break;
      case 4:
        cout << "Terima Kasih " << endl;
        halamanuser(); //======================================================================================
        break;
      default:
        cout << "Incorrect !" << endl;
      }
    }while(chSELEKSIBEASISWA!= 4);
}

void Manajemen::insertCQSELEKSIBEASISWA(int valSELEKSIBEASISWA){
  if((frontSELEKSIBEASISWA == 0 && rearSELEKSIBEASISWA == nSELEKSIBEASISWA-1) || (frontSELEKSIBEASISWA == rearSELEKSIBEASISWA+1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(frontSELEKSIBEASISWA == -1){
    frontSELEKSIBEASISWA = 0;
    rearSELEKSIBEASISWA = 0;
  }else{
    if(rearSELEKSIBEASISWA == nSELEKSIBEASISWA -1){
      rearSELEKSIBEASISWA = 0;
    }else{
      rearSELEKSIBEASISWA = rearSELEKSIBEASISWA + 1;
    }
  }
  cqueueSELEKSIBEASISWA[rearSELEKSIBEASISWA] = valSELEKSIBEASISWA;
  
  cout << endl;
}

void Manajemen::insertCQ_StringSELEKSIBEASISWA(string aSELEKSIBEASISWA){
  if((front_StringSELEKSIBEASISWA == 0 && rear_StringSELEKSIBEASISWA == nSELEKSIBEASISWA - 1) || (front_StringSELEKSIBEASISWA == rear_StringSELEKSIBEASISWA + 1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(front_StringSELEKSIBEASISWA == -1){
    front_StringSELEKSIBEASISWA = 0;
    rear_StringSELEKSIBEASISWA = 0;
  }else{
    if(rear_StringSELEKSIBEASISWA == nSELEKSIBEASISWA -1){
      rear_StringSELEKSIBEASISWA = 0;
    }else{
      rear_StringSELEKSIBEASISWA = rear_StringSELEKSIBEASISWA + 1;
    }
  }
  cqueue_StringSELEKSIBEASISWA[rear_StringSELEKSIBEASISWA] = aSELEKSIBEASISWA;

  cout << endl;
}

void Manajemen::deleteCQSELEKSIBEASISWA(){
  if(frontSELEKSIBEASISWA == -1){
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueueSELEKSIBEASISWA[frontSELEKSIBEASISWA] << endl;

  if(frontSELEKSIBEASISWA == rearSELEKSIBEASISWA){
    frontSELEKSIBEASISWA = -1;
    rearSELEKSIBEASISWA = -1;
  }else{
    if(frontSELEKSIBEASISWA == nSELEKSIBEASISWA -1){
      frontSELEKSIBEASISWA = 0;
    }else{
      frontSELEKSIBEASISWA = frontSELEKSIBEASISWA+ 1;
    }
  }
  cout << endl;
}

void Manajemen::deleteCQStringSELEKSIBEASISWA(){
  if(front_StringSELEKSIBEASISWA == -1){
    cout << "Tidak ada data pendaftar seleksi " << endl;
    return;
  }
  cout << cqueueSELEKSIBEASISWA[frontSELEKSIBEASISWA] << " Keluar Antrian " << endl;

  if(front_StringSELEKSIBEASISWA == rear_StringSELEKSIBEASISWA){
    front_StringSELEKSIBEASISWA = -1;
    rear_StringSELEKSIBEASISWA = -1;
  }else{
    if(front_StringSELEKSIBEASISWA == nSELEKSIBEASISWA -1){
      front_StringSELEKSIBEASISWA = 0;
    }else{
      front_StringSELEKSIBEASISWA = front_StringSELEKSIBEASISWA + 1;
    }
  }
  cout << endl;
}

void Manajemen::displayCQSELEKSIBEASISWA(){
  int fSELEKSIBEASISWA = frontSELEKSIBEASISWA, rSELEKSIBEASISWA = rearSELEKSIBEASISWA;
  int ffSELEKSIBEASISWA = front_StringSELEKSIBEASISWA, rrSELEKSIBEASISWA = rear_StringSELEKSIBEASISWA;
  ofstream Antre_SELEKSIBEASISWA;
  Antre_SELEKSIBEASISWA.open("Antre_SELEKSIBEASISWA.txt");
  
  if(frontSELEKSIBEASISWA == -1){
    cout << endl;
    cout << "Data kosong Kosong" << endl << endl;
    Antre_SELEKSIBEASISWA << "Data Kosong" << endl;
    return;
  }
  cout << endl;
  cout << "Data pendaftar seleksi lomba :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Ranking saat ini " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_SELEKSIBEASISWA << "Data pendaftar seleksi lomba :" << endl;
  Antre_SELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
  Antre_SELEKSIBEASISWA << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Ranking saat ini " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_SELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fSELEKSIBEASISWA <= rSELEKSIBEASISWA){
    while(fSELEKSIBEASISWA <= rSELEKSIBEASISWA){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling awal |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_SELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Pendaftar paling belakang  |" << endl;
      }else{
       Antre_SELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSIBEASISWA++;
    }
  }else{
    while(fSELEKSIBEASISWA <= nSELEKSIBEASISWA - 1){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        Antre_SELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSIBEASISWA++;
    }
    fSELEKSIBEASISWA = 0;
    while(fSELEKSIBEASISWA <= rSELEKSIBEASISWA){
      cout <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_SELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueSELEKSIBEASISWA[fSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fSELEKSIBEASISWA << setw(12) << " | ";
      if(fSELEKSIBEASISWA == frontSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fSELEKSIBEASISWA == rearSELEKSIBEASISWA){
        Antre_SELEKSIBEASISWA <<setw(12) << " Antrian paling belakang |"<< endl;
      }else{
        Antre_SELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_SELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fSELEKSIBEASISWA++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_SELEKSIBEASISWA.close();
}


//FITUR ADMIN

void Manajemen::menu_ADMINSELEKSILOMBA(){
  ifstream seleksilomba;
  string barislomba;
  
  menu:
  cout << "====================================================" << endl;
  cout << "|| SYARAT LOLOS SELEKSI :                         ||" << endl;
  cout << "|| 1) Menyertakan Nama dan NIM saay mendaftar     ||" << endl;
  cout << "|| 2) Menyertakan Jmlh pengalaman mengikuti lomba ||" << endl;
  cout << "|| 3) Jmlah pengalaman lomba lebih dari 2         ||" << endl;
  cout << "====================================================" << endl;
  
  seleksilomba.open("Antre_SELEKSILOMBA.txt");
  if(seleksilomba.is_open()){
    while(getline(seleksilomba,barislomba)){
      cout << barislomba << endl;
    }
    seleksilomba.close();
  }else{
    cout << "File data pendaftar gagal dimuat !!! " << endl;
  }

  
  cout << "=======================================" << endl;
  cout << "||      MENU MENYELEKSI PENDAFTAR    ||" << endl;
  cout << "||            SELEKSI LOMBA          ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Pilih siswa yang lolos (insert)||" << endl;
  cout << "|| 2) Hapus data pendaftaran (Delete)||" << endl;
  cout << "|| 3) Tampilkan Data siswa yang lolos||" << endl;
  cout << "|| 4) Kembali                        ||" << endl;
  cout << "=======================================" << endl;
  do{
    cout << "Masukkan pilihan : ";
    cin >> chADMINSELEKSILOMBA;
    switch(chADMINSELEKSILOMBA){
      case 1:
        cout << "Masukkan Nama_NIM : ";
        cin >> aADMINSELEKSILOMBA;
        cout << "Masukkan Jumlah pengalaman mengikuti lomba : ";
        cin >> valADMINSELEKSILOMBA;
        cout << endl;
        cout << aADMINSELEKSILOMBA << " LOLOS DALAM SELEKSI -" << endl;
        
        insertCQADMINSELEKSILOMBA(valADMINSELEKSILOMBA);
        insertCQ_StringADMINSELEKSILOMBA(aADMINSELEKSILOMBA);
        goto menu;
        break;
      case 2:
        deleteCQADMINSELEKSILOMBA();
        goto menu;
        break;
      case 3:
        displayCQADMINSELEKSILOMBA();
        goto menu;
        break;
      case 4:
        cout << "Terima Kasih " << endl;
        menu(); //======================================================================================
        break;
      default:
        cout << "Incorrect !" << endl;
      }
    }while(chADMINSELEKSILOMBA!= 4);
  seleksilomba.close();
}

void Manajemen::insertCQADMINSELEKSILOMBA(int valADMINSELEKSILOMBA){
  if((frontADMINSELEKSILOMBA == 0 && rearADMINSELEKSILOMBA == nADMINSELEKSILOMBA-1) || (frontADMINSELEKSILOMBA == rearADMINSELEKSILOMBA+1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(frontADMINSELEKSILOMBA == -1){
    frontADMINSELEKSILOMBA = 0;
    rearADMINSELEKSILOMBA = 0;
  }else{
    if(rearADMINSELEKSILOMBA == nADMINSELEKSILOMBA -1){
      rearADMINSELEKSILOMBA = 0;
    }else{
      rearADMINSELEKSILOMBA = rearADMINSELEKSILOMBA + 1;
    }
  }
  cqueueADMINSELEKSILOMBA[rearADMINSELEKSILOMBA] = valADMINSELEKSILOMBA;
  
  cout << endl;
}

void Manajemen::insertCQ_StringADMINSELEKSILOMBA(string aADMINSELEKSILOMBA){
  if((front_StringADMINSELEKSILOMBA == 0 && rear_StringADMINSELEKSILOMBA == nADMINSELEKSILOMBA - 1) || (front_StringADMINSELEKSILOMBA == rear_StringADMINSELEKSILOMBA + 1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(front_StringADMINSELEKSILOMBA == -1){
    front_StringADMINSELEKSILOMBA = 0;
    rear_StringADMINSELEKSILOMBA = 0;
  }else{
    if(rear_StringADMINSELEKSILOMBA == nADMINSELEKSILOMBA -1){
      rear_StringADMINSELEKSILOMBA = 0;
    }else{
      rear_StringADMINSELEKSILOMBA = rear_StringADMINSELEKSILOMBA + 1;
    }
  }
  cqueue_StringADMINSELEKSILOMBA[rear_StringADMINSELEKSILOMBA] = aADMINSELEKSILOMBA;

  cout << endl;
}

void Manajemen::deleteCQADMINSELEKSILOMBA(){
  if(frontADMINSELEKSILOMBA == -1){
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueueADMINSELEKSILOMBA[frontADMINSELEKSILOMBA] << endl;

  if(frontADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
    frontADMINSELEKSILOMBA = -1;
    rearADMINSELEKSILOMBA = -1;
  }else{
    if(frontADMINSELEKSILOMBA == nADMINSELEKSILOMBA -1){
      frontADMINSELEKSILOMBA = 0;
    }else{
      frontADMINSELEKSILOMBA = frontADMINSELEKSILOMBA+ 1;
    }
  }
  cout << endl;
}

void Manajemen::deleteCQStringADMINSELEKSILOMBA(){
  if(front_StringADMINSELEKSILOMBA == -1){
    cout << "Tidak ada data pendaftar seleksi " << endl;
    return;
  }
  cout << cqueueADMINSELEKSILOMBA[frontADMINSELEKSILOMBA] << " Keluar Antrian " << endl;

  if(front_StringADMINSELEKSILOMBA == rear_StringADMINSELEKSILOMBA){
    front_StringADMINSELEKSILOMBA = -1;
    rear_StringADMINSELEKSILOMBA = -1;
  }else{
    if(front_StringADMINSELEKSILOMBA == nADMINSELEKSILOMBA -1){
      front_StringADMINSELEKSILOMBA = 0;
    }else{
      front_StringADMINSELEKSILOMBA = front_StringADMINSELEKSILOMBA + 1;
    }
  }
  cout << endl;
}

void Manajemen::displayCQADMINSELEKSILOMBA(){
  int fADMINSELEKSILOMBA = frontADMINSELEKSILOMBA, rADMINSELEKSILOMBA = rearADMINSELEKSILOMBA;
  int ffADMINSELEKSILOMBA = front_StringADMINSELEKSILOMBA, rrADMINSELEKSILOMBA = rear_StringADMINSELEKSILOMBA;
  ofstream Antre_ADMINSELEKSILOMBA;
  Antre_ADMINSELEKSILOMBA.open("Antre_ADMINSELEKSILOMBA.txt");
  
  if(frontADMINSELEKSILOMBA == -1){
    cout << endl;
    cout << "Data kosong Kosong" << endl << endl;
    Antre_ADMINSELEKSILOMBA << "Data Kosong" << endl;
    return;
  }
  cout << endl;
  cout << "Data pendaftar seleksi lomba yang lolos :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Jmlh pengalaman lomba " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_ADMINSELEKSILOMBA << "Data pendaftar seleksi lomba yang lolos :" << endl;
  Antre_ADMINSELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
  Antre_ADMINSELEKSILOMBA << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Jmlh pengalaman lomba " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_ADMINSELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fADMINSELEKSILOMBA <= rADMINSELEKSILOMBA){
    while(fADMINSELEKSILOMBA <= rADMINSELEKSILOMBA){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling awal |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_ADMINSELEKSILOMBA <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Pendaftar paling belakang  |" << endl;
      }else{
       Antre_ADMINSELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSILOMBA++;
    }
  }else{
    while(fADMINSELEKSILOMBA <= nADMINSELEKSILOMBA - 1){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_ADMINSELEKSILOMBA <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        Antre_ADMINSELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSILOMBA++;
    }
    fADMINSELEKSILOMBA = 0;
    while(fADMINSELEKSILOMBA <= rADMINSELEKSILOMBA){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_ADMINSELEKSILOMBA <<"| "<< setw(12) << cqueue_StringADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSILOMBA[fADMINSELEKSILOMBA] << setw(12) << " |" << setw(12) << fADMINSELEKSILOMBA << setw(12) << " | ";
      if(fADMINSELEKSILOMBA == frontADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fADMINSELEKSILOMBA == rearADMINSELEKSILOMBA){
        Antre_ADMINSELEKSILOMBA <<setw(12) << " Antrian paling belakang |"<< endl;
      }else{
        Antre_ADMINSELEKSILOMBA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSILOMBA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSILOMBA++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_ADMINSELEKSILOMBA.close();
}


void Manajemen::menu_ADMINSELEKSIBEASISWA(){
  ifstream seleksibeasiswa;
  string barisbeasiswa;
  
  menu:
  cout << "====================================================" << endl;
  cout << "|| SYARAT LOLOS SELEKSI :                         ||" << endl;
  cout << "|| 1) Menyertakan Nama dan NIM saay mendaftar     ||" << endl;
  cout << "|| 2) Menyertakan Ranking saat ini                ||" << endl;
  cout << "|| 3) Masuk dalam 10 besar ranking                ||" << endl;
  cout << "====================================================" << endl;
  
  seleksibeasiswa.open("Antre_SELEKSIBEASISWA.txt");
  if(seleksibeasiswa.is_open()){
    while(getline(seleksibeasiswa,barisbeasiswa)){
      cout << barisbeasiswa << endl;
    }
    seleksibeasiswa.close();
  }else{
    cout << "File data pendaftar gagal dimuat !!! " << endl;
  }

  
  cout << "=======================================" << endl;
  cout << "||      MENU MENYELEKSI PENDAFTAR    ||" << endl;
  cout << "||          SELEKSI BEASISWA         ||" << endl;
  cout << "||-----------------------------------||" << endl;
  cout << "|| 1) Pilih siswa yang lolos (insert)||" << endl;
  cout << "|| 2) Hapus data pendaftaran (Delete)||" << endl;
  cout << "|| 3) Tampilkan Data siswa yang lolos||" << endl;
  cout << "|| 4) Kembali                        ||" << endl;
  cout << "=======================================" << endl;
  do{
    cout << "Masukkan pilihan : ";
    cin >> chADMINSELEKSIBEASISWA;
    switch(chADMINSELEKSIBEASISWA){
      case 1:
        cout << "Masukkan Nama_NIM : ";
        cin >> aADMINSELEKSIBEASISWA;
        cout << "Ranking saat ini : ";
        cin >> valADMINSELEKSIBEASISWA;
        cout << endl;
        cout << aADMINSELEKSIBEASISWA << " LOLOS DALAM SELEKSI -" << endl;
        
        insertCQADMINSELEKSIBEASISWA(valADMINSELEKSIBEASISWA);
        insertCQ_StringADMINSELEKSIBEASISWA(aADMINSELEKSIBEASISWA);
        goto menu;
        break;
      case 2:
        deleteCQADMINSELEKSIBEASISWA();
        goto menu;
        break;
      case 3:
        displayCQADMINSELEKSIBEASISWA();
        goto menu;
        break;
      case 4:
        cout << "Terima Kasih " << endl;
        menu(); //======================================================================================
        break;
      default:
        cout << "Incorrect !" << endl;
      }
    }while(chADMINSELEKSIBEASISWA!= 4);
  seleksilomba.close();
}

void Manajemen::insertCQADMINSELEKSIBEASISWA(int valADMINSELEKSIBEASISWA){
  if((frontADMINSELEKSIBEASISWA == 0 && rearADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA-1) || (frontADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA+1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(frontADMINSELEKSIBEASISWA == -1){
    frontADMINSELEKSIBEASISWA = 0;
    rearADMINSELEKSIBEASISWA = 0;
  }else{
    if(rearADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA -1){
      rearADMINSELEKSIBEASISWA = 0;
    }else{
      rearADMINSELEKSIBEASISWA = rearADMINSELEKSIBEASISWA + 1;
    }
  }
  cqueueADMINSELEKSIBEASISWA[rearADMINSELEKSIBEASISWA] = valADMINSELEKSIBEASISWA;
  
  cout << endl;
}

void Manajemen::insertCQ_StringADMINSELEKSIBEASISWA(string aADMINSELEKSIBEASISWA){
  if((front_StringADMINSELEKSIBEASISWA == 0 && rear_StringADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA - 1) || (front_StringADMINSELEKSIBEASISWA == rear_StringADMINSELEKSIBEASISWA + 1)){
    cout << "Slot pendaftar seleksi Penuh " << endl;
    return;
  }
  if(front_StringADMINSELEKSIBEASISWA == -1){
    front_StringADMINSELEKSIBEASISWA = 0;
    rear_StringADMINSELEKSIBEASISWA = 0;
  }else{
    if(rear_StringADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA -1){
      rear_StringADMINSELEKSIBEASISWA = 0;
    }else{
      rear_StringADMINSELEKSIBEASISWA = rear_StringADMINSELEKSIBEASISWA + 1;
    }
  }
  cqueue_StringADMINSELEKSIBEASISWA[rear_StringADMINSELEKSIBEASISWA] = aADMINSELEKSIBEASISWA;

  cout << endl;
}

void Manajemen::deleteCQADMINSELEKSIBEASISWA(){
  if(frontADMINSELEKSIBEASISWA == -1){
    cout << "Antrian Tidak Ada " << endl;
    return;
  }
  cout << "Antrian yang dikeluarkan : " << cqueueADMINSELEKSIBEASISWA[frontADMINSELEKSIBEASISWA] << endl;

  if(frontADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
    frontADMINSELEKSIBEASISWA = -1;
    rearADMINSELEKSIBEASISWA = -1;
  }else{
    if(frontADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA -1){
      frontADMINSELEKSIBEASISWA = 0;
    }else{
      frontADMINSELEKSIBEASISWA = frontADMINSELEKSIBEASISWA+ 1;
    }
  }
  cout << endl;
}

void Manajemen::deleteCQStringADMINSELEKSIBEASISWA(){
  if(front_StringADMINSELEKSIBEASISWA == -1){
    cout << "Tidak ada data pendaftar seleksi " << endl;
    return;
  }
  cout << cqueueADMINSELEKSIBEASISWA[frontADMINSELEKSIBEASISWA] << " Keluar Antrian " << endl;

  if(front_StringADMINSELEKSIBEASISWA == rear_StringADMINSELEKSIBEASISWA){
    front_StringADMINSELEKSIBEASISWA = -1;
    rear_StringADMINSELEKSIBEASISWA = -1;
  }else{
    if(front_StringADMINSELEKSIBEASISWA == nADMINSELEKSIBEASISWA -1){
      front_StringADMINSELEKSIBEASISWA = 0;
    }else{
      front_StringADMINSELEKSIBEASISWA = front_StringADMINSELEKSIBEASISWA + 1;
    }
  }
  cout << endl;
}

void Manajemen::displayCQADMINSELEKSIBEASISWA(){
  int fADMINSELEKSIBEASISWA = frontADMINSELEKSIBEASISWA, rADMINSELEKSIBEASISWA = rearADMINSELEKSIBEASISWA;
  int ffADMINSELEKSIBEASISWA = front_StringADMINSELEKSIBEASISWA, rrADMINSELEKSIBEASISWA = rear_StringADMINSELEKSIBEASISWA;
  ofstream Antre_ADMINSELEKSIBEASISWA;
  Antre_ADMINSELEKSIBEASISWA.open("Antre_ADMINSELEKSIBEASISWA.txt");
  
  if(frontADMINSELEKSIBEASISWA == -1){
    cout << endl;
    cout << "Data kosong Kosong" << endl << endl;
    Antre_ADMINSELEKSIBEASISWA << "Data Kosong" << endl;
    return;
  }
  cout << endl;
  cout << "Data pendaftar seleksi beasiswa yang lolos :" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;
  cout << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Ranking saat ini " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  cout << "------------------------------------------------------------------------------------------------" << endl;

  //Cetak .txt
  Antre_ADMINSELEKSIBEASISWA << "Data pendaftar seleksi beasiswa yang olos :" << endl;
  Antre_ADMINSELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
  Antre_ADMINSELEKSIBEASISWA << "| " << setw(12) << "Nama_NIM " << setw(12) << " | " << setw(12) << " Ranking saat ini " << setw(12) << " | " << setw(12) << " Nomor Antrian " << setw(12) << " | " << " Status " << setw(12) << " |" << endl;
  Antre_ADMINSELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
  
  if(fADMINSELEKSIBEASISWA <= rADMINSELEKSIBEASISWA){
    while(fADMINSELEKSIBEASISWA <= rADMINSELEKSIBEASISWA){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling awal |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else {
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;

      //cetak .txt
      Antre_ADMINSELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Pendaftar paling belakang  |" << endl;
      }else{
       Antre_ADMINSELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSIBEASISWA++;
    }
  }else{
    while(fADMINSELEKSIBEASISWA <= nADMINSELEKSIBEASISWA - 1){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_ADMINSELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Pendaftar paling depan |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Pendaftar paling belakang |" << endl;
      }else{
        Antre_ADMINSELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSIBEASISWA++;
    }
    fADMINSELEKSIBEASISWA = 0;
    while(fADMINSELEKSIBEASISWA <= rADMINSELEKSIBEASISWA){
      cout <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        cout <<setw(12) << " Antrian paling belakang | " << endl;
      }else{
        cout << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      cout << "------------------------------------------------------------------------------------------------" << endl;
      cout << endl;

      //cetak .txt
      Antre_ADMINSELEKSIBEASISWA <<"| "<< setw(12) << cqueue_StringADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " | " << setw(12) << cqueueADMINSELEKSIBEASISWA[fADMINSELEKSIBEASISWA] << setw(12) << " |" << setw(12) << fADMINSELEKSIBEASISWA << setw(12) << " | ";
      if(fADMINSELEKSIBEASISWA == frontADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Antrian paling depan |" << endl;
      }else if(fADMINSELEKSIBEASISWA == rearADMINSELEKSIBEASISWA){
        Antre_ADMINSELEKSIBEASISWA <<setw(12) << " Antrian paling belakang |"<< endl;
      }else{
        Antre_ADMINSELEKSIBEASISWA << setw(12) << " - " << setw(12) << " |"  << endl;
      }
      Antre_ADMINSELEKSIBEASISWA << "------------------------------------------------------------------------------------------------" << endl;
      fADMINSELEKSIBEASISWA++;
    }
    cout << endl;
  }
  
  cout << endl << endl;
  Antre_ADMINSELEKSIBEASISWA.close();
}

int main()
{
  int awalmasuk;
  cout << "================================" << endl;
  cout << "|| Selamat Datang             ||" << endl;
  cout << "|| 1. Daftar                  ||" << endl;
  cout << "|| 2. Login                   ||" << endl;
  cout << "================================" << endl;
  cout << endl;
  cout << "Masukkan pilihan     : ";
  cin >> awalmasuk;

  if(awalmasuk == 1)
  {
    cout << "=================================================================================="<< endl;
    cout << "|| Masukkan data KTP dahulu sebelum login Manajemen Keuangan Sekolah            ||" << endl;
    cout << "|| Catatan :                                                                    ||" << endl;
    cout << "|| - Untuk spasi gunakan '_' untuk dijadikan sebagai username                   ||" << endl;
    cout << "|| - Disarankan untuk mengisi 2 data, dimana 1 data akan dijadikan sebagai      ||" << endl;
    cout << "||   admin, dan data kedua akan dijadikan sebagai user                          ||" << endl;
    cout << "==================================================================================" << endl;

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
  
    if (pil == 1)
    {
      cout << "Masukkan banyak data : ";
      cin >> banyak;
      cin.ignore();
      KTP.input(banyak);
      goto menu;
      
    } else if (pil == 2)
    {
      KTP.output(banyak);
      
      cout << endl;
      cout << "Anda masuk ke Program Manajemen Keuangan Sekolah, Harap login dahulu ! " << endl;
      Manajemen a;
      a.login();
    } else
    {
      cout << "pilihan tidak tersedia" << endl;
      goto menu;
    }
  }else{
    Manajemen a;
    a.login();
  }
  
  return 0;
}
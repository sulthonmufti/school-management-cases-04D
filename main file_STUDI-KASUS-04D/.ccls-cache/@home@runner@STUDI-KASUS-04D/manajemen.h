#include <fstream>
#include <iomanip>
#include<stdlib.h>
#include<string>
#include <iostream>
#define MAX 20
#define FULL 5
#define FULLSELEKSI 5

using namespace std;

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

//FITUR USER
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
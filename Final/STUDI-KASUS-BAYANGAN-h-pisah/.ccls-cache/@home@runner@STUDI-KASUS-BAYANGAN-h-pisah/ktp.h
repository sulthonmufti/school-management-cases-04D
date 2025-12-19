#include <fstream>
#include <iomanip>
#include <iostream>
#define MAX 20
#define FULL 5

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
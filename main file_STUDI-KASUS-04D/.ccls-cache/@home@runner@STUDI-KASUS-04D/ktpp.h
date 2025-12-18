#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct data{
	string nik[17];
	string nama[30], jenis[20], status[20], pekerjaan[20], tempat[20];
	string tgl[20], bln[20], thn[20];
	string jalan[20], kec[20], kelurahan[20];
	string rt[10], rw[10]; 
};

class ktp{
	private:
		int pilgoldar[10],pilagama[10], pilkewarganegaraan[10];
    
	public:
		data KTP;
		void input(int);
		void output(int);

    ofstream file;
};
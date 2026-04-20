#include <iostream>
using namespace std;

class barang {
    public:
    string nama;
    string kategori;
    int jumlah;
    int tanggalproduksi;
    

    void printData(){
        cout << "Nama Barang : " << nama << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalproduksi << endl;
        cout << "Jumlah : " << jumlah << endl;
    }  
};

   
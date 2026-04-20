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

    int main()
    {
        barang elektronik;
        barang nonelektronik;
        elektronik.nama = "Laptop";
        elektronik.kategori = "Elektronik";
        elektronik.tanggalproduksi = 20220101;
        elektronik.jumlah = 10;

        nonelektronik.nama = "Buku";
        nonelektronik.kategori = "Non Elektronik";
        nonelektronik.tanggalproduksi = 20220102;
        nonelektronik.jumlah = 20;

        elektronik.printData();
        nonelektronik.printData();
    }
        
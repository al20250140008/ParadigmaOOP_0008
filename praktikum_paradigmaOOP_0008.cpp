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
        
#include <iostream>
#include <string>
using namespace std;

class Barang{
    private:
    string namaBarang;
    string kodeBarang;

    public:
    Barang (string nama, string kode)
    {
        namaBarang: nama;
        kodeBarang: kode;
    }

    void cetak(){
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main(){
    Barang barang1("Baju", "Baju123");

    barang1.cetak();
    return 0;
}
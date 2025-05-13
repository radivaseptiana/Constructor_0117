#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    public:
    // Costructor dengan parameter
    mahasiswa(int nim, string nama);
};

//Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout
}
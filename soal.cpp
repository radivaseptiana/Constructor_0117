#include <iostream>
using namespace std;

//deklarasi class BangunDatar

class BangunDatar;

class PersegiPanjang
{
    public: 
    void inputData(BangunDatar &Bd);
    void outputData(BangunDatar &Bd);
};

class bangunDatar
{
    private: 
    float panjang;
    float lebar;
    float hitungLuas()
    {
        return panjang * lebar;
    };
    float hitungKeliling(){
        return 2 * (panjang + lebar);
    };
    public:
        // untuk mengakses panjang dan lebar
        friend void PersegiPanjang::inputData(BangunDatar &Bd);
        // untuk mengakses fungsi
        friend void PersegiPanjang::outputData(BangunDatar &Bd);
};

void PersegiPanjang::inputData(BangunDatar &bD){
    cout << "Masukkan Panjang : ";
    cin >> bD.panjang;
    

}
#include <iostream>
using namespace std;

class mahasiswa{

    public:
    int nim;
    string nama;
    float nilai;
    float nilai;
    
    void print_date(){
        cout << "NIM    = " << nim << endl;
        cout << "Nama   = " << nama << endl;
        cout << "Nilai  = " << nilai << endl;
    }
};

int main(){
    mahasiswa mhs;
    mhs.nim = 2023;
    mhs.nama = "Regar";
    mhs.nilai = 99.9;

    mhs.print_date();
}
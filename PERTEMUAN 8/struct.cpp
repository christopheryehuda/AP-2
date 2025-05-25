#include <iostream>
#include <string>
#include <vector>
using namespace std;

// struct adalah kumpulan varibel dengan tipe yang berbeda yang dikelompokkan dalam satu nama 
struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct // sebuah struct yang didalamnya memiliki sebuah struct lagi
};

int main(){
    system("CLS");

    Mahasiswa mhs1;

    // mhs1.nama = " Christopher";
    // mhs1.umur = 19;
    // mhs1.ipk = 3.76;

    // mhs1.alamat.jalan = "jalan paya dalu";
    // mhs1.alamat.kota = "medan";
    // mhs1.alamat.kodePos = 20155;

    // cout <<"Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa : " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "Ipk : " << mahasiswa[i].ipk << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat: ";
    getline (cin, kalimat); // sama sepertin cin namun akan berhenti ketika menjumpai karakter spasi

    for(i=0; i < kalimat.length(); i++){ // fungsi length menghitung jumlah elemen dalam suatu data struktur
         kalimat[i] = toupper(kalimat[i]); // Fungsi toupper digunakan untuk mengubah huruf kecil menjadi huruf besar
    }

    cout << "kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;


}
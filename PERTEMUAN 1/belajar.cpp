#include <iostream> // header untuk c++
#include <conio.h> // header untuk fungsi getche() dan getch()
using namespace std;


int main() { // fungsi utama atau tempat isi kodingan.
    string nama ;
    char kom, jeniskelamin;
    int  Nim;
    float ip;


     /* untuk cattan lebih 
     dari 1 line*/

    cout << "Hello World!" << endl;
    cout << "Masukkan nama anda: ";
    //cin >> nama; 
    getline(cin, nama); // untuk inputan lebih dari 1 kata
    cout << "masukkan Kom anda: ";
    cin >> kom;
    cout << "masukkan Nim anda: ";
    cin >> Nim;
    cout << "masukkan ip anda: ";
    cin >> ip;
    cout << "masukkan jeniskelamin anda (L/P) :";
    jeniskelamin = getche(); //agar karakter langsung tampil tanpa menekan enter

    // Tampilkan Output
    cout << "\n" <<  "Nama anda adalah: " << nama << endl;
    cout << "Kom anda adalah: " << kom << endl;
    cout << "Nim anda adalah: " << Nim << endl;
    cout << "ip anda adalah: " << ip << endl;
    putchar(jeniskelamin); // untuk menampilkan karakter yang diinputkan

    getch(); // Karakter yang diketik tidak ditampilkan di layar
    return 0;

}
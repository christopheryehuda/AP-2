#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namaVaribael(){
    string namaLokal = "Komputer";

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;

}

int main () {
    namaVaribael();

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; ga bisa
}
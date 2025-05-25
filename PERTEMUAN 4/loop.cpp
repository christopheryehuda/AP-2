#include <iostream>
using namespace std;

int main(){
    // goto label  // suatu intruksi yang memungkinkan kita untuk melompat ke suatu bagian dalam program
    // hello world, fasilkom-Ti, ilmu komputer, iklc
    // -> hello worl, iklc, ilmmu komputer, fasilkom_Ti
    
    // a:
    //    cout << "Hello World" << endl;
    //    goto d;
    // b:
    //    cout << "fasilkom-Ti" << endl;
    //    return 0;
    // c:
    //    cout << "Ilmu komputer" << endl;
    //    goto b;
    // d: 
    //    cout << "IKLC" << endl;
    //    goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) {
    //     cout << i << " ";
    // } i--;

    // if (i >= 2) {
    //     goto genap;
    // }

    // // statement while // merupakan statement perulangan dimana pernyataan yang terdapat dalam while akan diulang selama kondisi yang ditetapkan masih true
    // int i = 1;
    // while (i <= 10){
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // statement do-while // perulangan dilakukan selama kondisi bernilai benar dan akan berakhir jika bernilai false
    // int i= 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0);

    // statement for // melakukan perulangan selama kondisi yang diminta masih bernilai true
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2) {
    //     cout << "hello world" << endl; // i = i + 2
    // }

    // nested for // pengulangan dalam pengulangan
    // ***** 5 x 5
    // for (int i = 1; i<= 5; i++) {
    //     for (int j = 1; j <= 5; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // segitiga siku siku
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

}  
#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahanpointer(int *a , int *b) {
    *a += *b;
    cout << *a << endl;
} 

int main(){
    system("CLS");
    // pointer adalah variabel yang menyimpan alamat memori dari varibel lain 
    // Pointer Declaration
    int number = 35;
    int *pointer_number = &number;

    // cout <<"ini variabel number =" << number << endl;
    // cout <<"Alamat dari memori variabel number =" << &number << endl;
    // cout <<"ini variabel pointer_number =" << pointer_number << endl;
    // cout <<"isi variabel yang ditunjuk oleh pointer_number =" << *pointer_number << endl;
    // cout <<"alamat memori varibael pointer_number =" << &pointer_number << endl;
    // cout << endl;

    // pointer operation 
    // *pointer_number = 25;
    // cout <<"ini variabel number =" << number << endl;
    // cout <<"Alamat dari memori variabel number =" << &number << endl;
    // cout <<"isi variabel pointer_number =" << pointer_number << endl;
    // cout <<"isi variabel yang ditunjuk oleh pointer_number =" << *pointer_number << endl;
    // cout <<"alamat memori varibael pointer_number =" << &pointer_number << endl;
    // cout << endl;

    // pointer in array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    // cout <<"ini variabel number =" << num[0] << endl;
    // cout <<"Alamat dari memori variabel num =" << &num[3] << endl;
    // cout <<"isi variabel pointer_num =" << pointer_num << endl;
    // cout <<"isi variabel yang ditunjuk oleh pointer_num =" << *pointer_num << endl;
    // cout <<"alamat memori varibael pointer_num =" << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5;
    // cout <<"ini variabel number =" << num[0] << endl;
    // cout <<"Alamat dari memori variabel num =" << &num[3] << endl;
    // cout <<"isi variabel pointer_num =" << pointer_num << endl;
    // cout <<"isi variabel yang ditunjuk oleh pointer_num =" << *pointer_num << endl;
    // cout <<"alamat memori varibael pointer_num =" << &pointer_num << endl;
    // cout << endl;


    // pointer in parameter 
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;


    //pointer in pointer
    // int score = 4;
    // int *pointer_score = &score; // pointer_score menunjuk ke score
    // int **ptr_pointer_score = &pointer_score; // ptr_pointer_score menunjuk ke pointer_score
    // cout << "isi variable score = " << score << " dan Alamat memorinya = " << & score << endl;
    // cout << "isi variable pointer_score = " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score = " << *pointer_score  << " alamat memori pointer_score = " << &pointer_score << endl;
    // cout << "isi variable ptr_pointer_score = " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score = " << **ptr_pointer_score  << " alamat memori ptr_pointer_score = " << &ptr_pointer_score << endl;
   
    
    // dynamic pointer
    int *ptr = new int;
    *ptr = 30;
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr;
    cout << " isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

}
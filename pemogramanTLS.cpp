#include <iostream>
using namespace std;

int main (){
    double a,b,op;
    cout<<"Kalkulator Sederhana"<<endl;
    cout<<"==========================="<<endl;
    cout<<"Masukkan angka: "<<endl;
    cin>>a;
    cout<<"==========================="<<endl;
    cout<<"1: Tambah\t2: Kurang\n3: Kali\t\t4: Bagi"<<endl;
    cout<<"==========================="<<endl;
    cin>>op;
    cout<<"==========================="<<endl;
    cout<<"Masukkan angka: "<<endl;
    cout<<"==========================="<<endl;
    cin>>b;
    cout<<"==========================="<<endl;

    cout<<"Hasil= ";
    if(op == 1) cout << a+b << endl;
    else if(op == 2) cout << a-b << endl;
    else if(op == 3) cout << a*b << endl;
    else if (op == 4) cout << a/b << endl;
    else cout << "Tidak terdefinisi" << endl;

    return 0;
}
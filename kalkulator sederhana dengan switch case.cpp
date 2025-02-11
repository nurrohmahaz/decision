#include <iostream>
using namespace std;

int main (){
    double  s,r,t,V,L;
    int pilih;
    cout << "=== Menu kategori==="<<endl;
    cout << "1. Menghitung Volume Kubus"<<endl;
    cout << "2. Menghitung Luas Lingkaran "<<endl;
    cout << "3. Menghitung Volume Silinder\n"<<endl;
   
  
   cout << "Tentukan pilihanmu: ";
   cin >> pilih;
   
   switch (pilih){
       case 1:
       cout <<"Masukkan sisi: ";
       cin>> s;
       V = (s*s*s);
       cout <<"Rumus Volume Kubus adalah  V = (s*s*s) " <<endl;
       cout <<"Jadi Volume Kubus adalah  V = " <<V<<endl;
       break;
       case 2:
       cout <<"Masukkan jari-jari: ";
       cin >> r;
       L = (3.14 *r*r);
       cout <<"Rumus Luas Lingkaran adalah L = (3.14 *r*r) "<<endl;
       cout <<"Luas Lingkaran adalah = "<<L<<endl;
       break;
       case 3:
       cout <<"Masukkan Jari-jari: ";
       cin >>r;
       cout <<"Masukkan Tinggi: ";
       cin >>t;
       V = (3.14*r*r*t);
       cout <<"Rumus Volume Silinder Adalah V = (3.14*r*r*t) "<<endl; 
       cout <<"Volume Silinder Adalah = "<<V<<endl;
       break;
       default:
       cout <<"Pilihan tidak Tersedia"<<endl;
   }
    return 0;
}
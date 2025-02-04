#include <iostream>
using namespace std;
int main() {
   string warnalampu;
   
   cout << "Masukkan warna lampu : ";
   cin >> warnalampu;
   
   if (warnalampu == "merah"){
       cout << "Berhenti !";
   }else{
   if(warnalampu == "kuning"){
       cout << "Bersiap !";
   }else{
   if (warnalampu == "hijau"){
      cout << "Jalan !";
   }else{
       cout <<"warna tidak valid"<<endl;
   }
  }
 }
    return 0;
}